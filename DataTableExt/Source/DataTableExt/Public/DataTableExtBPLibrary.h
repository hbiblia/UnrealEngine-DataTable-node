// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "DataTableExtBPLibrary.generated.h"

USTRUCT(BlueprintInternalUseOnly)
struct FDataTableStructBase : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

		FDataTableStructBase()
	{
	}

	virtual ~FDataTableStructBase()
	{
	}
};

UCLASS()
class UDataTableExtBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, CustomThunk, Category = "DataTable", meta = (CustomStructureParam = "Struct"))
	static bool AddDataTableRow(UDataTable* table, const FName RowName, FDataTableStructBase Struct);

	static bool Generic_AddDataTableRow(UDataTable* table, FName RowName, const FTableRowBase& StructPtr);
	DECLARE_FUNCTION(execAddDataTableRow)
	{
		P_GET_OBJECT(UDataTable, table);
		P_GET_PROPERTY(FNameProperty, RowName);

		Stack.StepCompiledIn<FStructProperty>(NULL);
		const FTableRowBase& StructPtr = *(FTableRowBase*)Stack.MostRecentPropertyAddress;

		P_FINISH;
		bool bSuccess = false;

		P_NATIVE_BEGIN;
		bSuccess = Generic_AddDataTableRow(table, RowName, StructPtr);
		P_NATIVE_END;

		*(bool*)RESULT_PARAM = bSuccess;
	}

	UFUNCTION(BlueprintCallable, CustomThunk, Category = "DataTable", meta = (CustomStructureParam = "Struct"))
		static bool SetDataTableRow(UDataTable* table, const FName RowName, FDataTableStructBase Struct);

	static bool Generic_SetDataTableRow(UDataTable* table, FName RowName, const FTableRowBase& StructPtr);
	DECLARE_FUNCTION(execSetDataTableRow)
	{
		P_GET_OBJECT(UDataTable, table);
		P_GET_PROPERTY(FNameProperty, RowName);

		Stack.StepCompiledIn<FStructProperty>(NULL);
		const FTableRowBase& StructPtr = *(FTableRowBase*)Stack.MostRecentPropertyAddress;

		P_FINISH;
		bool bSuccess = false;

		P_NATIVE_BEGIN;
		bSuccess = Generic_SetDataTableRow(table, RowName, StructPtr);
		P_NATIVE_END;

		*(bool*)RESULT_PARAM = bSuccess;
	}

	UFUNCTION(BlueprintCallable, Category = "DataTable")
	static void RemoveDataTableRow(UDataTable* table, FName RowName);
};
