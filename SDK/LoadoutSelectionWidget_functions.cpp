// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutSelectionWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SecondaryDownNavLogic
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* ULoadoutSelectionWidget_C::SecondaryDownNavLogic(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SecondaryDownNavLogic"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SecondaryUpNavLogic
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* ULoadoutSelectionWidget_C::SecondaryUpNavLogic(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SecondaryUpNavLogic"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.PrimaryDownNavLogic
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* ULoadoutSelectionWidget_C::PrimaryDownNavLogic(EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.PrimaryDownNavLogic"));

	struct
	{
		EUINavigation                  Navigation;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Navigation = Navigation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponSelections
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ SubclassChoice                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLoadout                Loadout                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULoadoutSelectionWidget_C::UpdateWeaponSelections(class UClass* /*ATBLCharacter*/ SubclassChoice, const struct FLoadout& Loadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponSelections"));

	struct
	{
		class UClass* /*ATBLCharacter*/ SubclassChoice;
		struct FLoadout                Loadout;
	} params = {};

	params.SubclassChoice = SubclassChoice;
	params.Loadout = Loadout;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.HideAllItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSelectionWidget_C::HideAllItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.HideAllItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponItems
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWrapBox*                HoriBox                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UClass* /*UWeaponGroup*/> WeaponGroup                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// EInventoryItemSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ CurrentEquipped                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 ContainerBox                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*ULoadoutSelection*/ LoadoutSelection               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSelectionWidget_C::UpdateWeaponItems(class UWrapBox* HoriBox, TArray<class UClass* /*UWeaponGroup*/> WeaponGroup, EInventoryItemSlot Slot, class UClass* /*AInventoryItem*/ CurrentEquipped, class UWidget* ContainerBox, class UClass* /*ULoadoutSelection*/ LoadoutSelection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponItems"));

	struct
	{
		class UWrapBox*                HoriBox;
		TArray<class UClass* /*UWeaponGroup*/> WeaponGroup;
		EInventoryItemSlot             Slot;
		class UClass* /*AInventoryItem*/ CurrentEquipped;
		class UWidget*                 ContainerBox;
		class UClass* /*ULoadoutSelection*/ LoadoutSelection;
	} params = {};

	params.HoriBox = HoriBox;
	params.WeaponGroup = WeaponGroup;
	params.Slot = Slot;
	params.CurrentEquipped = CurrentEquipped;
	params.ContainerBox = ContainerBox;
	params.LoadoutSelection = LoadoutSelection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.HideItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWrapBox*                HoriBox                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSelectionWidget_C::HideItems(class UWrapBox* HoriBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.HideItems"));

	struct
	{
		class UWrapBox*                HoriBox;
	} params = {};

	params.HoriBox = HoriBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.BindAllSlots
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSelectionWidget_C::BindAllSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.BindAllSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.BindSlots
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWrapBox*                HoriBox                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSelectionWidget_C::BindSlots(class UWrapBox* HoriBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.BindSlots"));

	struct
	{
		class UWrapBox*                HoriBox;
	} params = {};

	params.HoriBox = HoriBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadoutSelectionWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.OnItemHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSelectionWidget_C::OnItemHovered(class UWidget* Widget, class UClass* /*AInventoryItem*/ InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.OnItemHovered"));

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


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UnhoveredItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSelectionWidget_C::UnhoveredItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UnhoveredItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemClickedHandler
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EInventoryItemSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutButton_C*        LoadoutButton                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSelectionWidget_C::ItemClickedHandler(class UClass* /*AInventoryItem*/ InventoryItem, EInventoryItemSlot Slot, class ULoadoutButton_C* LoadoutButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemClickedHandler"));

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


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.EquipItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ULoadoutButton_C*        LoadoutButton                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EInventoryItemSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSkipAnim                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutSelectionWidget_C::EquipItem(class ULoadoutButton_C* LoadoutButton, EInventoryItemSlot Slot, bool bSkipAnim)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.EquipItem"));

	struct
	{
		class ULoadoutButton_C*        LoadoutButton;
		EInventoryItemSlot             Slot;
		bool                           bSkipAnim;
	} params = {};

	params.LoadoutButton = LoadoutButton;
	params.Slot = Slot;
	params.bSkipAnim = bSkipAnim;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ResetCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSelectionWidget_C::ResetCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ResetCount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponSelectionsOfType
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoadout                Loadout                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// EInventoryItemSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSelectionWidget_C::UpdateWeaponSelectionsOfType(const struct FLoadout& Loadout, EInventoryItemSlot Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponSelectionsOfType"));

	struct
	{
		struct FLoadout                Loadout;
		EInventoryItemSlot             Slot;
	} params = {};

	params.Loadout = Loadout;
	params.Slot = Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ExecuteUbergraph_LoadoutSelectionWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSelectionWidget_C::ExecuteUbergraph_LoadoutSelectionWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ExecuteUbergraph_LoadoutSelectionWidget"));

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


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SubclassItemsUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSelectionWidget_C::SubclassItemsUpdated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SubclassItemsUpdated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSelectionWidget_C::ItemHovered__DelegateSignature(class UClass* /*AInventoryItem*/ InventoryItem, class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemHovered__DelegateSignature"));

	struct
	{
		class UClass* /*AInventoryItem*/ InventoryItem;
		class UWidget*                 Widget;
	} params = {};

	params.InventoryItem = InventoryItem;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInventoryItemSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutButton_C*        LoadoutButton                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSelectionWidget_C::ItemSelected__DelegateSignature(EInventoryItemSlot Slot, class UClass* /*AInventoryItem*/ Item, class ULoadoutButton_C* LoadoutButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemSelected__DelegateSignature"));

	struct
	{
		EInventoryItemSlot             Slot;
		class UClass* /*AInventoryItem*/ Item;
		class ULoadoutButton_C*        LoadoutButton;
	} params = {};

	params.Slot = Slot;
	params.Item = Item;
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
