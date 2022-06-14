// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RadialInventoryWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RadialInventoryWidget.RadialInventoryWidget_C.ClearCurrentSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::ClearCurrentSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.ClearCurrentSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateSelectedOverlay
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUIRadialInventoryStruct UIRadialInventoryStruct        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void URadialInventoryWidget_C::UpdateSelectedOverlay(const struct FUIRadialInventoryStruct& UIRadialInventoryStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateSelectedOverlay"));

	struct
	{
		struct FUIRadialInventoryStruct UIRadialInventoryStruct;
	} params = {};

	params.UIRadialInventoryStruct = UIRadialInventoryStruct;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.ResetAllSlotColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::ResetAllSlotColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.ResetAllSlotColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.SetSlotColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FColor                  Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Opacity                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialInventoryWidget_C::SetSlotColor(int Slot, const struct FColor& Color, float Opacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.SetSlotColor"));

	struct
	{
		int                            Slot;
		struct FColor                  Color;
		float                          Opacity;
	} params = {};

	params.Slot = Slot;
	params.Color = Color;
	params.Opacity = Opacity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.SelectIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialInventoryWidget_C::SelectIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.SelectIndex"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.ResetInventoryContents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::ResetInventoryContents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.ResetInventoryContents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateContentsForSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUIRadialInventoryStruct RadialSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UTexture2D*              ItemTexture                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ItemName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bHasItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EInventoryItemSlot             InventorySlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowShield                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTexture2D*              ShieldIcon                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShieldEquipped                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URadialInventoryWidget_C::UpdateContentsForSlot(class UTexture2D* ItemTexture, const struct FText& ItemName, bool bHasItem, EInventoryItemSlot InventorySlot, bool ShowShield, class UTexture2D* ShieldIcon, bool ShieldEquipped, struct FUIRadialInventoryStruct* RadialSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateContentsForSlot"));

	struct
	{
		struct FUIRadialInventoryStruct RadialSlot;
		class UTexture2D*              ItemTexture;
		struct FText                   ItemName;
		bool                           bHasItem;
		EInventoryItemSlot             InventorySlot;
		bool                           ShowShield;
		class UTexture2D*              ShieldIcon;
		bool                           ShieldEquipped;
	} params = {};

	params.ItemTexture = ItemTexture;
	params.ItemName = ItemName;
	params.bHasItem = bHasItem;
	params.InventorySlot = InventorySlot;
	params.ShowShield = ShowShield;
	params.ShieldIcon = ShieldIcon;
	params.ShieldEquipped = ShieldEquipped;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RadialSlot != nullptr)
		*RadialSlot = params.RadialSlot;
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateInventory
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::UpdateInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateAxis
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::UpdateAxis()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateAxis"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.SetupRadialSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::SetupRadialSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.SetupRadialSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialInventoryWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.Tick"));

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


// Function RadialInventoryWidget.RadialInventoryWidget_C.OnPossessedPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialInventoryWidget_C::OnPossessedPawn(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.OnPossessedPawn"));

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


// Function RadialInventoryWidget.RadialInventoryWidget_C.OnInvSlotsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::OnInvSlotsUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.OnInvSlotsUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.OnInventoryChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialInventoryWidget_C::OnInventoryChanged(class AInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.OnInventoryChanged"));

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


// Function RadialInventoryWidget.RadialInventoryWidget_C.OnPlayerKilled
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void URadialInventoryWidget_C::OnPlayerKilled(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.OnPlayerKilled"));

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


// Function RadialInventoryWidget.RadialInventoryWidget_C.OnRadialClosing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::OnRadialClosing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.OnRadialClosing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.OnRadialOpening
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::OnRadialOpening()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.OnRadialOpening"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.PressInventoryKey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInventoryItemSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialInventoryWidget_C::PressInventoryKey(EInventoryItemSlot Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.PressInventoryKey"));

	struct
	{
		EInventoryItemSlot             Slot;
	} params = {};

	params.Slot = Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.Do nothing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialInventoryWidget_C::Do_nothing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.Do nothing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RadialInventoryWidget.RadialInventoryWidget_C.ExecuteUbergraph_RadialInventoryWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URadialInventoryWidget_C::ExecuteUbergraph_RadialInventoryWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RadialInventoryWidget.RadialInventoryWidget_C.ExecuteUbergraph_RadialInventoryWidget"));

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
