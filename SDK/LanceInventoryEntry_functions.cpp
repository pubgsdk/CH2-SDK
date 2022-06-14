// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LanceInventoryEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanceInventoryEntry.LanceInventoryEntry_C.UpdateInventoryItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULanceInventoryEntry_C::UpdateInventoryItem(class AInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LanceInventoryEntry.LanceInventoryEntry_C.UpdateInventoryItem"));

	struct
	{
		class AInventoryItem*          InventoryItem;
	} params = {};

	params.InventoryItem = InventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LanceInventoryEntry.LanceInventoryEntry_C.UpdateStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Inventory_Item                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Immediate                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULanceInventoryEntry_C::UpdateStatus(class AInventoryItem* Inventory_Item, bool Immediate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LanceInventoryEntry.LanceInventoryEntry_C.UpdateStatus"));

	struct
	{
		class AInventoryItem*          Inventory_Item;
		bool                           Immediate;
	} params = {};

	params.Inventory_Item = Inventory_Item;
	params.Immediate = Immediate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LanceInventoryEntry.LanceInventoryEntry_C.Hide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULanceInventoryEntry_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LanceInventoryEntry.LanceInventoryEntry_C.Hide"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LanceInventoryEntry.LanceInventoryEntry_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULanceInventoryEntry_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LanceInventoryEntry.LanceInventoryEntry_C.Show"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LanceInventoryEntry.LanceInventoryEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULanceInventoryEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LanceInventoryEntry.LanceInventoryEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LanceInventoryEntry.LanceInventoryEntry_C.ExecuteUbergraph_LanceInventoryEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULanceInventoryEntry_C::ExecuteUbergraph_LanceInventoryEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LanceInventoryEntry.LanceInventoryEntry_C.ExecuteUbergraph_LanceInventoryEntry"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
