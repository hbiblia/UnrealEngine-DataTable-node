// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
struct FDataTableStructBase;
#ifdef DATATABLEEXT_DataTableExtBPLibrary_generated_h
#error "DataTableExtBPLibrary.generated.h already included, missing '#pragma once' in DataTableExtBPLibrary.h"
#endif
#define DATATABLEEXT_DataTableExtBPLibrary_generated_h

#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataTableStructBase_Statics; \
	DATATABLEEXT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DATATABLEEXT_API UScriptStruct* StaticStruct<struct FDataTableStructBase>();

#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_SPARSE_DATA
#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveDataTableRow);


#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveDataTableRow);


#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataTableExtBPLibrary(); \
	friend struct Z_Construct_UClass_UDataTableExtBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataTableExtBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataTableExt"), NO_API) \
	DECLARE_SERIALIZER(UDataTableExtBPLibrary)


#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDataTableExtBPLibrary(); \
	friend struct Z_Construct_UClass_UDataTableExtBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataTableExtBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataTableExt"), NO_API) \
	DECLARE_SERIALIZER(UDataTableExtBPLibrary)


#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataTableExtBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableExtBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataTableExtBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableExtBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataTableExtBPLibrary(UDataTableExtBPLibrary&&); \
	NO_API UDataTableExtBPLibrary(const UDataTableExtBPLibrary&); \
public:


#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataTableExtBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataTableExtBPLibrary(UDataTableExtBPLibrary&&); \
	NO_API UDataTableExtBPLibrary(const UDataTableExtBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataTableExtBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableExtBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableExtBPLibrary)


#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_23_PROLOG
#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_SPARSE_DATA \
	FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_RPC_WRAPPERS \
	FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_INCLASS \
	FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_SPARSE_DATA \
	FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataTableExtBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATATABLEEXT_API UClass* StaticClass<class UDataTableExtBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
