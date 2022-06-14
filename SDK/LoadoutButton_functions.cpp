// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutButton.LoadoutButton_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULoadoutButton_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LoadoutButton.LoadoutButton_C.BndEvt__Button_154_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadoutButton_C::BndEvt__Button_154_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.BndEvt__Button_154_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.SetEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEquipped                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bSkipAnim                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutButton_C::SetEquipped(bool bEquipped, bool bSkipAnim)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.SetEquipped"));

	struct
	{
		bool                           bEquipped;
		bool                           bSkipAnim;
	} params = {};

	params.bEquipped = bEquipped;
	params.bSkipAnim = bSkipAnim;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.OnAddedToFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULoadoutButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.OnAddedToFocusPath"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.OnRemovedFromFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULoadoutButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.OnRemovedFromFocusPath"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutButton_C::Clicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.Clicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.BndEvt__LoadoutItembutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadoutButton_C::BndEvt__LoadoutItembutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.BndEvt__LoadoutItembutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.BndEvt__LoadoutItembutton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadoutButton_C::BndEvt__LoadoutItembutton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.BndEvt__LoadoutItembutton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.SetLocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Locked                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutButton_C::SetLocked(bool Locked, int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.SetLocked"));

	struct
	{
		bool                           Locked;
		int                            Level;
	} params = {};

	params.Locked = Locked;
	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadoutButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.UpdateLoadoutItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EInventoryItemSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*ATBLCharacter*/ Subclass                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutButton_C::UpdateLoadoutItem(class UClass* /*AInventoryItem*/ InventoryItem, EInventoryItemSlot Slot, class UClass* /*ATBLCharacter*/ Subclass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.UpdateLoadoutItem"));

	struct
	{
		class UClass* /*AInventoryItem*/ InventoryItem;
		EInventoryItemSlot             Slot;
		class UClass* /*ATBLCharacter*/ Subclass;
	} params = {};

	params.InventoryItem = InventoryItem;
	params.Slot = Slot;
	params.Subclass = Subclass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.SetCanUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Usable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutButton_C::SetCanUse(bool Usable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.SetCanUse"));

	struct
	{
		bool                           Usable;
	} params = {};

	params.Usable = Usable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.ExecuteUbergraph_LoadoutButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutButton_C::ExecuteUbergraph_LoadoutButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.ExecuteUbergraph_LoadoutButton"));

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


// Function LoadoutButton.LoadoutButton_C.OnItemHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutButton_C::OnItemHovered__DelegateSignature(class UWidget* Widget, class UClass* /*AInventoryItem*/ InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.OnItemHovered__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
		class UClass* /*AInventoryItem*/ InventoryItem;
	} params = {};

	params.Widget = Widget;
	params.InventoryItem = InventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutButton.LoadoutButton_C.OnInventoryItemClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EInventoryItemSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutButton_C*        LoadoutButton                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutButton_C::OnInventoryItemClicked__DelegateSignature(class UClass* /*AInventoryItem*/ InventoryItem, EInventoryItemSlot Slot, class ULoadoutButton_C* LoadoutButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutButton.LoadoutButton_C.OnInventoryItemClicked__DelegateSignature"));

	struct
	{
		class UClass* /*AInventoryItem*/ InventoryItem;
		EInventoryItemSlot             Slot;
		class ULoadoutButton_C*        LoadoutButton;
	} params = {};

	params.InventoryItem = InventoryItem;
	params.Slot = Slot;
	params.LoadoutButton = LoadoutButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
