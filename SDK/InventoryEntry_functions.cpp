// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InventoryEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryEntry.InventoryEntry_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInventoryEntry_C::SetSelected(bool _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.SetSelected"));

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


// Function InventoryEntry.InventoryEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInventoryEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryEntry.InventoryEntry_C.UpdateInventoryItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryEntry_C::UpdateInventoryItem(class AInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.UpdateInventoryItem"));

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


// Function InventoryEntry.InventoryEntry_C.UpdateEquippedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEquipped                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsToBeEquipped                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsUnequipped                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AInventoryItem*          Shield                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryEntry_C::UpdateEquippedState(bool IsEquipped, bool IsToBeEquipped, bool IsUnequipped, class AInventoryItem* Shield)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.UpdateEquippedState"));

	struct
	{
		bool                           IsEquipped;
		bool                           IsToBeEquipped;
		bool                           IsUnequipped;
		class AInventoryItem*          Shield;
	} params = {};

	params.IsEquipped = IsEquipped;
	params.IsToBeEquipped = IsToBeEquipped;
	params.IsUnequipped = IsUnequipped;
	params.Shield = Shield;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryEntry.InventoryEntry_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryEntry.InventoryEntry_C.ToggleShieldEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AInventoryItem*          Shield                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryEntry_C::ToggleShieldEquipped(bool _, class AInventoryItem* Shield)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.ToggleShieldEquipped"));

	struct
	{
		bool                           _;
		class AInventoryItem*          Shield;
	} params = {};

	params._ = _;
	params.Shield = Shield;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryEntry.InventoryEntry_C.On Key Bind Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryEntry_C::On_Key_Bind_Changed(const struct FName& ActionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.On Key Bind Changed"));

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


// Function InventoryEntry.InventoryEntry_C.UpdateHasShield
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Shield                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryEntry_C::UpdateHasShield(class AInventoryItem* Shield)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.UpdateHasShield"));

	struct
	{
		class AInventoryItem*          Shield;
	} params = {};

	params.Shield = Shield;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryEntry.InventoryEntry_C.SetSelectedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInventoryEntry_C::SetSelectedState(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.SetSelectedState"));

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


// Function InventoryEntry.InventoryEntry_C.SetItemValid
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsValid                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInventoryEntry_C::SetItemValid(bool IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.SetItemValid"));

	struct
	{
		bool                           IsValid;
	} params = {};

	params.IsValid = IsValid;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryEntry.InventoryEntry_C.SetItemVisible
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInventoryEntry_C::SetItemVisible(bool IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.SetItemVisible"));

	struct
	{
		bool                           IsVisible;
	} params = {};

	params.IsVisible = IsVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryEntry.InventoryEntry_C.ExecuteUbergraph_InventoryEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryEntry_C::ExecuteUbergraph_InventoryEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryEntry.InventoryEntry_C.ExecuteUbergraph_InventoryEntry"));

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
