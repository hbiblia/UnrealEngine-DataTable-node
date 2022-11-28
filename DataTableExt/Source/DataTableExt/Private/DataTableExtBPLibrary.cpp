// Copyright Epic Games, Inc. All Rights Reserved.

#include "DataTableExtBPLibrary.h"
#include "Kismet/DataTableFunctionLibrary.h"
#include "DataTableExt.h"

UDataTableExtBPLibrary::UDataTableExtBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UDataTableExtBPLibrary::AddDataTableRow(UDataTable* table, const FName RowName, FDataTableStructBase Struct)
{
	check(0);
	return false;
}

bool UDataTableExtBPLibrary::Generic_AddDataTableRow(UDataTable* table, FName RowName, const FTableRowBase& StructPtr)
{
	if (!UDataTableFunctionLibrary::DoesDataTableRowExist(table, RowName))
	{
		table->AddRow(RowName, StructPtr);
		return true;
	}

	return false;
}

bool UDataTableExtBPLibrary::SetDataTableRow(UDataTable* table, const FName RowName, FDataTableStructBase Struct)
{
	check(0);
	return false;
}

bool UDataTableExtBPLibrary::Generic_SetDataTableRow(UDataTable* table, FName RowName, const FTableRowBase& StructPtr)
{
	if (UDataTableFunctionLibrary::DoesDataTableRowExist(table, RowName))
	{
		table->AddRow(RowName, StructPtr);
		return true;
	}

	return false;
}

void UDataTableExtBPLibrary::RemoveDataTableRow(UDataTable* table, FName RowName)
{
	table->RemoveRow(RowName);
}

int UDataTableExtBPLibrary::GetLengthDataTable(UDataTable *table)
{
	TArray<FName> OutRowNames;

	UDataTableFunctionLibrary::GetDataTableRowNames(table, OutRowNames);
	return OutRowNames.Num();
}