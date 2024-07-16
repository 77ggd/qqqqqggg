// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoACD/CoACD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoACD() {}
// Cross Module References
	COACD_API UEnum* Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode();
	UPackage* Z_Construct_UPackage__Script_CoACD();
	COACD_API UScriptStruct* Z_Construct_UScriptStruct_FCoACD_Args();
	COACD_API UClass* Z_Construct_UClass_UKismetCoACDLibrary_NoRegister();
	COACD_API UClass* Z_Construct_UClass_UKismetCoACDLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* ECoACD_PreprocessMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode, Z_Construct_UPackage__Script_CoACD(), TEXT("ECoACD_PreprocessMode"));
		}
		return Singleton;
	}
	template<> COACD_API UEnum* StaticEnum<ECoACD_PreprocessMode>()
	{
		return ECoACD_PreprocessMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECoACD_PreprocessMode(ECoACD_PreprocessMode_StaticEnum, TEXT("/Script/CoACD"), TEXT("ECoACD_PreprocessMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Hash() { return 422800380U; }
	UEnum* Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoACD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECoACD_PreprocessMode"), 0, Get_Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECoACD_PreprocessMode::Auto", (int64)ECoACD_PreprocessMode::Auto },
				{ "ECoACD_PreprocessMode::On", (int64)ECoACD_PreprocessMode::On },
				{ "ECoACD_PreprocessMode::Off", (int64)ECoACD_PreprocessMode::Off },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Name", "ECoACD_PreprocessMode::Auto" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "CoACD.h" },
				{ "Off.Name", "ECoACD_PreprocessMode::Off" },
				{ "On.Name", "ECoACD_PreprocessMode::On" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoACD,
				nullptr,
				"ECoACD_PreprocessMode",
				"ECoACD_PreprocessMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCoACD_Args::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COACD_API uint32 Get_Z_Construct_UScriptStruct_FCoACD_Args_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoACD_Args, Z_Construct_UPackage__Script_CoACD(), TEXT("CoACD_Args"), sizeof(FCoACD_Args), Get_Z_Construct_UScriptStruct_FCoACD_Args_Hash());
	}
	return Singleton;
}
template<> COACD_API UScriptStruct* StaticStruct<FCoACD_Args>()
{
	return FCoACD_Args::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCoACD_Args(FCoACD_Args::StaticStruct, TEXT("/Script/CoACD"), TEXT("CoACD_Args"), false, nullptr, nullptr);
static struct FScriptStruct_CoACD_StaticRegisterNativesFCoACD_Args
{
	FScriptStruct_CoACD_StaticRegisterNativesFCoACD_Args()
	{
		UScriptStruct::DeferCppStructOps<FCoACD_Args>(FName(TEXT("CoACD_Args")));
	}
} ScriptStruct_CoACD_StaticRegisterNativesFCoACD_Args;
	struct Z_Construct_UScriptStruct_FCoACD_Args_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreprocessMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreprocessMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreprocessMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreprocessResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreprocessResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MCTSNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MCTSNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MCTSIteration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MCTSIteration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MCTSMaxDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MCTSMaxDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PCA_MetaData[];
#endif
		static void NewProp_PCA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PCA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Merge_MetaData[];
#endif
		static void NewProp_Merge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Merge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConvexHull_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConvexHull;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceLODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveExistingCollision_MetaData[];
#endif
		static void NewProp_bRemoveExistingCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveExistingCollision;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialSlotNameKeywordsToExclude_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotNameKeywordsToExclude_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialSlotNameKeywordsToExclude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// CoACD execution arguments.\n// See https://colin97.github.io/CoACD/ for details.\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "CoACD execution arguments.\nSee https:colin97.github.io/CoACD/ for details." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoACD_Args>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Concavity threshold. With larger threshold, fewer convex components you will get.\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Concavity threshold. With larger threshold, fewer convex components you will get." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Threshold_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Voxelization preprocess toggle\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Voxelization preprocess toggle" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode = { "PreprocessMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, PreprocessMode), Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessResolution_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Voxelization preprocess resolution\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Voxelization preprocess resolution" },
		{ "UIMax", "100" },
		{ "UIMin", "20" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessResolution = { "PreprocessResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, PreprocessResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SampleResolution_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Voxelization sample resolution\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Voxelization sample resolution" },
		{ "UIMax", "10000" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SampleResolution = { "SampleResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, SampleResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SampleResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SampleResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSNodes_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Monte Carlo tree search nodes\n" },
		{ "DisplayName", "MCTS Nodes" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Monte Carlo tree search nodes" },
		{ "UIMax", "40" },
		{ "UIMin", "10" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSNodes = { "MCTSNodes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, MCTSNodes), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSIteration_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Monte Carlo tree search iterations\n" },
		{ "DisplayName", "MCTS Iteration" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Monte Carlo tree search iterations" },
		{ "UIMax", "2000" },
		{ "UIMin", "60" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSIteration = { "MCTSIteration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, MCTSIteration), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSIteration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSIteration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSMaxDepth_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Monte Carlo tree search max depth\n" },
		{ "DisplayName", "MCTS Max Depth" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Monte Carlo tree search max depth" },
		{ "UIMax", "7" },
		{ "UIMin", "2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSMaxDepth = { "MCTSMaxDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, MCTSMaxDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSMaxDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSMaxDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Whether to align the cutting plane directions with the principal axes of the input shape.\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Whether to align the cutting plane directions with the principal axes of the input shape." },
	};
#endif
	void Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA_SetBit(void* Obj)
	{
		((FCoACD_Args*)Obj)->PCA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA = { "PCA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCoACD_Args), &Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Whether to reduce the number of convex components through a post-processing merge.\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Whether to reduce the number of convex components through a post-processing merge." },
	};
#endif
	void Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge_SetBit(void* Obj)
	{
		((FCoACD_Args*)Obj)->Merge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge = { "Merge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCoACD_Args), &Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaxConvexHull_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Max convex components, -1 = no limit.\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Max convex components, -1 = no limit." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaxConvexHull = { "MaxConvexHull", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, MaxConvexHull), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaxConvexHull_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaxConvexHull_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "CoACD" },
		{ "Comment", "// Monte Carlo seed.\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Monte Carlo seed." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SourceLODIndex_MetaData[] = {
		{ "Category", "Params" },
		{ "Comment", "// LOD index of the source model.\n" },
		{ "DisplayName", "Source LOD Index" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "LOD index of the source model." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SourceLODIndex = { "SourceLODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, SourceLODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SourceLODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SourceLODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision_MetaData[] = {
		{ "Category", "Params" },
		{ "Comment", "// Whether to remove existing collision.\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Whether to remove existing collision." },
	};
#endif
	void Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision_SetBit(void* Obj)
	{
		((FCoACD_Args*)Obj)->bRemoveExistingCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision = { "bRemoveExistingCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCoACD_Args), &Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude_Inner = { "MaterialSlotNameKeywordsToExclude", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude_MetaData[] = {
		{ "Category", "Params" },
		{ "Comment", "// Blacklist of material slot names that never affect collision, for example, \"BackfaceOutline\".\n" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "ToolTip", "Blacklist of material slot names that never affect collision, for example, \"BackfaceOutline\"." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude = { "MaterialSlotNameKeywordsToExclude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCoACD_Args, MaterialSlotNameKeywordsToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoACD_Args_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SampleResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSIteration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSMaxDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaxConvexHull,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SourceLODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CoACD,
		nullptr,
		&NewStructOps,
		"CoACD_Args",
		sizeof(FCoACD_Args),
		alignof(FCoACD_Args),
		Z_Construct_UScriptStruct_FCoACD_Args_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoACD_Args_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoACD_Args()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCoACD_Args_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CoACD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CoACD_Args"), sizeof(FCoACD_Args), Get_Z_Construct_UScriptStruct_FCoACD_Args_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCoACD_Args_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCoACD_Args_Hash() { return 3277082054U; }
	DEFINE_FUNCTION(UKismetCoACDLibrary::execGenerateConvexCollisionForStaticMeshUsingCoACD)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh);
		P_GET_STRUCT(FCoACD_Args,Z_Param_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetCoACDLibrary::GenerateConvexCollisionForStaticMeshUsingCoACD(Z_Param_InMesh,Z_Param_Args);
		P_NATIVE_END;
	}
	void UKismetCoACDLibrary::StaticRegisterNativesUKismetCoACDLibrary()
	{
		UClass* Class = UKismetCoACDLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateConvexCollisionForStaticMeshUsingCoACD", &UKismetCoACDLibrary::execGenerateConvexCollisionForStaticMeshUsingCoACD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics
	{
		struct KismetCoACDLibrary_eventGenerateConvexCollisionForStaticMeshUsingCoACD_Parms
		{
			UStaticMesh* InMesh;
			FCoACD_Args Args;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Args;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetCoACDLibrary_eventGenerateConvexCollisionForStaticMeshUsingCoACD_Parms, InMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetCoACDLibrary_eventGenerateConvexCollisionForStaticMeshUsingCoACD_Parms, Args), Z_Construct_UScriptStruct_FCoACD_Args, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::NewProp_InMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::NewProp_Args,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CoACD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetCoACDLibrary, nullptr, "GenerateConvexCollisionForStaticMeshUsingCoACD", nullptr, nullptr, sizeof(KismetCoACDLibrary_eventGenerateConvexCollisionForStaticMeshUsingCoACD_Parms), Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetCoACDLibrary_NoRegister()
	{
		return UKismetCoACDLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetCoACDLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetCoACDLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CoACD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetCoACDLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD, "GenerateConvexCollisionForStaticMeshUsingCoACD" }, // 2053911428
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetCoACDLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoACD.h" },
		{ "ModuleRelativePath", "CoACD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetCoACDLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetCoACDLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetCoACDLibrary_Statics::ClassParams = {
		&UKismetCoACDLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKismetCoACDLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetCoACDLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetCoACDLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetCoACDLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetCoACDLibrary, 1572739388);
	template<> COACD_API UClass* StaticClass<UKismetCoACDLibrary>()
	{
		return UKismetCoACDLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetCoACDLibrary(Z_Construct_UClass_UKismetCoACDLibrary, &UKismetCoACDLibrary::StaticClass, TEXT("/Script/CoACD"), TEXT("UKismetCoACDLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetCoACDLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
