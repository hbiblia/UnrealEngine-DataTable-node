// Copyright Epic Games, Inc. All Rights Reserved.

#include "DataTableExtBPLibrary.h"
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
	if (table->FindRowUnchecked(RowName) == nullptr)
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
