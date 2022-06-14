// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Crosshair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Crosshair.Crosshair_C.GetOwningPawn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class APawn* UCrosshair_C::GetOwningPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.GetOwningPawn"));

	struct
	{
		class APawn*                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Crosshair.Crosshair_C.SetParryIndicatorColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsCounterSuccess               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrosshair_C::SetParryIndicatorColor(bool IsCounterSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.SetParryIndicatorColor"));

	struct
	{
		bool                           IsCounterSuccess;
	} params = {};

	params.IsCounterSuccess = IsCounterSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.TryDisablingActiveParry
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::TryDisablingActiveParry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.TryDisablingActiveParry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.UpdateDamageEventWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::UpdateDamageEventWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.UpdateDamageEventWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.InitDamageEventWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::InitDamageEventWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.InitDamageEventWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.SetBlockedStaminaPercentage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::SetBlockedStaminaPercentage(float _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.SetBlockedStaminaPercentage"));

	struct
	{
		float                          _;
	} params = {};

	params._ = _;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.StaminaCheckFailed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::StaminaCheckFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.StaminaCheckFailed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.SetPlayerStaminaPercentage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::SetPlayerStaminaPercentage(float _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.SetPlayerStaminaPercentage"));

	struct
	{
		float                          _;
	} params = {};

	params._ = _;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.UpdateBlockingCharacterStamina
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::UpdateBlockingCharacterStamina()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.UpdateBlockingCharacterStamina"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.UpdateParryStamina
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::UpdateParryStamina()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.UpdateParryStamina"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.RemoveBottomCenterNotiMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::RemoveBottomCenterNotiMessage(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.RemoveBottomCenterNotiMessage"));

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


// Function Crosshair.Crosshair_C.SetBottomCenterNotiMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::SetBottomCenterNotiMessage(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.SetBottomCenterNotiMessage"));

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


// Function Crosshair.Crosshair_C.UpdateDamageEventWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ActorName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Multiplier                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::UpdateDamageEventWidget(float Damage, const struct FName& DamageType, const struct FString& ActorName, EFaction Faction, float Multiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.UpdateDamageEventWidget"));

	struct
	{
		float                          Damage;
		struct FName                   DamageType;
		struct FString                 ActorName;
		EFaction                       Faction;
		float                          Multiplier;
	} params = {};

	params.Damage = Damage;
	params.DamageType = DamageType;
	params.ActorName = ActorName;
	params.Faction = Faction;
	params.Multiplier = Multiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.OnEquippedItemUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::OnEquippedItemUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnEquippedItemUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.UpdateChargebarPercentage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::UpdateChargebarPercentage(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.UpdateChargebarPercentage"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.UpdateCrosshairState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::UpdateCrosshairState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.UpdateCrosshairState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.SetChargingVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrosshair_C::SetChargingVisibility(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.SetChargingVisibility"));

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


// Function Crosshair.Crosshair_C.SetCrosshairTargetState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECrosshairTargetState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       TargetFaction                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::SetCrosshairTargetState(TEnumAsByte<ECrosshairTargetState> State, EFaction TargetFaction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.SetCrosshairTargetState"));

	struct
	{
		TEnumAsByte<ECrosshairTargetState> State;
		EFaction                       TargetFaction;
	} params = {};

	params.State = State;
	params.TargetFaction = TargetFaction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.OnEquippedItemsChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::OnEquippedItemsChanged_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnEquippedItemsChanged_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnAnimationFinished"));

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


// Function Crosshair.Crosshair_C.OnAnimationStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnAnimationStarted"));

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


// Function Crosshair.Crosshair_C.OnBroadcastActorUnderCrosshairChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::OnBroadcastActorUnderCrosshairChanged_Event_1(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnBroadcastActorUnderCrosshairChanged_Event_1"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.ResetCrosshair
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::ResetCrosshair()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.ResetCrosshair"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.OnKilled_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UCrosshair_C::OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnKilled_Event_1"));

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


// Function Crosshair.Crosshair_C.OnPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnPossessedPawn_Event_1"));

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


// Function Crosshair.Crosshair_C.ForceUpdateEquippedItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::ForceUpdateEquippedItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.ForceUpdateEquippedItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCrosshair_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.HoldingFadeOutComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::HoldingFadeOutComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.HoldingFadeOutComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.WidgetAnimationEvt_CombatMessageAnim_In_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UCrosshair_C::WidgetAnimationEvt_CombatMessageAnim_In_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.WidgetAnimationEvt_CombatMessageAnim_In_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.BleedOutTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::BleedOutTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.BleedOutTick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.OnRemoveCondition_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ConditionRemover               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::OnRemoveCondition_Event_1(class AActor* Actor, EConditionType Condition, class AActor* ConditionRemover)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnRemoveCondition_Event_1"));

	struct
	{
		class AActor*                  Actor;
		EConditionType                 Condition;
		class AActor*                  ConditionRemover;
	} params = {};

	params.Actor = Actor;
	params.Condition = Condition;
	params.ConditionRemover = ConditionRemover;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.BleedingOutRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::BleedingOutRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.BleedingOutRemoved"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.PostCombatMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::PostCombatMessage(const struct FText& Text, const struct FLinearColor& Color, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.PostCombatMessage"));

	struct
	{
		struct FText                   Text;
		struct FLinearColor            Color;
		float                          Duration;
	} params = {};

	params.Text = Text;
	params.Color = Color;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.OutOfCombatWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrosshair_C::OutOfCombatWarning(bool _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OutOfCombatWarning"));

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


// Function Crosshair.Crosshair_C.TeamDamgeNoti
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::TeamDamgeNoti()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.TeamDamgeNoti"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.ToggleBottomCenterMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrosshair_C::ToggleBottomCenterMessage(bool _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.ToggleBottomCenterMessage"));

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


// Function Crosshair.Crosshair_C.WidgetAnimationEvt_EnableChargingOverlay_K2Node_WidgetAnimationEvent_2
// (FUNC_BlueprintEvent)

void UCrosshair_C::WidgetAnimationEvt_EnableChargingOverlay_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.WidgetAnimationEvt_EnableChargingOverlay_K2Node_WidgetAnimationEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.StatsChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EStat                          StatType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStatEntry              Stat                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// float                          DeltaValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::StatsChanged(class AActor* Actor, EStat StatType, const struct FStatEntry& Stat, float DeltaValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.StatsChanged"));

	struct
	{
		class AActor*                  Actor;
		EStat                          StatType;
		struct FStatEntry              Stat;
		float                          DeltaValue;
	} params = {};

	params.Actor = Actor;
	params.StatType = StatType;
	params.Stat = Stat;
	params.DeltaValue = DeltaValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.OnWasParried_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           ThisCharacter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           OtherCharacter                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FParryEventState        ParryEventState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UCrosshair_C::OnWasParried_Event_1(class ATBLCharacter* ThisCharacter, class ATBLCharacter* OtherCharacter, const struct FParryEventState& ParryEventState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnWasParried_Event_1"));

	struct
	{
		class ATBLCharacter*           ThisCharacter;
		class ATBLCharacter*           OtherCharacter;
		struct FParryEventState        ParryEventState;
	} params = {};

	params.ThisCharacter = ThisCharacter;
	params.OtherCharacter = OtherCharacter;
	params.ParryEventState = ParryEventState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.OnParriedCharacterStatChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EStat                          StatType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStatEntry              Stat                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// float                          DeltaValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::OnParriedCharacterStatChanged(class AActor* Actor, EStat StatType, const struct FStatEntry& Stat, float DeltaValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnParriedCharacterStatChanged"));

	struct
	{
		class AActor*                  Actor;
		EStat                          StatType;
		struct FStatEntry              Stat;
		float                          DeltaValue;
	} params = {};

	params.Actor = Actor;
	params.StatType = StatType;
	params.Stat = Stat;
	params.DeltaValue = DeltaValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.OnCounterWindowEnd_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::OnCounterWindowEnd_Event_1(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnCounterWindowEnd_Event_1"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.RiposteParryFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::RiposteParryFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.RiposteParryFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairGameplayEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Event                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Scaling                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsPositive                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrosshair_C::CrosshairGameplayEvent(const struct FName& Event, bool Enable, float Scaling, bool IsPositive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairGameplayEvent"));

	struct
	{
		struct FName                   Event;
		bool                           Enable;
		float                          Scaling;
		bool                           IsPositive;
	} params = {};

	params.Event = Event;
	params.Enable = Enable;
	params.Scaling = Scaling;
	params.IsPositive = IsPositive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.EnableCombatCondition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Keybinding                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FName                   Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   HintText                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCrosshair_C::EnableCombatCondition(const struct FString& Keybinding, const struct FName& Condition, bool Enable, const struct FText& HintText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.EnableCombatCondition"));

	struct
	{
		struct FString                 Keybinding;
		struct FName                   Condition;
		bool                           Enable;
		struct FText                   HintText;
	} params = {};

	params.Keybinding = Keybinding;
	params.Condition = Condition;
	params.Enable = Enable;
	params.HintText = HintText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairWasParried
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::CrosshairWasParried()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairWasParried"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairHoldingProgress
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::CrosshairHoldingProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairHoldingProgress"));

	struct
	{
		float                          Progress;
	} params = {};

	params.Progress = Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairHoldingInitiated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsRangedAttack                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrosshair_C::CrosshairHoldingInitiated(bool IsRangedAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairHoldingInitiated"));

	struct
	{
		bool                           IsRangedAttack;
	} params = {};

	params.IsRangedAttack = IsRangedAttack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairHoldingCompleted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::CrosshairHoldingCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairHoldingCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairHoldingAborted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsStateEnd                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Force                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrosshair_C::CrosshairHoldingAborted(bool IsStateEnd, bool Force)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairHoldingAborted"));

	struct
	{
		bool                           IsStateEnd;
		bool                           Force;
	} params = {};

	params.IsStateEnd = IsStateEnd;
	params.Force = Force;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairProjectileFired
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::CrosshairProjectileFired()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairProjectileFired"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairOutOfCombatWarning
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrosshair_C::CrosshairOutOfCombatWarning(bool bShowMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairOutOfCombatWarning"));

	struct
	{
		bool                           bShowMessage;
	} params = {};

	params.bShowMessage = bShowMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairPostRespawnMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ClassName                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCrosshair_C::CrosshairPostRespawnMessage(const struct FText& ClassName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairPostRespawnMessage"));

	struct
	{
		struct FText                   ClassName;
	} params = {};

	params.ClassName = ClassName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairLostLimbMessage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::CrosshairLostLimbMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairLostLimbMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairDamageEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Event                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           IsEnemy                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrosshair_C::CrosshairDamageEvent(const struct FName& Event, const struct FDamageTakenEvent& DamageTakenEvent, bool IsEnemy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairDamageEvent"));

	struct
	{
		struct FName                   Event;
		struct FDamageTakenEvent       DamageTakenEvent;
		bool                           IsEnemy;
	} params = {};

	params.Event = Event;
	params.DamageTakenEvent = DamageTakenEvent;
	params.IsEnemy = IsEnemy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairDamageTakenEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          HitDirection                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::CrosshairDamageTakenEvent(float Damage, float HitDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairDamageTakenEvent"));

	struct
	{
		float                          Damage;
		float                          HitDirection;
	} params = {};

	params.Damage = Damage;
	params.HitDirection = HitDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.WidgetAnimationEvt_HitAroundParryLeftAnim_K2Node_WidgetAnimationEvent_3
// (FUNC_BlueprintEvent)

void UCrosshair_C::WidgetAnimationEvt_HitAroundParryLeftAnim_K2Node_WidgetAnimationEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.WidgetAnimationEvt_HitAroundParryLeftAnim_K2Node_WidgetAnimationEvent_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.WidgetAnimationEvt_HitAroundParryRightAnim_K2Node_WidgetAnimationEvent_4
// (FUNC_BlueprintEvent)

void UCrosshair_C::WidgetAnimationEvt_HitAroundParryRightAnim_K2Node_WidgetAnimationEvent_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.WidgetAnimationEvt_HitAroundParryRightAnim_K2Node_WidgetAnimationEvent_4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.WorldHit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::WorldHit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.WorldHit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.OnParrySuccess_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           ThisCharacter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           OtherCharacter                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FParryEventState        ParryEventState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UCrosshair_C::OnParrySuccess_Event_1(class ATBLCharacter* ThisCharacter, class ATBLCharacter* OtherCharacter, const struct FParryEventState& ParryEventState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnParrySuccess_Event_1"));

	struct
	{
		class ATBLCharacter*           ThisCharacter;
		class ATBLCharacter*           OtherCharacter;
		struct FParryEventState        ParryEventState;
	} params = {};

	params.ThisCharacter = ThisCharacter;
	params.OtherCharacter = OtherCharacter;
	params.ParryEventState = ParryEventState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.EnableCombatConditions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Keybinding                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FName                   Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   HintText                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UCrosshair_C::EnableCombatConditions(const struct FString& Keybinding, const struct FName& Condition, bool Enable, const struct FText& HintText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.EnableCombatConditions"));

	struct
	{
		struct FString                 Keybinding;
		struct FName                   Condition;
		bool                           Enable;
		struct FText                   HintText;
	} params = {};

	params.Keybinding = Keybinding;
	params.Condition = Condition;
	params.Enable = Enable;
	params.HintText = HintText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairPostShuffleMessage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::CrosshairPostShuffleMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairPostShuffleMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairTutorialFailedMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   CustomText                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCrosshair_C::CrosshairTutorialFailedMessage(const struct FText& CustomText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairTutorialFailedMessage"));

	struct
	{
		struct FText                   CustomText;
	} params = {};

	params.CustomText = CustomText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairTutorialNeutralMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   CustomText                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCrosshair_C::CrosshairTutorialNeutralMessage(const struct FText& CustomText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairTutorialNeutralMessage"));

	struct
	{
		struct FText                   CustomText;
	} params = {};

	params.CustomText = CustomText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.CrosshairTutorialSuccessMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   CustomText                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCrosshair_C::CrosshairTutorialSuccessMessage(const struct FText& CustomText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.CrosshairTutorialSuccessMessage"));

	struct
	{
		struct FText                   CustomText;
	} params = {};

	params.CustomText = CustomText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.Tick"));

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


// Function Crosshair.Crosshair_C.OnProjectileCounterWindowEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::OnProjectileCounterWindowEnd(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.OnProjectileCounterWindowEnd"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.HorseHit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrosshair_C::HorseHit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.HorseHit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.ExecuteUbergraph_Crosshair
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrosshair_C::ExecuteUbergraph_Crosshair(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.ExecuteUbergraph_Crosshair"));

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


// Function Crosshair.Crosshair_C.MatchScoreEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UCrosshair_C::MatchScoreEvent__DelegateSignature(const struct FScoreEventStruct& ScoreEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.MatchScoreEvent__DelegateSignature"));

	struct
	{
		struct FScoreEventStruct       ScoreEvent;
	} params = {};

	params.ScoreEvent = ScoreEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crosshair.Crosshair_C.SendInputMessage__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   HintText                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UCrosshair_C::SendInputMessage__DelegateSignature(const struct FName& Text, const struct FString& ActionName, bool Enable, const struct FText& HintText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crosshair.Crosshair_C.SendInputMessage__DelegateSignature"));

	struct
	{
		struct FName                   Text;
		struct FString                 ActionName;
		bool                           Enable;
		struct FText                   HintText;
	} params = {};

	params.Text = Text;
	params.ActionName = ActionName;
	params.Enable = Enable;
	params.HintText = HintText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
