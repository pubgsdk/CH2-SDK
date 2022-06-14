// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FFATimeoutStage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FFATimeoutStage.FFATimeoutStage_C.GetMaxScore
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ScoreNotReplicated             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Score                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFFATimeoutStage_C::GetMaxScore(bool* ScoreNotReplicated, int* Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.GetMaxScore"));

	struct
	{
		bool                           ScoreNotReplicated;
		int                            Score;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ScoreNotReplicated != nullptr)
		*ScoreNotReplicated = params.ScoreNotReplicated;
	if (Score != nullptr)
		*Score = params.Score;
}


// Function FFATimeoutStage.FFATimeoutStage_C.SetMaxScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewMaxScore                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFFATimeoutStage_C::SetMaxScore(int NewMaxScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.SetMaxScore"));

	struct
	{
		int                            NewMaxScore;
	} params = {};

	params.NewMaxScore = NewMaxScore;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFATimeoutStage.FFATimeoutStage_C.OnRep_MaxScore
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFFATimeoutStage_C::OnRep_MaxScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.OnRep_MaxScore"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFATimeoutStage.FFATimeoutStage_C.OnRep_IsSuddenDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFFATimeoutStage_C::OnRep_IsSuddenDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.OnRep_IsSuddenDeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFATimeoutStage.FFATimeoutStage_C.GetVictor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         Player                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsTie                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AFFATimeoutStage_C::GetVictor(class ATBLPlayerState** Player, bool* IsTie)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.GetVictor"));

	struct
	{
		class ATBLPlayerState*         Player;
		bool                           IsTie;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Player != nullptr)
		*Player = params.Player;
	if (IsTie != nullptr)
		*IsTie = params.IsTie;
}


// Function FFATimeoutStage.FFATimeoutStage_C.IsStageReadyToComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AFFATimeoutStage_C::IsStageReadyToComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.IsStageReadyToComplete"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FFATimeoutStage.FFATimeoutStage_C.CompleteStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> AFFATimeoutStage_C::CompleteStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.CompleteStage"));

	struct
	{
		TScriptInterface<class UStageInterface> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FFATimeoutStage.FFATimeoutStage_C.StartStage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFFATimeoutStage_C::StartStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.StartStage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFATimeoutStage.FFATimeoutStage_C.Duration Exceeded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFFATimeoutStage_C::Duration_Exceeded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.Duration Exceeded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFATimeoutStage.FFATimeoutStage_C.ExecuteUbergraph_FFATimeoutStage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFFATimeoutStage_C::ExecuteUbergraph_FFATimeoutStage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.ExecuteUbergraph_FFATimeoutStage"));

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


// Function FFATimeoutStage.FFATimeoutStage_C.MaxScoreUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFFATimeoutStage_C::MaxScoreUpdated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.MaxScoreUpdated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFATimeoutStage.FFATimeoutStage_C.SuddenDeath__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFFATimeoutStage_C::SuddenDeath__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFATimeoutStage.FFATimeoutStage_C.SuddenDeath__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
