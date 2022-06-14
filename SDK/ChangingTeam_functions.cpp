// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ChangingTeam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChangingTeam.ChangingTeam_C.Set Dying Camera Params
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChangingTeam_C::Set_Dying_Camera_Params()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.Set Dying Camera Params"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChangingTeam.ChangingTeam_C.BeginState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChangingTeam_C::BeginState(const struct FGameplayTag& PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.BeginState"));

	struct
	{
		struct FGameplayTag            PreviousState;
	} params = {};

	params.PreviousState = PreviousState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChangingTeam.ChangingTeam_C.EndState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChangingTeam_C::EndState(const struct FGameplayTag& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.EndState"));

	struct
	{
		struct FGameplayTag            NextState;
	} params = {};

	params.NextState = NextState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChangingTeam.ChangingTeam_C.FadeToBlack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChangingTeam_C::FadeToBlack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.FadeToBlack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChangingTeam.ChangingTeam_C.HandlePossessedPawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChangingTeam_C::HandlePossessedPawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.HandlePossessedPawn"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChangingTeam.ChangingTeam_C.MoveToWaitingToSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChangingTeam_C::MoveToWaitingToSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.MoveToWaitingToSpawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChangingTeam.ChangingTeam_C.FadeOutComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChangingTeam_C::FadeOutComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.FadeOutComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChangingTeam.ChangingTeam_C.OnKilled
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UChangingTeam_C::OnKilled(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.OnKilled"));

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


// Function ChangingTeam.ChangingTeam_C.HandleSuicideNotify
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKillReason                    KillReason                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChangingTeam_C::HandleSuicideNotify(EKillReason KillReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.HandleSuicideNotify"));

	struct
	{
		EKillReason                    KillReason;
	} params = {};

	params.KillReason = KillReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChangingTeam.ChangingTeam_C.InitSpectatorCamera
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChangingTeam_C::InitSpectatorCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.InitSpectatorCamera"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChangingTeam.ChangingTeam_C.ExecuteUbergraph_ChangingTeam
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChangingTeam_C::ExecuteUbergraph_ChangingTeam(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChangingTeam.ChangingTeam_C.ExecuteUbergraph_ChangingTeam"));

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
