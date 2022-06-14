// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InventoryIconEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryIconEntry.InventoryIconEntry_C.UpdateKeybind
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryIconEntry_C::UpdateKeybind()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryIconEntry.InventoryIconEntry_C.UpdateKeybind"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryIconEntry.InventoryIconEntry_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInventoryIconEntry_C::SetSelected(bool _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryIconEntry.InventoryIconEntry_C.SetSelected"));

	struct
	{
		bool                           _;
	} params = {};

	params._ = _;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryIconEntry.InventoryIconEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInventoryIconEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryIconEntry.InventoryIconEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryIconEntry.InventoryIconEntry_C.UpdateInventoryItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryIconEntry_C::UpdateInventoryItem(class UClass* /*AInventoryItem*/ InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryIconEntry.InventoryIconEntry_C.UpdateInventoryItem"));

	struct
	{
		class UClass* /*AInventoryItem*/ InventoryItem;
	} params = {};

	params.InventoryItem = InventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryIconEntry.InventoryIconEntry_C.UpdateStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryIconEntry_C::UpdateStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryIconEntry.InventoryIconEntry_C.UpdateStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryIconEntry.InventoryIconEntry_C.On Key Bind Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryIconEntry_C::On_Key_Bind_Changed(const struct FName& ActionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryIconEntry.InventoryIconEntry_C.On Key Bind Changed"));

	struct
	{
		struct FName                   ActionName;
	} params = {};

	params.ActionName = ActionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryIconEntry.InventoryIconEntry_C.Hide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryIconEntry_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryIconEntry.InventoryIconEntry_C.Hide"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryIconEntry.InventoryIconEntry_C.SetSelectedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInventoryIconEntry_C::SetSelectedState(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryIconEntry.InventoryIconEntry_C.SetSelectedState"));

	struct
	{
		bool                           Selected;
	} params = {};

	params.Selected = Selected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryIconEntry.InventoryIconEntry_C.ExecuteUbergraph_InventoryIconEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryIconEntry_C::ExecuteUbergraph_InventoryIconEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryIconEntry.InventoryIconEntry_C.ExecuteUbergraph_InventoryIconEntry"));

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
