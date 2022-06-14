// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_FeintAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC_FeintAttack.AC_FeintAttack_C.PickFeintAttack
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Attack                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Feint                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAC_FeintAttack_C::PickFeintAttack(const struct FName& Attack, struct FName* Feint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_FeintAttack.AC_FeintAttack_C.PickFeintAttack"));

	struct
	{
		struct FName                   Attack;
		struct FName                   Feint;
	} params = {};

	params.Attack = Attack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Feint != nullptr)
		*Feint = params.Feint;
}


// Function AC_FeintAttack.AC_FeintAttack_C.PerformAction
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UAC_FeintAttack_C::PerformAction(const struct FUtilityAI_Context& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_FeintAttack.AC_FeintAttack_C.PerformAction"));

	struct
	{
		struct FUtilityAI_Context      C;
	} params = {};

	params.C = C;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_FeintAttack.AC_FeintAttack_C.Combat State Begin
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttackInfo             EventAttackInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UCombatState*            CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAC_FeintAttack_C::Combat_State_Begin(class AActor* Actor, const struct FName& State, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_FeintAttack.AC_FeintAttack_C.Combat State Begin"));

	struct
	{
		class AActor*                  Actor;
		struct FName                   State;
		struct FAttackInfo             EventAttackInfo;
		class UCombatState*            CombatState;
	} params = {};

	params.Actor = Actor;
	params.State = State;
	params.EventAttackInfo = EventAttackInfo;
	params.CombatState = CombatState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_FeintAttack.AC_FeintAttack_C.Timeout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAC_FeintAttack_C::Timeout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_FeintAttack.AC_FeintAttack_C.Timeout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_FeintAttack.AC_FeintAttack_C.CompleteAction
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UAC_FeintAttack_C::CompleteAction(const struct FUtilityAI_Context& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_FeintAttack.AC_FeintAttack_C.CompleteAction"));

	struct
	{
		struct FUtilityAI_Context      C;
	} params = {};

	params.C = C;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_FeintAttack.AC_FeintAttack_C.OnFeintQueued
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAC_FeintAttack_C::OnFeintQueued()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_FeintAttack.AC_FeintAttack_C.OnFeintQueued"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_FeintAttack.AC_FeintAttack_C.ResetAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAC_FeintAttack_C::ResetAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_FeintAttack.AC_FeintAttack_C.ResetAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AC_FeintAttack.AC_FeintAttack_C.ExecuteUbergraph_AC_FeintAttack
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAC_FeintAttack_C::ExecuteUbergraph_AC_FeintAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_FeintAttack.AC_FeintAttack_C.ExecuteUbergraph_AC_FeintAttack"));

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
