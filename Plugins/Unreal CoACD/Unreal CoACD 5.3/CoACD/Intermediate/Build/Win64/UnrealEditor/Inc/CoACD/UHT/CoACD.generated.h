// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoACD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
struct FCoACD_Args;
#ifdef COACD_CoACD_generated_h
#error "CoACD.generated.h already included, missing '#pragma once' in CoACD.h"
#endif
#define COACD_CoACD_generated_h

#define FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoACD_Args_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COACD_API UScriptStruct* StaticStruct<struct FCoACD_Args>();

#define FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_SPARSE_DATA
#define FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateConvexCollisionForStaticMeshUsingCoACD);


#define FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_ACCESSORS
#define FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetCoACDLibrary(); \
	friend struct Z_Construct_UClass_UKismetCoACDLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetCoACDLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoACD"), NO_API) \
	DECLARE_SERIALIZER(UKismetCoACDLibrary)


#define FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetCoACDLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetCoACDLibrary(UKismetCoACDLibrary&&); \
	NO_API UKismetCoACDLibrary(const UKismetCoACDLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetCoACDLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetCoACDLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetCoACDLibrary) \
	NO_API virtual ~UKismetCoACDLibrary();


#define FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_92_PROLOG
#define FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_SPARSE_DATA \
	FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_ACCESSORS \
	FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_INCLASS_NO_PURE_DECLS \
	FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COACD_API UClass* StaticClass<class UKismetCoACDLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Project_qqqqqggg_Plugins_Unreal_CoACD_Unreal_CoACD_5_3_CoACD_Source_CoACD_CoACD_h


#define FOREACH_ENUM_ECOACD_PREPROCESSMODE(op) \
	op(ECoACD_PreprocessMode::Auto) \
	op(ECoACD_PreprocessMode::On) \
	op(ECoACD_PreprocessMode::Off) 

enum class ECoACD_PreprocessMode : uint8;
template<> struct TIsUEnumClass<ECoACD_PreprocessMode> { enum { Value = true }; };
template<> COACD_API UEnum* StaticEnum<ECoACD_PreprocessMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
