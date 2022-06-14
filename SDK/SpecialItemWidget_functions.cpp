// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpecialItemWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpecialItemWidget.SpecialItemWidget_C.UpdateInputMethod
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpecialItemWidget_C::UpdateInputMethod(EGamepadInputMode Selection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.UpdateInputMethod"));

	struct
	{
		EGamepadInputMode              Selection;
	} params = {};

	params.Selection = Selection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USpecialItemWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.OnPossessedPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpecialItemWidget_C::OnPossessedPawn(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.OnPossessedPawn"));

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


// Function SpecialItemWidget.SpecialItemWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USpecialItemWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.OnChargeUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentCharge                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxCharge                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ESpecialItemChargeType         ChargeType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpecialItemWidget_C::OnChargeUpdated_Event_1(float CurrentCharge, float MaxCharge, ESpecialItemChargeType ChargeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.OnChargeUpdated_Event_1"));

	struct
	{
		float                          CurrentCharge;
		float                          MaxCharge;
		ESpecialItemChargeType         ChargeType;
	} params = {};

	params.CurrentCharge = CurrentCharge;
	params.MaxCharge = MaxCharge;
	params.ChargeType = ChargeType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.SetIsAvailable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsInitializing                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USpecialItemWidget_C::SetIsAvailable(bool IsInitializing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.SetIsAvailable"));

	struct
	{
		bool                           IsInitializing;
	} params = {};

	params.IsInitializing = IsInitializing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.SetUnavailable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsInitializing                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USpecialItemWidget_C::SetUnavailable(bool IsInitializing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.SetUnavailable"));

	struct
	{
		bool                           IsInitializing;
	} params = {};

	params.IsInitializing = IsInitializing;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.OnUseSpecialItem_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpecialItemWidget_C::OnUseSpecialItem_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.OnUseSpecialItem_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.OnEquipSpecialItem_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpecialItemWidget_C::OnEquipSpecialItem_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.OnEquipSpecialItem_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.OnSpecialItemUseFailed_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpecialItemWidget_C::OnSpecialItemUseFailed_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.OnSpecialItemUseFailed_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.OnGamepadInputModeChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpecialItemWidget_C::OnGamepadInputModeChanged_Event_1(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.OnGamepadInputModeChanged_Event_1"));

	struct
	{
		EGamepadInputMode              GamepadInputMode;
	} params = {};

	params.GamepadInputMode = GamepadInputMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.SpecialItemSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpecialItemWidget_C::SpecialItemSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.SpecialItemSet"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemWidget.SpecialItemWidget_C.OnItemStackChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpecialItemWidget_C::OnItemStackChanged_Event_1(class AInventoryItem* Item, int Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.OnItemStackChanged_Event_1"));

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


// Function SpecialItemWidget.SpecialItemWidget_C.ExecuteUbergraph_SpecialItemWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpecialItemWidget_C::ExecuteUbergraph_SpecialItemWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemWidget.SpecialItemWidget_C.ExecuteUbergraph_SpecialItemWidget"));

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
