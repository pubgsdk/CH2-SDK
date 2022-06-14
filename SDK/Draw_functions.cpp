// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Draw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Draw.Draw_C.GetMaxDrawStrengthTime
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UDraw_C::GetMaxDrawStrengthTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.GetMaxDrawStrengthTime"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Draw.Draw_C.ToggleFocusHint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDraw_C::ToggleFocusHint(bool _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.ToggleFocusHint"));

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


// Function Draw.Draw_C.CrosshairFire
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDraw_C::CrosshairFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.CrosshairFire"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.NeedsCharge
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bClickToFire                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDraw_C::NeedsCharge(bool* bClickToFire)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.NeedsCharge"));

	struct
	{
		bool                           bClickToFire;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bClickToFire != nullptr)
		*bClickToFire = params.bClickToFire;
}


// Function Draw.Draw_C.Fire
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDraw_C::Fire()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.Fire"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.ClickToFire
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bClickToFire                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDraw_C::ClickToFire(bool* bClickToFire)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.ClickToFire"));

	struct
	{
		bool                           bClickToFire;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bClickToFire != nullptr)
		*bClickToFire = params.bClickToFire;
}


// Function Draw.Draw_C.IsOutOfStamina
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           OutOfStamina                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDraw_C::IsOutOfStamina(bool* OutOfStamina)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.IsOutOfStamina"));

	struct
	{
		bool                           OutOfStamina;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutOfStamina != nullptr)
		*OutOfStamina = params.OutOfStamina;
}


// Function Draw.Draw_C.CrosshairAborted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDraw_C::CrosshairAborted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.CrosshairAborted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.UpdateCrosshair
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDraw_C::UpdateCrosshair()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.UpdateCrosshair"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.CanBeCancelled
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           bIsCancelIntoParry             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UDraw_C::CanBeCancelled(bool bIsCancelIntoParry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.CanBeCancelled"));

	struct
	{
		bool                           bIsCancelIntoParry;
		bool                           ReturnValue;
	} params = {};

	params.bIsCancelIntoParry = bIsCancelIntoParry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Draw.Draw_C.GetDrawStrengthModifier
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UDraw_C::GetDrawStrengthModifier()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.GetDrawStrengthModifier"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Draw.Draw_C.CrosshairInitiated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDraw_C::CrosshairInitiated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.CrosshairInitiated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.OnAssemble_Draw
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDraw_C::OnAssemble_Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.OnAssemble_Draw"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UDraw_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.EventTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDraw_C::EventTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.EventTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDraw_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.EventBeginState"));

	struct
	{
		struct FName                   PreviousState;
		float                          PreviousStateTime;
		float                          AnimationLength;
	} params = {};

	params.PreviousState = PreviousState;
	params.PreviousStateTime = PreviousStateTime;
	params.AnimationLength = AnimationLength;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.EventEndState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bStartAttack                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDraw_C::EventEndState(const struct FName& NextState, bool bStartAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.EventEndState"));

	struct
	{
		struct FName                   NextState;
		bool                           bStartAttack;
	} params = {};

	params.NextState = NextState;
	params.bStartAttack = bStartAttack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.OnFocusPressed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDraw_C::OnFocusPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.OnFocusPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.OnFocusReleased
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDraw_C::OnFocusReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.OnFocusReleased"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDraw_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.EventBeginFire"));

	struct
	{
		struct FName                   AttackName;
		bool                           bHeldQueue;
	} params = {};

	params.AttackName = AttackName;
	params.bHeldQueue = bHeldQueue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.TriggerWeakDraw
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDraw_C::TriggerWeakDraw()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.TriggerWeakDraw"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.OnAttackQueued
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDraw_C::OnAttackQueued(const struct FName& AttackName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.OnAttackQueued"));

	struct
	{
		struct FName                   AttackName;
	} params = {};

	params.AttackName = AttackName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.MaxThrowHoldTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDraw_C::MaxThrowHoldTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.MaxThrowHoldTime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Draw.Draw_C.ExecuteUbergraph_Draw
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDraw_C::ExecuteUbergraph_Draw(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Draw.Draw_C.ExecuteUbergraph_Draw"));

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
