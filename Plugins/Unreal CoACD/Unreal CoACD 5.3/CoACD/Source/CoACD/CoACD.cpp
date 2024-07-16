// Copyright PJLF Group. All Rights Reserved.

#include "CoACD.h"
#include "MeshUtilities.h"
#include "MeshDescription.h"
#include "Engine/StaticMesh.h"
#include "RawMesh.h"
#include "PhysicsEngine\ConvexElem.h"
#include "Interfaces/IPluginManager.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"

#pragma warning(disable : 4459)

DEFINE_LOG_CATEGORY_STATIC(LogCoACD, Log, All);
#if PLATFORM_WINDOWS

static void* DllHandle = nullptr;
static FCriticalSection CritSec;

struct CoACD_Mesh {
	double* vertices_ptr;
	uint64_t vertices_count;
	int* triangles_ptr;
	uint64_t triangles_count;
};

struct CoACD_MeshArray {
	CoACD_Mesh* meshes_ptr;
	uint64_t meshes_count;
};

typedef CoACD_MeshArray(*_CoACD_run)
(CoACD_Mesh const& input, double threshold,
	int max_convex_hull, int preprocess_mode,
	int prep_resolution, int sample_resolution,
	int mcts_nodes, int mcts_iteration,
	int mcts_max_depth, bool pca, bool merge,
	unsigned int seed);
typedef void(*_CoACD_freeMeshArray)(CoACD_MeshArray arr);
typedef void(*_CoACD_setLogLevel)(char const* level);

_CoACD_run CoACD_run = nullptr;
_CoACD_freeMeshArray CoACD_freeMeshArray = nullptr;
_CoACD_setLogLevel CoACD_setLogLevel = nullptr;

void FCoACD::StartupModule()
{
	if (!DllHandle)
	{
		FScopeLock lock(&CritSec);
		if (!DllHandle)
		{
#ifdef PLATFORM_WINDOWS
			const FString LibName = TEXT("lib_coacd.dll");
			const FString PluginDir = IPluginManager::Get().FindPlugin(TEXT("CoACD"))->GetBaseDir();
			const FString DllPath = FPaths::Combine(PluginDir, TEXT("ThirdParty/CoACD/DLL"), LibName);

			// Try to load DLL
			DllHandle = FPlatformProcess::GetDllHandle(*DllPath);

			if (DllHandle)
			{
				const FString StrOk(TEXT("ok"));
				const FString StrFail(TEXT("NOT FOUND!"));

				CoACD_run = (_CoACD_run)FPlatformProcess::GetDllExport(DllHandle, TEXT("CoACD_run"));
				check(CoACD_run);
				UE_LOG(LogCoACD, Log, TEXT("CoACD API: %s - %s."), TEXT("CoACD_run"), CoACD_run ? *StrOk : *StrFail);

				CoACD_freeMeshArray = (_CoACD_freeMeshArray)FPlatformProcess::GetDllExport(DllHandle, TEXT("CoACD_freeMeshArray"));
				check(CoACD_freeMeshArray);
				UE_LOG(LogCoACD, Log, TEXT("CoACD API: %s - %s."), TEXT("CoACD_freeMeshArray"), CoACD_freeMeshArray ? *StrOk : *StrFail);

				CoACD_setLogLevel = (_CoACD_setLogLevel)FPlatformProcess::GetDllExport(DllHandle, TEXT("CoACD_setLogLevel"));
				check(CoACD_setLogLevel);
				UE_LOG(LogCoACD, Log, TEXT("CoACD API: %s - %s."), TEXT("CoACD_setLogLevel"), CoACD_run ? *StrOk : *StrFail);
			}
			else
			{
				UE_LOG(LogCoACD, Error, TEXT("Couldn't initialize CoACD API. No <%s> library found."), *DllPath);
			}
#endif
		}
	}
}

void FCoACD::ShutdownModule()
{
	if (DllHandle)
	{
		FScopeLock lock(&CritSec);
		if (DllHandle)
		{
			CoACD_run = nullptr;
			CoACD_freeMeshArray = nullptr;
			CoACD_setLogLevel = nullptr;

			FPlatformProcess::FreeDllHandle(DllHandle);
			DllHandle = nullptr;
		}
	}
}

#else
void FCoACD::StartupModule() {}
void FCoACD::ShutdownModule() {}
#endif

IMPLEMENT_MODULE(FCoACD, CoACD)

static bool DeleteWedgeByMaterialIDs(FRawMesh& RawMesh, const TArray<int32>& MaterialIDs, bool bCleanUpVertexPositions)
{
	if (!MaterialIDs.ContainsByPredicate([](int32 i) { return i >= 0; })) return false;

	bool bModified = false;
	for (int32 i = RawMesh.FaceMaterialIndices.Num() - 1; i >= 0; --i)
		if (MaterialIDs.Contains(RawMesh.FaceMaterialIndices[i]))
		{
			RawMesh.FaceMaterialIndices.RemoveAt(i);
			RawMesh.FaceSmoothingMasks.RemoveAt(i);
			for (int32 j = 2; j >= 0; --j)
			{
				int32 k = 3 * i + j;
				if (RawMesh.WedgeColors.IsValidIndex(k)) RawMesh.WedgeColors.RemoveAt(k);
				if (RawMesh.WedgeIndices.IsValidIndex(k)) RawMesh.WedgeIndices.RemoveAt(k);
				if (RawMesh.WedgeTangentX.IsValidIndex(k)) RawMesh.WedgeTangentX.RemoveAt(k);
				if (RawMesh.WedgeTangentY.IsValidIndex(k)) RawMesh.WedgeTangentY.RemoveAt(k);
				if (RawMesh.WedgeTangentZ.IsValidIndex(k)) RawMesh.WedgeTangentZ.RemoveAt(k);
				for (int32 m = 0; m < MAX_MESH_TEXTURE_COORDS; ++m)
					if (RawMesh.WedgeTexCoords[m].IsValidIndex(k)) RawMesh.WedgeTexCoords[m].RemoveAt(k);
			}
			bModified = true;
		}

	if (bModified && bCleanUpVertexPositions)
	{
		TSet<uint32> UsedVIDs(RawMesh.WedgeIndices);
		TArray<uint32> UnusedVIDs;
		UnusedVIDs.Reserve(RawMesh.VertexPositions.Num() - UsedVIDs.Num());
		for (int32 i = RawMesh.VertexPositions.Num() - 1; i >= 0; --i)
		{
			if (!UsedVIDs.Contains(i)) UnusedVIDs.Add(i);
		}
		for (uint32 ID : UnusedVIDs)
		{
			RawMesh.VertexPositions.RemoveAt(ID);
			for (uint32& WID : RawMesh.WedgeIndices)
			{
				ensure(WID != ID);
				if (WID > ID) WID -= 1;
			}
		}
	}

	return bModified;
}

void UKismetCoACDLibrary::GenerateConvexCollisionForStaticMeshUsingCoACD(class UStaticMesh* InMesh, FCoACD_Args Args)
{
#if PLATFORM_WINDOWS
	if (!DllHandle || !CoACD_run || !CoACD_freeMeshArray)
	{
		UE_LOG(LogCoACD, Error, TEXT("Failed to load target Dll!"));
		return;
	}
	if (!IsValid(InMesh)) return;

	const TArray<FStaticMeshSourceModel>& SourceModels = InMesh->GetSourceModels();
	if (!SourceModels.Num()) return;

	FRawMesh RawMesh;
	SourceModels[FMath::Clamp(Args.SourceLODIndex, 0, SourceModels.Num() - 1)].LoadRawMesh(RawMesh);
	if (Args.MaterialSlotNameKeywordsToExclude.Num())
	{
		TArray<int32> BlacklistIndices;
		const auto& StaticMaterials = InMesh->GetStaticMaterials();
		for (const auto& StaticMat : StaticMaterials)
		{
			const FString& SlotNameStr = StaticMat.MaterialSlotName.ToString();
			for (const auto& KeyWord : Args.MaterialSlotNameKeywordsToExclude)
				if (SlotNameStr.Contains(KeyWord, ESearchCase::IgnoreCase))
				{
					BlacklistIndices.Add(&StaticMat - StaticMaterials.GetData());
					break;
				}
		}
		DeleteWedgeByMaterialIDs(RawMesh, BlacklistIndices, true);
	}

	CoACD_MeshArray Result;
	CoACD_Mesh Input;

	Input.vertices_count = RawMesh.VertexPositions.Num();
	Input.vertices_ptr = new double[Input.vertices_count * 3];
	for (int32 i = 0; i < RawMesh.VertexPositions.Num(); ++i)
		for (int32 j = 0; j < 3; ++j)
			Input.vertices_ptr[i * 3 + j] = (double)RawMesh.VertexPositions[i][j];

	Input.triangles_count = RawMesh.WedgeIndices.Num() / 3;
	Input.triangles_ptr = new int[RawMesh.WedgeIndices.Num()];
	for (int32 i = 0; i < RawMesh.WedgeIndices.Num(); ++i)
		Input.triangles_ptr[i] = RawMesh.WedgeIndices[i];

	try {
		Result = CoACD_run(
			Input,
			Args.Threshold,
			Args.MaxConvexHull,
			(int)Args.PreprocessMode,
			Args.PreprocessResolution,
			Args.SampleResolution,
			Args.MCTSNodes,
			Args.MCTSIteration,
			Args.MCTSMaxDepth,
			Args.PCA,
			Args.Merge,
			Args.Seed
		);
	}
	catch (std::exception e)
	{
		UE_LOG(LogCoACD, Error, TEXT("%s"), *FString(e.what()));
		return;
	}

	InMesh->Modify();
	InMesh->CreateBodySetup();
	auto* BodySetup = InMesh->GetBodySetup();
	check(BodySetup);

	if (Args.bRemoveExistingCollision)
	{
		BodySetup->RemoveSimpleCollision();
	}

	auto& ConvexElems = BodySetup->AggGeom.ConvexElems;
	int32 FirstNewConvexIdx = ConvexElems.Num();
	ConvexElems.AddDefaulted(Result.meshes_count);

	for (int32 i = 0; i < Result.meshes_count; ++i)
	{
		FKConvexElem& ConvexElem = ConvexElems[FirstNewConvexIdx + i];
		auto& ResultMesh = Result.meshes_ptr[i];
		ConvexElem.VertexData.SetNumUninitialized(ResultMesh.vertices_count);
		for (int32 p = 0; p < ResultMesh.vertices_count; ++p)
			for (int32 q = 0; q < 3; ++q)
				ConvexElem.VertexData[p][q] = ResultMesh.vertices_ptr[3 * p + q];
		ConvexElem.IndexData.SetNumUninitialized(ResultMesh.triangles_count * 3);
		for (int32 p = 0; p < ConvexElem.IndexData.Num(); ++p)
			ConvexElem.IndexData[p] = ResultMesh.triangles_ptr[p];
		ConvexElem.UpdateElemBox();
	}

	BodySetup->InvalidatePhysicsData();

	delete[] Input.vertices_ptr;
	delete[] Input.triangles_ptr;
	CoACD_freeMeshArray(Result);
#endif
}
