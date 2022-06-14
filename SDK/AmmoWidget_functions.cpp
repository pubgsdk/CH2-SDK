// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AmmoWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmmoWidget.AmmoWidget_C.AddOrFindItemPickedUpWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ InventoryItemClass             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAmmoEventEntry_C*       ItemPickedUpWidget             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAmmoWidget_C::AddOrFindItemPickedUpWidget(class UClass* /*AInventoryItem*/ InventoryItemClass, class UAmmoEventEntry_C** ItemPickedUpWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.AddOrFindItemPickedUpWidget"));

	struct
	{
		class UClass* /*AInventoryItem*/ InventoryItemClass;
		class UAmmoEventEntry_C*       ItemPickedUpWidget;
	} params = {};

	params.InventoryItemClass = InventoryItemClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemPickedUpWidget != nullptr)
		*ItemPickedUpWidget = params.ItemPickedUpWidget;
}


// Function AmmoWidget.AmmoWidget_C.GetAmmoItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          ItemOut                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ ItemClassOut                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAmmoWidget_C::GetAmmoItem(class AInventoryItem* Item, class AInventoryItem** ItemOut, class UClass* /*AInventoryItem*/* ItemClassOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.GetAmmoItem"));

	struct
	{
		class AInventoryItem*          Item;
		class AInventoryItem*          ItemOut;
		class UClass* /*AInventoryItem*/ ItemClassOut;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemOut != nullptr)
		*ItemOut = params.ItemOut;
	if (ItemClassOut != nullptr)
		*ItemClassOut = params.ItemClassOut;
}


// Function AmmoWidget.AmmoWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAmmoWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AmmoWidget.AmmoWidget_C.OnEquippedItemsChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAmmoWidget_C::OnEquippedItemsChanged_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.OnEquippedItemsChanged_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AmmoWidget.AmmoWidget_C.UpdateAmmoDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAmmoWidget_C::UpdateAmmoDisplay(bool Show, class AInventoryItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.UpdateAmmoDisplay"));

	struct
	{
		bool                           Show;
		class AInventoryItem*          Item;
	} params = {};

	params.Show = Show;
	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AmmoWidget.AmmoWidget_C.OnItemStackChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAmmoWidget_C::OnItemStackChanged_Event_1(class AInventoryItem* Item, int Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.OnItemStackChanged_Event_1"));

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


// Function AmmoWidget.AmmoWidget_C.OnInventorySlotsUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAmmoWidget_C::OnInventorySlotsUpdated_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.OnInventorySlotsUpdated_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AmmoWidget.AmmoWidget_C.OnError_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Initiator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EResultCode>       Code                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAbilityInvocation*      Invocation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ ItemClass                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAmmoWidget_C::OnError_Event_1(class AActor* Initiator, TEnumAsByte<EResultCode> Code, class AAbilityInvocation* Invocation, const struct FName& AttackName, class UClass* /*AInventoryItem*/ ItemClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.OnError_Event_1"));

	struct
	{
		class AActor*                  Initiator;
		TEnumAsByte<EResultCode>       Code;
		class AAbilityInvocation*      Invocation;
		struct FName                   AttackName;
		class UClass* /*AInventoryItem*/ ItemClass;
	} params = {};

	params.Initiator = Initiator;
	params.Code = Code;
	params.Invocation = Invocation;
	params.AttackName = AttackName;
	params.ItemClass = ItemClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AmmoWidget.AmmoWidget_C.ListenToPawnEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   New_Pawn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAmmoWidget_C::ListenToPawnEvents(class APawn* New_Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.ListenToPawnEvents"));

	struct
	{
		class APawn*                   New_Pawn;
	} params = {};

	params.New_Pawn = New_Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AmmoWidget.AmmoWidget_C.On Possessed Pawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAmmoWidget_C::On_Possessed_Pawn(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.On Possessed Pawn"));

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


// Function AmmoWidget.AmmoWidget_C.ExecuteUbergraph_AmmoWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAmmoWidget_C::ExecuteUbergraph_AmmoWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoWidget.AmmoWidget_C.ExecuteUbergraph_AmmoWidget"));

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
