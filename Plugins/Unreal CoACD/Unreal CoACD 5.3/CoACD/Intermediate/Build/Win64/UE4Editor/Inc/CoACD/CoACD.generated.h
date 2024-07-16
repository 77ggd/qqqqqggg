// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
struct FCoACD_Args;
#ifdef COACD_CoACD_generated_h
#error "CoACD.generated.h already included, missing '#pragma once' in CoACD.h"
#endif
#define COACD_CoACD_generated_h

#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoACD_Args_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COACD_API UScriptStruct* StaticStruct<struct FCoACD_Args>();

#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_SPARSE_DATA
#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateConvexCollisionForStaticMeshUsingCoACD);


#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateConvexCollisionForStaticMeshUsingCoACD);


#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetCoACDLibrary(); \
	friend struct Z_Construct_UClass_UKismetCoACDLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetCoACDLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoACD"), NO_API) \
	DECLARE_SERIALIZER(UKismetCoACDLibrary)


#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUKismetCoACDLibrary(); \
	friend struct Z_Construct_UClass_UKismetCoACDLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetCoACDLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoACD"), NO_API) \
	DECLARE_SERIALIZER(UKismetCoACDLibrary)


#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetCoACDLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetCoACDLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetCoACDLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetCoACDLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetCoACDLibrary(UKismetCoACDLibrary&&); \
	NO_API UKismetCoACDLibrary(const UKismetCoACDLibrary&); \
public:


#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetCoACDLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetCoACDLibrary(UKismetCoACDLibrary&&); \
	NO_API UKismetCoACDLibrary(const UKismetCoACDLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetCoACDLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetCoACDLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetCoACDLibrary)


#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_92_PROLOG
#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_SPARSE_DATA \
	MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_RPC_WRAPPERS \
	MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_INCLASS \
	MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_SPARSE_DATA \
	MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_CoACD_Source_CoACD_CoACD_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COACD_API UClass* StaticClass<class UKismetCoACDLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_CoACD_Source_CoACD_CoACD_h


#define FOREACH_ENUM_ECOACD_PREPROCESSMODE(op) \
	op(ECoACD_PreprocessMode::Auto) \
	op(ECoACD_PreprocessMode::On) \
	op(ECoACD_PreprocessMode::Off) 

enum class ECoACD_PreprocessMode : uint8;
template<> COACD_API UEnum* StaticEnum<ECoACD_PreprocessMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
