// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTableExt/Public/DataTableExtBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableExtBPLibrary() {}
// Cross Module References
	DATATABLEEXT_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableStructBase();
	UPackage* Z_Construct_UPackage__Script_DataTableExt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	DATATABLEEXT_API UClass* Z_Construct_UClass_UDataTableExtBPLibrary_NoRegister();
	DATATABLEEXT_API UClass* Z_Construct_UClass_UDataTableExtBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FDataTableStructBase>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDataTableStructBase cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataTableStructBase;
class UScriptStruct* FDataTableStructBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataTableStructBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataTableStructBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableStructBase, Z_Construct_UPackage__Script_DataTableExt(), TEXT("DataTableStructBase"));
	}
	return Z_Registration_Info_UScriptStruct_DataTableStructBase.OuterSingleton;
}
template<> DATATABLEEXT_API UScriptStruct* StaticStruct<FDataTableStructBase>()
{
	return FDataTableStructBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataTableStructBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableStructBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTableExtBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataTableStructBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableStructBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableStructBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataTableExt,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DataTableStructBase",
		sizeof(FDataTableStructBase),
		alignof(FDataTableStructBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableStructBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableStructBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataTableStructBase()
	{
		if (!Z_Registration_Info_UScriptStruct_DataTableStructBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataTableStructBase.InnerSingleton, Z_Construct_UScriptStruct_FDataTableStructBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataTableStructBase.InnerSingleton;
	}
	DEFINE_FUNCTION(UDataTableExtBPLibrary::execRemoveDataTableRow)
	{
		P_GET_OBJECT(UDataTable,Z_Param_table);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataTableExtBPLibrary::RemoveDataTableRow(Z_Param_table,Z_Param_RowName);
		P_NATIVE_END;
	}
	void UDataTableExtBPLibrary::StaticRegisterNativesUDataTableExtBPLibrary()
	{
		UClass* Class = UDataTableExtBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDataTableRow", &UDataTableExtBPLibrary::execAddDataTableRow },
			{ "RemoveDataTableRow", &UDataTableExtBPLibrary::execRemoveDataTableRow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics
	{
		struct DataTableExtBPLibrary_eventAddDataTableRow_Parms
		{
			UDataTable* table;
			FName RowName;
			FDataTableStructBase Struct;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_table;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_table = { "table", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableExtBPLibrary_eventAddDataTableRow_Parms, table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableExtBPLibrary_eventAddDataTableRow_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_RowName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableExtBPLibrary_eventAddDataTableRow_Parms, Struct), Z_Construct_UScriptStruct_FDataTableStructBase, METADATA_PARAMS(nullptr, 0) }; // 2214936905
	void Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableExtBPLibrary_eventAddDataTableRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableExtBPLibrary_eventAddDataTableRow_Parms), &Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_table,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_RowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTable" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/DataTableExtBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableExtBPLibrary, nullptr, "AddDataTableRow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::DataTableExtBPLibrary_eventAddDataTableRow_Parms), Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics
	{
		struct DataTableExtBPLibrary_eventRemoveDataTableRow_Parms
		{
			UDataTable* table;
			FName RowName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_table;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::NewProp_table = { "table", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableExtBPLibrary_eventRemoveDataTableRow_Parms, table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableExtBPLibrary_eventRemoveDataTableRow_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::NewProp_table,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::NewProp_RowName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "Public/DataTableExtBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableExtBPLibrary, nullptr, "RemoveDataTableRow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::DataTableExtBPLibrary_eventRemoveDataTableRow_Parms), Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataTableExtBPLibrary);
	UClass* Z_Construct_UClass_UDataTableExtBPLibrary_NoRegister()
	{
		return UDataTableExtBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDataTableExtBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataTableExtBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DataTableExt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataTableExtBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataTableExtBPLibrary_AddDataTableRow, "AddDataTableRow" }, // 4039676305
		{ &Z_Construct_UFunction_UDataTableExtBPLibrary_RemoveDataTableRow, "RemoveDataTableRow" }, // 653289649
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTableExtBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataTableExtBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DataTableExtBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataTableExtBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataTableExtBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataTableExtBPLibrary_Statics::ClassParams = {
		&UDataTableExtBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataTableExtBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTableExtBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataTableExtBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UDataTableExtBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataTableExtBPLibrary.OuterSingleton, Z_Construct_UClass_UDataTableExtBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataTableExtBPLibrary.OuterSingleton;
	}
	template<> DATATABLEEXT_API UClass* StaticClass<UDataTableExtBPLibrary>()
	{
		return UDataTableExtBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataTableExtBPLibrary);
	struct Z_CompiledInDeferFile_FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FDataTableStructBase::StaticStruct, Z_Construct_UScriptStruct_FDataTableStructBase_Statics::NewStructOps, TEXT("DataTableStructBase"), &Z_Registration_Info_UScriptStruct_DataTableStructBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataTableStructBase), 2214936905U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataTableExtBPLibrary, UDataTableExtBPLibrary::StaticClass, TEXT("UDataTableExtBPLibrary"), &Z_Registration_Info_UClass_UDataTableExtBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataTableExtBPLibrary), 2048773506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_630301137(TEXT("/Script/DataTableExt"),
		Z_CompiledInDeferFile_FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_v2_Plugins_DataTableExt_Source_DataTableExt_Public_DataTableExtBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
