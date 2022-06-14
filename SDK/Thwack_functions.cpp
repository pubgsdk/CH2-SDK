// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Thwack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Thwack.CombatStateBlueprint_0_C.GetTimeToClearQueue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatStateBlueprint_0_C::GetTimeToClearQueue(float* Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.GetTimeToClearQueue"));

	struct
	{
		float                          Time;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Thwack.CombatStateBlueprint_0_C.GetAttackTransition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// EAttackTransition              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EAttackTransition UCombatStateBlueprint_0_C::GetAttackTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.GetAttackTransition"));

	struct
	{
		EAttackTransition              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Thwack.CombatStateBlueprint_0_C.OnAssemble_CombatStateBlueprint_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::OnAssemble_CombatStateBlueprint_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.OnAssemble_CombatStateBlueprint_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.CombatStateBlueprint_0_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.CombatStateBlueprint_0_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCombatStateBlueprint_0_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.EventBeginFire"));

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


// Function Thwack.CombatStateBlueprint_0_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatStateBlueprint_0_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.EventBeginState"));

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


// Function Thwack.CombatStateBlueprint_0_C.EnableCombo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::EnableCombo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.EnableCombo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.CombatStateBlueprint_0_C.TryStartAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::TryStartAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.TryStartAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.CombatStateBlueprint_0_C.EnableParryFromShove
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::EnableParryFromShove()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.EnableParryFromShove"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.CombatStateBlueprint_0_C.EnableJabShoveSpecial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::EnableJabShoveSpecial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.EnableJabShoveSpecial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.CombatStateBlueprint_0_C.EnableAttackFromShove
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::EnableAttackFromShove()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.EnableAttackFromShove"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.CombatStateBlueprint_0_C.AllowParry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatStateBlueprint_0_C::AllowParry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.AllowParry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.CombatStateBlueprint_0_C.ExecuteUbergraph_CombatStateBlueprint_1
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatStateBlueprint_0_C::ExecuteUbergraph_CombatStateBlueprint_1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.CombatStateBlueprint_0_C.ExecuteUbergraph_CombatStateBlueprint_1"));

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


// Function Thwack.Thwack_C.GetTimeToClearQueue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UThwack_C::GetTimeToClearQueue(float* Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.GetTimeToClearQueue"));

	struct
	{
		float                          Time;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Thwack.Thwack_C.GetAttackTransition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// EAttackTransition              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EAttackTransition UThwack_C::GetAttackTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.GetAttackTransition"));

	struct
	{
		EAttackTransition              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Thwack.Thwack_C.OnAssemble_CombatStateBlueprint_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UThwack_C::OnAssemble_CombatStateBlueprint_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.OnAssemble_CombatStateBlueprint_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.Thwack_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UThwack_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.Thwack_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UThwack_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.EventBeginFire"));

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


// Function Thwack.Thwack_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UThwack_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.EventBeginState"));

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


// Function Thwack.Thwack_C.EnableCombo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UThwack_C::EnableCombo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.EnableCombo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.Thwack_C.TryStartAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UThwack_C::TryStartAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.TryStartAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.Thwack_C.EnableParryFromShove
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UThwack_C::EnableParryFromShove()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.EnableParryFromShove"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.Thwack_C.EnableJabShoveSpecial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UThwack_C::EnableJabShoveSpecial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.EnableJabShoveSpecial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.Thwack_C.EnableAttackFromShove
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UThwack_C::EnableAttackFromShove()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.EnableAttackFromShove"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.Thwack_C.AllowParry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UThwack_C::AllowParry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.AllowParry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.Thwack_C.EventWasParried
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           ParryingCharacter              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UThwack_C::EventWasParried(class ATBLCharacter* ParryingCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.EventWasParried"));

	struct
	{
		class ATBLCharacter*           ParryingCharacter;
	} params = {};

	params.ParryingCharacter = ParryingCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.Thwack_C.EnableComboAfterJabWasBlocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UThwack_C::EnableComboAfterJabWasBlocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.EnableComboAfterJabWasBlocked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Thwack.Thwack_C.ExecuteUbergraph_Thwack
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UThwack_C::ExecuteUbergraph_Thwack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Thwack.Thwack_C.ExecuteUbergraph_Thwack"));

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
