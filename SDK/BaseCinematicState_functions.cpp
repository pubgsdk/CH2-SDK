// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCinematicState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseCinematicState.BaseCinematicState_C.GetPreparingMatchTimeThreshold
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          MinTimeThreshold               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::GetPreparingMatchTimeThreshold(float* MinTimeThreshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.GetPreparingMatchTimeThreshold"));

	struct
	{
		float                          MinTimeThreshold;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MinTimeThreshold != nullptr)
		*MinTimeThreshold = params.MinTimeThreshold;
}


// Function BaseCinematicState.BaseCinematicState_C.Get Cinematic State from GameState
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::Get_Cinematic_State_from_GameState(struct FGameplayTag* Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.Get Cinematic State from GameState"));

	struct
	{
		struct FGameplayTag            Tag;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Tag != nullptr)
		*Tag = params.Tag;
}


// Function BaseCinematicState.BaseCinematicState_C.Get Cinematic State from Match State
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            State                          (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::Get_Cinematic_State_from_Match_State(struct FGameplayTag* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.Get Cinematic State from Match State"));

	struct
	{
		struct FGameplayTag            State;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (State != nullptr)
		*State = params.State;
}


// Function BaseCinematicState.BaseCinematicState_C.HandleGoingToSpawnAtSpawner
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::HandleGoingToSpawnAtSpawner(class ASpawner* Spawner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.HandleGoingToSpawnAtSpawner"));

	struct
	{
		class ASpawner*                Spawner;
	} params = {};

	params.Spawner = Spawner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCinematicState.BaseCinematicState_C.HandleMatchStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   MatchState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::HandleMatchStateChanged(const struct FName& MatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.HandleMatchStateChanged"));

	struct
	{
		struct FName                   MatchState;
	} params = {};

	params.MatchState = MatchState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCinematicState.BaseCinematicState_C.HandleGameCinematicStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECinematicGameState            GameStateCinematicState        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::HandleGameCinematicStateChanged(ECinematicGameState GameStateCinematicState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.HandleGameCinematicStateChanged"));

	struct
	{
		ECinematicGameState            GameStateCinematicState;
	} params = {};

	params.GameStateCinematicState = GameStateCinematicState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCinematicState.BaseCinematicState_C.HandlePossessedPawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::HandlePossessedPawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.HandlePossessedPawn"));

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


// Function BaseCinematicState.BaseCinematicState_C.HandleTeamChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::HandleTeamChanged(class ATBLTeam* NewTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.HandleTeamChanged"));

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


// Function BaseCinematicState.BaseCinematicState_C.HandleSuicideNotify
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKillReason                    KillReason                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::HandleSuicideNotify(EKillReason KillReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.HandleSuicideNotify"));

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


// Function BaseCinematicState.BaseCinematicState_C.HandleNextSpawnWaveChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::HandleNextSpawnWaveChanged(class ASpawnWave* SpawnWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.HandleNextSpawnWaveChanged"));

	struct
	{
		class ASpawnWave*              SpawnWave;
	} params = {};

	params.SpawnWave = SpawnWave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseCinematicState.BaseCinematicState_C.ExecuteUbergraph_BaseCinematicState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCinematicState_C::ExecuteUbergraph_BaseCinematicState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseCinematicState.BaseCinematicState_C.ExecuteUbergraph_BaseCinematicState"));

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
