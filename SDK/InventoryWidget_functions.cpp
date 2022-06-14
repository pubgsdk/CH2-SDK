// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InventoryWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryWidget.InventoryWidget_C.GetOrAddActionEntryWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EInventoryItemSlot             SlotOverride                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInventoryEntry_C*       InventoryEntryWidget           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::GetOrAddActionEntryWidget(class AInventoryItem* InventoryItem, EInventoryItemSlot SlotOverride, class UInventoryEntry_C** InventoryEntryWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.GetOrAddActionEntryWidget"));

	struct
	{
		class AInventoryItem*          InventoryItem;
		EInventoryItemSlot             SlotOverride;
		class UInventoryEntry_C*       InventoryEntryWidget;
	} params = {};

	params.InventoryItem = InventoryItem;
	params.SlotOverride = SlotOverride;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InventoryEntryWidget != nullptr)
		*InventoryEntryWidget = params.InventoryEntryWidget;
}


// Function InventoryWidget.InventoryWidget_C.GetOrAddInventoryEntryWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInventoryEntry_C*       InventoryEntryWidget           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::GetOrAddInventoryEntryWidget(class AInventoryItem* InventoryItem, class UInventoryEntry_C** InventoryEntryWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.GetOrAddInventoryEntryWidget"));

	struct
	{
		class AInventoryItem*          InventoryItem;
		class UInventoryEntry_C*       InventoryEntryWidget;
	} params = {};

	params.InventoryItem = InventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InventoryEntryWidget != nullptr)
		*InventoryEntryWidget = params.InventoryEntryWidget;
}


// Function InventoryWidget.InventoryWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInventoryWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.OnPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.OnInventorySlotsUpdated_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryWidget_C::OnInventorySlotsUpdated_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnInventorySlotsUpdated_Event"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.EquipInventoryItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::EquipInventoryItem(class AInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.EquipInventoryItem"));

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


// Function InventoryWidget.InventoryWidget_C.UnequippedInventoryItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::UnequippedInventoryItem(class AInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.UnequippedInventoryItem"));

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


// Function InventoryWidget.InventoryWidget_C.ResetInventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ResetActionInventory           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInventoryWidget_C::ResetInventory(bool ResetActionInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.ResetInventory"));

	struct
	{
		bool                           ResetActionInventory;
	} params = {};

	params.ResetActionInventory = ResetActionInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.FadeIn_Inventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryWidget_C::FadeIn_Inventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.FadeIn_Inventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.FadeOut_Inventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryWidget_C::FadeOut_Inventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.FadeOut_Inventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.StartFadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryWidget_C::StartFadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.StartFadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.StartFadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryWidget_C::StartFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.StartFadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.OnKilled_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UInventoryWidget_C::OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnKilled_Event_1"));

	struct
	{
		struct FDeathDamageTakenEvent  Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.ForceImmediateFadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryWidget_C::ForceImmediateFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.ForceImmediateFadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.OnInventoryItemToBeEquipped_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::OnInventoryItemToBeEquipped_Event_1(class AInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnInventoryItemToBeEquipped_Event_1"));

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


// Function InventoryWidget.InventoryWidget_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnAnimationFinished"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.OnAnimationStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnAnimationStarted"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsMountingHorse                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInventoryWidget_C::CustomEvent_1(bool IsMountingHorse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.CustomEvent_1"));

	struct
	{
		bool                           IsMountingHorse;
	} params = {};

	params.IsMountingHorse = IsMountingHorse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.AddPersistentItemIcons
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::AddPersistentItemIcons(class ATBLCharacter* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.AddPersistentItemIcons"));

	struct
	{
		class ATBLCharacter*           NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.UpdateActionItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryWidget_C::UpdateActionItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.UpdateActionItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.OnEquippedItemsChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryWidget_C::OnEquippedItemsChanged_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnEquippedItemsChanged_Event"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.OnItemStackChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::OnItemStackChanged(class AInventoryItem* Item, int Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnItemStackChanged"));

	struct
	{
		class AInventoryItem*          Item;
		int                            Delta;
	} params = {};

	params.Item = Item;
	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.OnUnequipItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::OnUnequipItem(class AInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnUnequipItem"));

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


// Function InventoryWidget.InventoryWidget_C.OnEquipItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::OnEquipItem(class AInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnEquipItem"));

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


// Function InventoryWidget.InventoryWidget_C.InventoryUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryWidget_C::InventoryUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.InventoryUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.OnClientNotifySuicide_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKillReason                    Reason                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::OnClientNotifySuicide_Event_1(EKillReason Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnClientNotifySuicide_Event_1"));

	struct
	{
		EKillReason                    Reason;
	} params = {};

	params.Reason = Reason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.UpdateLanceState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInventoryWidget_C::UpdateLanceState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.UpdateLanceState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.OnInventoryItemDamaged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FInventoryItemDamagedParams Params                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UInventoryWidget_C::OnInventoryItemDamaged_Event_1(class AInventoryItem* Item, const struct FInventoryItemDamagedParams& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.OnInventoryItemDamaged_Event_1"));

	struct
	{
		class AInventoryItem*          Item;
		struct FInventoryItemDamagedParams Params;
	} params = {};

	params.Item = Item;
	params.Params = Params;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InventoryWidget.InventoryWidget_C.ExecuteUbergraph_InventoryWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInventoryWidget_C::ExecuteUbergraph_InventoryWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.ExecuteUbergraph_InventoryWidget"));

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


// Function InventoryWidget.InventoryWidget_C.IsInventoryOpen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInventoryWidget_C::IsInventoryOpen__DelegateSignature(bool _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InventoryWidget.InventoryWidget_C.IsInventoryOpen__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
