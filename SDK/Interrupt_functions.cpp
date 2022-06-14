// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Interrupt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interrupt.Interrupt_C.SlowdownHorse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSpecialAttack                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInterrupt_C::SlowdownHorse(bool IsSpecialAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.SlowdownHorse"));

	struct
	{
		bool                           IsSpecialAttack;
	} params = {};

	params.IsSpecialAttack = IsSpecialAttack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Interrupt.Interrupt_C.OnAssemble_Interrupt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterrupt_C::OnAssemble_Interrupt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.OnAssemble_Interrupt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Interrupt.Interrupt_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInterrupt_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.EventBeginFire"));

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


// Function Interrupt.Interrupt_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInterrupt_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.EventBeginState"));

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


// Function Interrupt.Interrupt_C.DashJabOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterrupt_C::DashJabOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.DashJabOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Interrupt.Interrupt_C.SoftRecoveryMelee
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterrupt_C::SoftRecoveryMelee()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.SoftRecoveryMelee"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Interrupt.Interrupt_C.AllowParry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterrupt_C::AllowParry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.AllowParry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Interrupt.Interrupt_C.TryStartAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterrupt_C::TryStartAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.TryStartAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Interrupt.Interrupt_C.SoftRecoveryRanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterrupt_C::SoftRecoveryRanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.SoftRecoveryRanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Interrupt.Interrupt_C.EventDamage
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UInterrupt_C::EventDamage(const struct FDamageTakenEvent& DamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.EventDamage"));

	struct
	{
		struct FDamageTakenEvent       DamageEvent;
	} params = {};

	params.DamageEvent = DamageEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Interrupt.Interrupt_C.ExecuteUbergraph_Interrupt
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInterrupt_C::ExecuteUbergraph_Interrupt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Interrupt.Interrupt_C.ExecuteUbergraph_Interrupt"));

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
