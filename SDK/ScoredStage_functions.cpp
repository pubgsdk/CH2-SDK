// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ScoredStage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoredStage.ScoredStage_C.Create debug menu widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Debug_menu_widget              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::Create_debug_menu_widget(class UUserWidget** Debug_menu_widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.Create debug menu widget"));

	struct
	{
		class UUserWidget*             Debug_menu_widget;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Debug_menu_widget != nullptr)
		*Debug_menu_widget = params.Debug_menu_widget;
}


// Function ScoredStage.ScoredStage_C.GetNumOfPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Players                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::GetNumOfPlayers(int* Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.GetNumOfPlayers"));

	struct
	{
		int                            Players;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Players != nullptr)
		*Players = params.Players;
}


// Function ScoredStage.ScoredStage_C.RecalculateMaxScore
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Max_Score                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::RecalculateMaxScore(int Max_Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.RecalculateMaxScore"));

	struct
	{
		int                            Max_Score;
	} params = {};

	params.Max_Score = Max_Score;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.GetTimeRemainingPercent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float AScoredStage_C::GetTimeRemainingPercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.GetTimeRemainingPercent"));

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


// Function ScoredStage.ScoredStage_C.GetTimeRemaining
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float AScoredStage_C::GetTimeRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.GetTimeRemaining"));

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


// Function ScoredStage.ScoredStage_C.SetScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewScore                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::SetScore(int NewScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.SetScore"));

	struct
	{
		int                            NewScore;
	} params = {};

	params.NewScore = NewScore;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.OnRep_Max Score
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AScoredStage_C::OnRep_Max_Score()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.OnRep_Max Score"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.OnRep_Score
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AScoredStage_C::OnRep_Score()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.OnRep_Score"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.Initialize ScoredStage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UStageInterface> Next_Stage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TScriptInterface<class UStageInterface> Timeout_Stage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FScoredStageProperties  Settings                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStandardStageCinematicProperties cinematics                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AScoredStage_C::Initialize_ScoredStage(const TScriptInterface<class UStageInterface>& Next_Stage, const TScriptInterface<class UStageInterface>& Timeout_Stage, const struct FScoredStageProperties& Settings, const struct FStandardStageCinematicProperties& cinematics, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.Initialize ScoredStage"));

	struct
	{
		TScriptInterface<class UStageInterface> Next_Stage;
		TScriptInterface<class UStageInterface> Timeout_Stage;
		struct FScoredStageProperties  Settings;
		struct FStandardStageCinematicProperties cinematics;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.Next_Stage = Next_Stage;
	params.Timeout_Stage = Timeout_Stage;
	params.Settings = Settings;
	params.cinematics = cinematics;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function ScoredStage.ScoredStage_C.Initialize ScoredStage No Cinematics
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UStageInterface> Next_Stage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TScriptInterface<class UStageInterface> Timeout_Stage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FScoredStageProperties  Settings                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AScoredStage_C::Initialize_ScoredStage_No_Cinematics(const TScriptInterface<class UStageInterface>& Next_Stage, const TScriptInterface<class UStageInterface>& Timeout_Stage, const struct FScoredStageProperties& Settings, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.Initialize ScoredStage No Cinematics"));

	struct
	{
		TScriptInterface<class UStageInterface> Next_Stage;
		TScriptInterface<class UStageInterface> Timeout_Stage;
		struct FScoredStageProperties  Settings;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.Next_Stage = Next_Stage;
	params.Timeout_Stage = Timeout_Stage;
	params.Settings = Settings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function ScoredStage.ScoredStage_C.CompleteStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> AScoredStage_C::CompleteStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.CompleteStage"));

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


// Function ScoredStage.ScoredStage_C.IsStageReadyToComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AScoredStage_C::IsStageReadyToComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.IsStageReadyToComplete"));

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


// Function ScoredStage.ScoredStage_C.Is MaxScore exceeded
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AScoredStage_C::Is_MaxScore_exceeded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.Is MaxScore exceeded"));

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


// Function ScoredStage.ScoredStage_C.Add Score
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::Add_Score(int Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.Add Score"));

	struct
	{
		int                            Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.Initialize ScoredStage No Settings
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UStageInterface> Next_Stage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TScriptInterface<class UStageInterface> Timeout_Stage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AScoredStage_C::Initialize_ScoredStage_No_Settings(const TScriptInterface<class UStageInterface>& Next_Stage, const TScriptInterface<class UStageInterface>& Timeout_Stage, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.Initialize ScoredStage No Settings"));

	struct
	{
		TScriptInterface<class UStageInterface> Next_Stage;
		TScriptInterface<class UStageInterface> Timeout_Stage;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.Next_Stage = Next_Stage;
	params.Timeout_Stage = Timeout_Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function ScoredStage.ScoredStage_C.StartStage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AScoredStage_C::StartStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.StartStage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.Set HUD Elements Visible
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AScoredStage_C::Set_HUD_Elements_Visible(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.Set HUD Elements Visible"));

	struct
	{
		bool                           Visible;
	} params = {};

	params.Visible = Visible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.On Score Changed_Event_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentScore                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxScore                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::On_Score_Changed_Event_2(int CurrentScore, int MaxScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.On Score Changed_Event_2"));

	struct
	{
		int                            CurrentScore;
		int                            MaxScore;
	} params = {};

	params.CurrentScore = CurrentScore;
	params.MaxScore = MaxScore;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.On Ended_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AScoredStage_C*          Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::On_Ended_Event(class AScoredStage_C* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.On Ended_Event"));

	struct
	{
		class AScoredStage_C*          Stage;
	} params = {};

	params.Stage = Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.AddScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::AddScore(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.AddScore"));

	struct
	{
		int                            Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.ExecuteUbergraph_ScoredStage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::ExecuteUbergraph_ScoredStage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.ExecuteUbergraph_ScoredStage"));

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


// Function ScoredStage.ScoredStage_C.On Score Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentScore                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxScore                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::On_Score_Changed__DelegateSignature(int CurrentScore, int MaxScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.On Score Changed__DelegateSignature"));

	struct
	{
		int                            CurrentScore;
		int                            MaxScore;
	} params = {};

	params.CurrentScore = CurrentScore;
	params.MaxScore = MaxScore;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.On Completed by Score__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AScoredStage_C::On_Completed_by_Score__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.On Completed by Score__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.On Timed Out__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AScoredStage_C::On_Timed_Out__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.On Timed Out__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.On Ended__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AScoredStage_C*          Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::On_Ended__DelegateSignature(class AScoredStage_C* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.On Ended__DelegateSignature"));

	struct
	{
		class AScoredStage_C*          Stage;
	} params = {};

	params.Stage = Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoredStage.ScoredStage_C.On Started__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AScoredStage_C*          Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScoredStage_C::On_Started__DelegateSignature(class AScoredStage_C* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoredStage.ScoredStage_C.On Started__DelegateSignature"));

	struct
	{
		class AScoredStage_C*          Stage;
	} params = {};

	params.Stage = Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
