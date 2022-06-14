// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StatusbarContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatusbarContainer.StatusbarContainer_C.ShouldShowStatusBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatusbarContainer_C::ShouldShowStatusBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.ShouldShowStatusBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.UpdateTeamIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::UpdateTeamIcon(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.UpdateTeamIcon"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_0_OnUpdate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UActorHealthBar_C*       Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_0_OnUpdate__DelegateSignature(class UActorHealthBar_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_0_OnUpdate__DelegateSignature"));

	struct
	{
		class UActorHealthBar_C*       Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatusbarContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.ForceUpdateBandage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatusbarContainer_C::ForceUpdateBandage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.ForceUpdateBandage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.OnAddedToInventoryChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsAddedToInventory             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatusbarContainer_C::OnAddedToInventoryChanged_Event_1(class AInventoryItem* Item, bool IsAddedToInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.OnAddedToInventoryChanged_Event_1"));

	struct
	{
		class AInventoryItem*          Item;
		bool                           IsAddedToInventory;
	} params = {};

	params.Item = Item;
	params.IsAddedToInventory = IsAddedToInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.OnPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.OnPossessedPawn_Event_1"));

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


// Function StatusbarContainer.StatusbarContainer_C.HideBandage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatusbarContainer_C::HideBandage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.HideBandage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.OnTeamChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::OnTeamChanged_Event_1(class ATBLTeam* NewTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.OnTeamChanged_Event_1"));

	struct
	{
		class ATBLTeam*                NewTeam;
	} params = {};

	params.NewTeam = NewTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.ToggleHorseMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStatusbarContainer_C::ToggleHorseMode(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.ToggleHorseMode"));

	struct
	{
		bool                           Enable;
	} params = {};

	params.Enable = Enable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.BndEvt__ActorHealthBar_C_1_K2Node_ComponentBoundEvent_1_OnUpdate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UActorHealthBar_C*       Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::BndEvt__ActorHealthBar_C_1_K2Node_ComponentBoundEvent_1_OnUpdate__DelegateSignature(class UActorHealthBar_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.BndEvt__ActorHealthBar_C_1_K2Node_ComponentBoundEvent_1_OnUpdate__DelegateSignature"));

	struct
	{
		class UActorHealthBar_C*       Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.AttemptFadeSTatusBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatusbarContainer_C::AttemptFadeSTatusBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.AttemptFadeSTatusBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.OnInputChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::OnInputChange(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.OnInputChange"));

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


// Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeStart_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EHealingSource                 HealingSource                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLPlayerState*         InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::OnHealOverTimeStart_Event_1(EHealingSource HealingSource, class ATBLPlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeStart_Event_1"));

	struct
	{
		EHealingSource                 HealingSource;
		class ATBLPlayerState*         InstigatorPlayerState;
	} params = {};

	params.HealingSource = HealingSource;
	params.InstigatorPlayerState = InstigatorPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeEnd_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatusbarContainer_C::OnHealOverTimeEnd_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeEnd_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_2_OnRecievedNewStatsComp__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatsComponent*         StatsComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_2_OnRecievedNewStatsComp__DelegateSignature(class UStatsComponent* StatsComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_2_OnRecievedNewStatsComp__DelegateSignature"));

	struct
	{
		class UStatsComponent*         StatsComp;
	} params = {};

	params.StatsComp = StatsComp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.BndEvt__ConditionsBar_206_K2Node_ComponentBoundEvent_3_IsShowingCondition__DelegateSignature
// (FUNC_BlueprintEvent)

void UStatusbarContainer_C::BndEvt__ConditionsBar_206_K2Node_ComponentBoundEvent_3_IsShowingCondition__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.BndEvt__ConditionsBar_206_K2Node_ComponentBoundEvent_3_IsShowingCondition__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EHealingSource                 HealingSource                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLPlayerState*         InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::OnHealOverTimeAdded(EHealingSource HealingSource, class ATBLPlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeAdded"));

	struct
	{
		EHealingSource                 HealingSource;
		class ATBLPlayerState*         InstigatorPlayerState;
	} params = {};

	params.HealingSource = HealingSource;
	params.InstigatorPlayerState = InstigatorPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.BndEvt__HorseStaminaBar_K2Node_ComponentBoundEvent_4_OnUpdate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UActorHealthBar_C*       Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::BndEvt__HorseStaminaBar_K2Node_ComponentBoundEvent_4_OnUpdate__DelegateSignature(class UActorHealthBar_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.BndEvt__HorseStaminaBar_K2Node_ComponentBoundEvent_4_OnUpdate__DelegateSignature"));

	struct
	{
		class UActorHealthBar_C*       Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.BndEvt__HorseHealthBar_K2Node_ComponentBoundEvent_5_OnUpdate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UActorHealthBar_C*       Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::BndEvt__HorseHealthBar_K2Node_ComponentBoundEvent_5_OnUpdate__DelegateSignature(class UActorHealthBar_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.BndEvt__HorseHealthBar_K2Node_ComponentBoundEvent_5_OnUpdate__DelegateSignature"));

	struct
	{
		class UActorHealthBar_C*       Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StatusbarContainer.StatusbarContainer_C.ExecuteUbergraph_StatusbarContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStatusbarContainer_C::ExecuteUbergraph_StatusbarContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StatusbarContainer.StatusbarContainer_C.ExecuteUbergraph_StatusbarContainer"));

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
