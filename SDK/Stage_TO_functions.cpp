// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Stage_TO_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stage_TO.Stage_TO_C.CommitNewObjectiveText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::CommitNewObjectiveText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.CommitNewObjectiveText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.On Player Selected Spectator Mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bOnPlayerSelectedSpectatorMode (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStage_TO_C::On_Player_Selected_Spectator_Mode(bool bOnPlayerSelectedSpectatorMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.On Player Selected Spectator Mode"));

	struct
	{
		bool                           bOnPlayerSelectedSpectatorMode;
	} params = {};

	params.bOnPlayerSelectedSpectatorMode = bOnPlayerSelectedSpectatorMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.ResizeFFAObjectiveWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFFAObjectiveWidget_Leader_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TO_C::ResizeFFAObjectiveWidget(class UFFAObjectiveWidget_Leader_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.ResizeFFAObjectiveWidget"));

	struct
	{
		class UFFAObjectiveWidget_Leader_C* Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.UpdateListOrder
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::UpdateListOrder()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.UpdateListOrder"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.Get_MaxScoreText_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UStage_TO_C::Get_MaxScoreText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.Get_MaxScoreText_Text_1"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Stage_TO.Stage_TO_C.Get_StageTimeRemaining_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UStage_TO_C::Get_StageTimeRemaining_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.Get_StageTimeRemaining_Text_1"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Stage_TO.Stage_TO_C.SetScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Agatha                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Mason                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   TopScoreText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   BottomScoreText                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UStage_TO_C::SetScore(float Agatha, float Mason, const struct FText& TopScoreText, const struct FText& BottomScoreText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.SetScore"));

	struct
	{
		float                          Agatha;
		float                          Mason;
		struct FText                   TopScoreText;
		struct FText                   BottomScoreText;
	} params = {};

	params.Agatha = Agatha;
	params.Mason = Mason;
	params.TopScoreText = TopScoreText;
	params.BottomScoreText = BottomScoreText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.Apply Progress Updates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::Apply_Progress_Updates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.Apply Progress Updates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.OnPossessedPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TO_C::OnPossessedPawn(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.OnPossessedPawn"));

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


// Function Stage_TO.Stage_TO_C.UpdateObjectiveContextMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::UpdateObjectiveContextMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.UpdateObjectiveContextMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.OnNewObjectiveContextMessage_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FObjectiveContextMessage ObjectiveContextMessage        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UStage_TO_C::OnNewObjectiveContextMessage_Event_1(const struct FObjectiveContextMessage& ObjectiveContextMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.OnNewObjectiveContextMessage_Event_1"));

	struct
	{
		struct FObjectiveContextMessage ObjectiveContextMessage;
	} params = {};

	params.ObjectiveContextMessage = ObjectiveContextMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.OnBonusTimeAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          BonusTimeSeconds               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TO_C::OnBonusTimeAdded(float BonusTimeSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.OnBonusTimeAdded"));

	struct
	{
		float                          BonusTimeSeconds;
	} params = {};

	params.BonusTimeSeconds = BonusTimeSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.StageEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::StageEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.StageEnded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.StageStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::StageStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.StageStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.OnTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TO_C::OnTeamChanged(class ATBLTeam* NewTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.OnTeamChanged"));

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


// Function Stage_TO.Stage_TO_C.SetAttackingDefendingstate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::SetAttackingDefendingstate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.SetAttackingDefendingstate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.Current Stage Changed_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Previous_Stage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 New_Stage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TO_C::Current_Stage_Changed_Event_1(class UObject* Previous_Stage, class UObject* New_Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.Current Stage Changed_Event_1"));

	struct
	{
		class UObject*                 Previous_Stage;
		class UObject*                 New_Stage;
	} params = {};

	params.Previous_Stage = Previous_Stage;
	params.New_Stage = New_Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStage_TO_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.Objective Complete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::Objective_Complete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.Objective Complete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.Objective Failed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::Objective_Failed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.Objective Failed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.Set Bottom Progress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Score_Text                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UStage_TO_C::Set_Bottom_Progress(float Progress, const struct FText& Score_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.Set Bottom Progress"));

	struct
	{
		float                          Progress;
		struct FText                   Score_Text;
	} params = {};

	params.Progress = Progress;
	params.Score_Text = Score_Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.New Objective
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::New_Objective()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.New Objective"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.TutorialWaveArenaReset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TO_C::TutorialWaveArenaReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.TutorialWaveArenaReset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.Set Top Progress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Score_Text                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UStage_TO_C::Set_Top_Progress(float Progress, const struct FText& Score_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.Set Top Progress"));

	struct
	{
		float                          Progress;
		struct FText                   Score_Text;
	} params = {};

	params.Progress = Progress;
	params.Score_Text = Score_Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.TutorialSetWaveMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStage_TO_C::TutorialSetWaveMode(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.TutorialSetWaveMode"));

	struct
	{
		bool                           bEnabled;
	} params = {};

	params.bEnabled = bEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.UpdateWaveCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumberLeft                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NumberTotal                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TO_C::UpdateWaveCount(int NumberLeft, int NumberTotal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.UpdateWaveCount"));

	struct
	{
		int                            NumberLeft;
		int                            NumberTotal;
	} params = {};

	params.NumberLeft = NumberLeft;
	params.NumberTotal = NumberTotal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.UpdateTimeLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeUntilNextWave              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TO_C::UpdateTimeLeft(float TimeUntilNextWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.UpdateTimeLeft"));

	struct
	{
		float                          TimeUntilNextWave;
	} params = {};

	params.TimeUntilNextWave = TimeUntilNextWave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.UpdateWaveText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UStage_TO_C::UpdateWaveText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.UpdateWaveText"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.OnWaveCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   WaveCompleteText               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   NextWaveText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UStage_TO_C::OnWaveCompleted(const struct FText& WaveCompleteText, const struct FText& NextWaveText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.OnWaveCompleted"));

	struct
	{
		struct FText                   WaveCompleteText;
		struct FText                   NextWaveText;
	} params = {};

	params.WaveCompleteText = WaveCompleteText;
	params.NextWaveText = NextWaveText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TO.Stage_TO_C.ExecuteUbergraph_Stage_TO
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TO_C::ExecuteUbergraph_Stage_TO(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TO.Stage_TO_C.ExecuteUbergraph_Stage_TO"));

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
