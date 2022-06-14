// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Blocked_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Blocked.Blocked_C.GetAttackTransition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// EAttackTransition              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EAttackTransition UBlocked_C::GetAttackTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Blocked.Blocked_C.GetAttackTransition"));

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


// Function Blocked.Blocked_C.OnAssemble_Blocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlocked_C::OnAssemble_Blocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Blocked.Blocked_C.OnAssemble_Blocked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Blocked.Blocked_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBlocked_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Blocked.Blocked_C.EventBeginFire"));

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


// Function Blocked.Blocked_C.AllowCombo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlocked_C::AllowCombo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Blocked.Blocked_C.AllowCombo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Blocked.Blocked_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBlocked_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Blocked.Blocked_C.EventBeginState"));

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


// Function Blocked.Blocked_C.AllowParry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlocked_C::AllowParry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Blocked.Blocked_C.AllowParry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Blocked.Blocked_C.SoftRecovery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlocked_C::SoftRecovery()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Blocked.Blocked_C.SoftRecovery"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Blocked.Blocked_C.TryStartAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBlocked_C::TryStartAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Blocked.Blocked_C.TryStartAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Blocked.Blocked_C.ExecuteUbergraph_Blocked
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBlocked_C::ExecuteUbergraph_Blocked(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Blocked.Blocked_C.ExecuteUbergraph_Blocked"));

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
