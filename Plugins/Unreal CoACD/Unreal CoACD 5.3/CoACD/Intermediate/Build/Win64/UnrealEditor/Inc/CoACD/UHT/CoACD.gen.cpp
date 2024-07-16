// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoACD/CoACD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoACD() {}
// Cross Module References
	COACD_API UClass* Z_Construct_UClass_UKismetCoACDLibrary();
	COACD_API UClass* Z_Construct_UClass_UKismetCoACDLibrary_NoRegister();
	COACD_API UEnum* Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode();
	COACD_API UScriptStruct* Z_Construct_UScriptStruct_FCoACD_Args();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CoACD();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECoACD_PreprocessMode;
	static UEnum* ECoACD_PreprocessMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECoACD_PreprocessMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECoACD_PreprocessMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode, (UObject*)Z_Construct_UPackage__Script_CoACD(), TEXT("ECoACD_PreprocessMode"));
		}
		return Z_Registration_Info_UEnum_ECoACD_PreprocessMode.OuterSingleton;
	}
	template<> COACD_API UEnum* StaticEnum<ECoACD_PreprocessMode>()
	{
		return ECoACD_PreprocessMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Statics::Enumerators[] = {
		{ "ECoACD_PreprocessMode::Auto", (int64)ECoACD_PreprocessMode::Auto },
		{ "ECoACD_PreprocessMode::On", (int64)ECoACD_PreprocessMode::On },
		{ "ECoACD_PreprocessMode::Off", (int64)ECoACD_PreprocessMode::Off },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "ECoACD_PreprocessMode::Auto" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CoACD.h" },
		{ "Off.Name", "ECoACD_PreprocessMode::Off" },
		{ "On.Name", "ECoACD_PreprocessMode::On" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CoACD,
		nullptr,
		"ECoACD_PreprocessMode",
		"ECoACD_PreprocessMode",
		Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode()
	{
		if (!Z_Registration_Info_UEnum_ECoACD_PreprocessMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECoACD_PreprocessMode.InnerSingleton, Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECoACD_PreprocessMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoACD_Args;
class UScriptStruct* FCoACD_Args::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoACD_Args.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoACD_Args.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoACD_Args, (UObject*)Z_Construct_UPackage__Script_CoACD(), TEXT("CoACD_Args"));
	}
	return Z_Registration_Info_UScriptStruct_CoACD_Args.OuterSingleton;
}
template<> COACD_API UScriptStruct* StaticStruct<FCoACD_Args>()
{
	return FCoACD_Args::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoACD_Args_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreprocessMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreprocessMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreprocessMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreprocessResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreprocessResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MCTSNodes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MCTSNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MCTSIteration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MCTSIteration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MCTSMaxDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MCTSMaxDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCA_MetaData[];
#endif
		static void NewProp_PCA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PCA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Merge_MetaData[];
#endif
		static void NewProp_Merge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Merge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxConvexHull_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConvexHull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceLODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveExistingCollision_MetaData[];
#endif
		static void NewProp_bRemoveExistingCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveExistingCollision;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialSlotNameKeywordsToExclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotNameKeywordsToExclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialSlotNameKeywordsToExclude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CoACD execution arguments.\n// See https://colin97.github.io/CoACD/ for details.\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CoACD execution arguments.\nSee https:colin97.github.io/CoACD/ for details." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoACD_Args>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Concavity threshold. With larger threshold, fewer convex components you will get.\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Concavity threshold. With larger threshold, fewer convex components you will get." },
#endif
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Threshold_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Threshold_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voxelization preprocess toggle\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxelization preprocess toggle" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode = { "PreprocessMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, PreprocessMode), Z_Construct_UEnum_CoACD_ECoACD_PreprocessMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode_MetaData) }; // 3972409605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessResolution_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voxelization preprocess resolution\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxelization preprocess resolution" },
#endif
		{ "UIMax", "100" },
		{ "UIMin", "20" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessResolution = { "PreprocessResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, PreprocessResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessResolution_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SampleResolution_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voxelization sample resolution\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxelization sample resolution" },
#endif
		{ "UIMax", "10000" },
		{ "UIMin", "1000" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SampleResolution = { "SampleResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, SampleResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SampleResolution_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SampleResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSNodes_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Monte Carlo tree search nodes\n" },
#endif
		{ "DisplayName", "MCTS Nodes" },
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Monte Carlo tree search nodes" },
#endif
		{ "UIMax", "40" },
		{ "UIMin", "10" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSNodes = { "MCTSNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, MCTSNodes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSNodes_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSIteration_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Monte Carlo tree search iterations\n" },
#endif
		{ "DisplayName", "MCTS Iteration" },
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Monte Carlo tree search iterations" },
#endif
		{ "UIMax", "2000" },
		{ "UIMin", "60" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSIteration = { "MCTSIteration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, MCTSIteration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSIteration_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSIteration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSMaxDepth_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Monte Carlo tree search max depth\n" },
#endif
		{ "DisplayName", "MCTS Max Depth" },
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Monte Carlo tree search max depth" },
#endif
		{ "UIMax", "7" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSMaxDepth = { "MCTSMaxDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, MCTSMaxDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSMaxDepth_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSMaxDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to align the cutting plane directions with the principal axes of the input shape.\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to align the cutting plane directions with the principal axes of the input shape." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA_SetBit(void* Obj)
	{
		((FCoACD_Args*)Obj)->PCA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA = { "PCA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCoACD_Args), &Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to reduce the number of convex components through a post-processing merge.\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to reduce the number of convex components through a post-processing merge." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge_SetBit(void* Obj)
	{
		((FCoACD_Args*)Obj)->Merge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge = { "Merge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCoACD_Args), &Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaxConvexHull_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max convex components, -1 = no limit.\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max convex components, -1 = no limit." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaxConvexHull = { "MaxConvexHull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, MaxConvexHull), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaxConvexHull_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaxConvexHull_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "CoACD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Monte Carlo seed.\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Monte Carlo seed." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Seed_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Seed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SourceLODIndex_MetaData[] = {
		{ "Category", "Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// LOD index of the source model.\n" },
#endif
		{ "DisplayName", "Source LOD Index" },
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LOD index of the source model." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SourceLODIndex = { "SourceLODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, SourceLODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SourceLODIndex_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SourceLODIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision_MetaData[] = {
		{ "Category", "Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to remove existing collision.\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to remove existing collision." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision_SetBit(void* Obj)
	{
		((FCoACD_Args*)Obj)->bRemoveExistingCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision = { "bRemoveExistingCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCoACD_Args), &Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude_Inner = { "MaterialSlotNameKeywordsToExclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude_MetaData[] = {
		{ "Category", "Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blacklist of material slot names that never affect collision, for example, \"BackfaceOutline\".\n" },
#endif
		{ "ModuleRelativePath", "CoACD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blacklist of material slot names that never affect collision, for example, \"BackfaceOutline\"." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude = { "MaterialSlotNameKeywordsToExclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoACD_Args, MaterialSlotNameKeywordsToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude_MetaData), Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoACD_Args_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PreprocessResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SampleResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSIteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MCTSMaxDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_PCA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Merge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaxConvexHull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_SourceLODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_bRemoveExistingCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewProp_MaterialSlotNameKeywordsToExclude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoACD_Args_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CoACD,
		nullptr,
		&NewStructOps,
		"CoACD_Args",
		Z_Construct_UScriptStruct_FCoACD_Args_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::PropPointers),
		sizeof(FCoACD_Args),
		alignof(FCoACD_Args),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoACD_Args_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoACD_Args_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCoACD_Args()
	{
		if (!Z_Registration_Info_UScriptStruct_CoACD_Args.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoACD_Args.InnerSingleton, Z_Construct_UScriptStruct_FCoACD_Args_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoACD_Args.InnerSingleton;
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Args;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetCoACDLibrary_eventGenerateConvexCollisionForStaticMeshUsingCoACD_Parms, InMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetCoACDLibrary_eventGenerateConvexCollisionForStaticMeshUsingCoACD_Parms, Args), Z_Construct_UScriptStruct_FCoACD_Args, METADATA_PARAMS(0, nullptr) }; // 908122941
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::NewProp_InMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::NewProp_Args,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CoACD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetCoACDLibrary, nullptr, "GenerateConvexCollisionForStaticMeshUsingCoACD", nullptr, nullptr, Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::KismetCoACDLibrary_eventGenerateConvexCollisionForStaticMeshUsingCoACD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::KismetCoACDLibrary_eventGenerateConvexCollisionForStaticMeshUsingCoACD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetCoACDLibrary);
	UClass* Z_Construct_UClass_UKismetCoACDLibrary_NoRegister()
	{
		return UKismetCoACDLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetCoACDLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetCoACDLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CoACD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetCoACDLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetCoACDLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetCoACDLibrary_GenerateConvexCollisionForStaticMeshUsingCoACD, "GenerateConvexCollisionForStaticMeshUsingCoACD" }, // 1585394720
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetCoACDLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetCoACDLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoACD.h" },
		{ "ModuleRelativePath", "CoACD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetCoACDLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetCoACDLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetCoACDLibrary_Statics::ClassParams = {
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetCoACDLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UKismetCoACDLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UKismetCoACDLibrary()
	{
		if (!Z_Registration_Info_UClass_UKismetCoACDLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetCoACDLibrary.OuterSingleton, Z_Construct_UClass_UKismetCoACDLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKismetCoACDLibrary.OuterSingleton;
	}
	template<> COACD_API UClass* StaticClass<UKismetCoACDLibrary>()
	{
		return UKismetCoACDLibrary::StaticClass();
	}
	UKismetCoACDLibrary::UKismetCoACDLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetCoACDLibrary);
	UKismetCoACDLibrary::~UKismetCoACDLibrary() {}
	struct Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_Statics::EnumInfo[] = {
		{ ECoACD_PreprocessMode_StaticEnum, TEXT("ECoACD_PreprocessMode"), &Z_Registration_Info_UEnum_ECoACD_PreprocessMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3972409605U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_Statics::ScriptStructInfo[] = {
		{ FCoACD_Args::StaticStruct, Z_Construct_UScriptStruct_FCoACD_Args_Statics::NewStructOps, TEXT("CoACD_Args"), &Z_Registration_Info_UScriptStruct_CoACD_Args, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoACD_Args), 908122941U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKismetCoACDLibrary, UKismetCoACDLibrary::StaticClass, TEXT("UKismetCoACDLibrary"), &Z_Registration_Info_UClass_UKismetCoACDLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetCoACDLibrary), 2935279295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_2090512040(TEXT("/Script/CoACD"),
		Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
