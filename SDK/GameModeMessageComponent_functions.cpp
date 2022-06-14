// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameModeMessageComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameModeMessageComponent.GameModeMessageComponent_C.SetupStageEndingMusic
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeMessageComponent_C::SetupStageEndingMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.SetupStageEndingMusic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.SendFFA MatchEndedMessages
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         Player_Victor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::SendFFA_MatchEndedMessages(class ATBLPlayerState* Player_Victor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.SendFFA MatchEndedMessages"));

	struct
	{
		class ATBLPlayerState*         Player_Victor;
	} params = {};

	params.Player_Victor = Player_Victor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.RemovePreviousStageContextVos
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeMessageComponent_C::RemovePreviousStageContextVos()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.RemovePreviousStageContextVos"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.AppendAndGetTDMMessages
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         TDMPercentMessages             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<struct FString>         TDMTicketsMessage              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<struct FGameModeMessageTable> Messages                       (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::AppendAndGetTDMMessages(TArray<struct FString>* TDMPercentMessages, TArray<struct FString>* TDMTicketsMessage, TArray<struct FGameModeMessageTable>* Messages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.AppendAndGetTDMMessages"));

	struct
	{
		TArray<struct FString>         TDMPercentMessages;
		TArray<struct FString>         TDMTicketsMessage;
		TArray<struct FGameModeMessageTable> Messages;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TDMPercentMessages != nullptr)
		*TDMPercentMessages = params.TDMPercentMessages;
	if (TDMTicketsMessage != nullptr)
		*TDMTicketsMessage = params.TDMTicketsMessage;
	if (Messages != nullptr)
		*Messages = params.Messages;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.GetTDMStageTicketsPercentText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TicketsRemaining               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InitialTickets                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FString>         EventTags                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::GetTDMStageTicketsPercentText(int TicketsRemaining, int InitialTickets, EFaction Faction, TArray<struct FString>* EventTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.GetTDMStageTicketsPercentText"));

	struct
	{
		int                            TicketsRemaining;
		int                            InitialTickets;
		EFaction                       Faction;
		TArray<struct FString>         EventTags;
	} params = {};

	params.TicketsRemaining = TicketsRemaining;
	params.InitialTickets = InitialTickets;
	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EventTags != nullptr)
		*EventTags = params.EventTags;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.NewStageStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> NewStage                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameModeMessageComponent_C::NewStageStarted(const TScriptInterface<class UStageInterface>& NewStage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.NewStageStarted"));

	struct
	{
		TScriptInterface<class UStageInterface> NewStage;
	} params = {};

	params.NewStage = NewStage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.BroadcastMessages
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FGameModeMessageTable> GameModeMessages               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::BroadcastMessages(TArray<struct FGameModeMessageTable>* GameModeMessages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.BroadcastMessages"));

	struct
	{
		TArray<struct FGameModeMessageTable> GameModeMessages;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GameModeMessages != nullptr)
		*GameModeMessages = params.GameModeMessages;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.TriggerStageEndingMusic
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeMessageComponent_C::TriggerStageEndingMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.TriggerStageEndingMusic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.HandleStageNearingScoreComplete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewScorePercentage             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::HandleStageNearingScoreComplete(int NewScorePercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.HandleStageNearingScoreComplete"));

	struct
	{
		int                            NewScorePercentage;
	} params = {};

	params.NewScorePercentage = NewScorePercentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.HandleStageNearingTimeOut
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MinutesRemaining               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::HandleStageNearingTimeOut(int MinutesRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.HandleStageNearingTimeOut"));

	struct
	{
		int                            MinutesRemaining;
	} params = {};

	params.MinutesRemaining = MinutesRemaining;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.FormatFFAText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FGameModeMessageTable> GameModeMessages               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Kills                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            KillsForVictory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FGameModeMessageTable> FormattedGameModeMessages      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::FormatFFAText(class ATBLPlayerState* PlayerState, int Kills, int KillsForVictory, TArray<struct FGameModeMessageTable>* GameModeMessages, TArray<struct FGameModeMessageTable>* FormattedGameModeMessages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.FormatFFAText"));

	struct
	{
		TArray<struct FGameModeMessageTable> GameModeMessages;
		class ATBLPlayerState*         PlayerState;
		int                            Kills;
		int                            KillsForVictory;
		TArray<struct FGameModeMessageTable> FormattedGameModeMessages;
	} params = {};

	params.PlayerState = PlayerState;
	params.Kills = Kills;
	params.KillsForVictory = KillsForVictory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GameModeMessages != nullptr)
		*GameModeMessages = params.GameModeMessages;
	if (FormattedGameModeMessages != nullptr)
		*FormattedGameModeMessages = params.FormattedGameModeMessages;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.SetStageLastScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::SetStageLastScore(int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.SetStageLastScore"));

	struct
	{
		int                            Score;
	} params = {};

	params.Score = Score;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.GetGameModeMessages
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         EventTags                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<struct FGameModeMessageTable> Messages                       (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::GetGameModeMessages(TArray<struct FString>* EventTags, TArray<struct FGameModeMessageTable>* Messages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.GetGameModeMessages"));

	struct
	{
		TArray<struct FString>         EventTags;
		TArray<struct FGameModeMessageTable> Messages;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EventTags != nullptr)
		*EventTags = params.EventTags;
	if (Messages != nullptr)
		*Messages = params.Messages;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageLastScore
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            LastScore                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::GetStageLastScore(int* LastScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageLastScore"));

	struct
	{
		int                            LastScore;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LastScore != nullptr)
		*LastScore = params.LastScore;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageMinutesRemaingText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            MinutesRemaining               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FString>         EventTags                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::GetStageMinutesRemaingText(int MinutesRemaining, TArray<struct FString>* EventTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageMinutesRemaingText"));

	struct
	{
		int                            MinutesRemaining;
		TArray<struct FString>         EventTags;
	} params = {};

	params.MinutesRemaining = MinutesRemaining;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EventTags != nullptr)
		*EventTags = params.EventTags;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.GetTDMStageTicketsText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TicketsRemaining               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InitialTickets                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FString>         EventTags                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::GetTDMStageTicketsText(int TicketsRemaining, int InitialTickets, EFaction Faction, TArray<struct FString>* EventTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.GetTDMStageTicketsText"));

	struct
	{
		int                            TicketsRemaining;
		int                            InitialTickets;
		EFaction                       Faction;
		TArray<struct FString>         EventTags;
	} params = {};

	params.TicketsRemaining = TicketsRemaining;
	params.InitialTickets = InitialTickets;
	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EventTags != nullptr)
		*EventTags = params.EventTags;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.GetFactionVictoryText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFaction                       VictoryFaction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FString>         EventTags                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::GetFactionVictoryText(EFaction VictoryFaction, TArray<struct FString>* EventTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.GetFactionVictoryText"));

	struct
	{
		EFaction                       VictoryFaction;
		TArray<struct FString>         EventTags;
	} params = {};

	params.VictoryFaction = VictoryFaction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EventTags != nullptr)
		*EventTags = params.EventTags;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.GetDefenderVictoryText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         EventTags                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::GetDefenderVictoryText(TArray<struct FString>* EventTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.GetDefenderVictoryText"));

	struct
	{
		TArray<struct FString>         EventTags;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EventTags != nullptr)
		*EventTags = params.EventTags;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.GetAttackerVictoryText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         EventTags                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::GetAttackerVictoryText(TArray<struct FString>* EventTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.GetAttackerVictoryText"));

	struct
	{
		TArray<struct FString>         EventTags;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EventTags != nullptr)
		*EventTags = params.EventTags;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.GetScoreStageScoreRows
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FGameModeMessageTable> Messages                       (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::GetScoreStageScoreRows(int Percentage, TArray<struct FGameModeMessageTable>* Messages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.GetScoreStageScoreRows"));

	struct
	{
		int                            Percentage;
		TArray<struct FGameModeMessageTable> Messages;
	} params = {};

	params.Percentage = Percentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Messages != nullptr)
		*Messages = params.Messages;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.QueueGameModeMessages
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FGameModeMessageTable> Messages                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::QueueGameModeMessages(TArray<struct FGameModeMessageTable>* Messages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.QueueGameModeMessages"));

	struct
	{
		TArray<struct FGameModeMessageTable> Messages;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Messages != nullptr)
		*Messages = params.Messages;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageBeginText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         EventTags                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::GetStageBeginText(TArray<struct FString>* EventTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageBeginText"));

	struct
	{
		TArray<struct FString>         EventTags;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EventTags != nullptr)
		*EventTags = params.EventTags;
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameModeMessageComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.ReceiveTick"));

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


// Function GameModeMessageComponent.GameModeMessageComponent_C.Started New Stage_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TScriptInterface<class UStageInterface> Previous_Stage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameModeMessageComponent_C::Started_New_Stage_Event_1(const TScriptInterface<class UStageInterface>& Stage, const TScriptInterface<class UStageInterface>& Previous_Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.Started New Stage_Event_1"));

	struct
	{
		TScriptInterface<class UStageInterface> Stage;
		TScriptInterface<class UStageInterface> Previous_Stage;
	} params = {};

	params.Stage = Stage;
	params.Previous_Stage = Previous_Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.On Score Changed_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentScore                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxScore                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::On_Score_Changed_Event_1(int CurrentScore, int MaxScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.On Score Changed_Event_1"));

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


// Function GameModeMessageComponent.GameModeMessageComponent_C.On Tickets Changed_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewTickets                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::On_Tickets_Changed_Event_1(EFaction Faction, int Delta, int NewTickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.On Tickets Changed_Event_1"));

	struct
	{
		EFaction                       Faction;
		int                            Delta;
		int                            NewTickets;
	} params = {};

	params.Faction = Faction;
	params.Delta = Delta;
	params.NewTickets = NewTickets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.MinutesRemaining_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MinutesRemaining               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::MinutesRemaining_Event_1(int MinutesRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.MinutesRemaining_Event_1"));

	struct
	{
		int                            MinutesRemaining;
	} params = {};

	params.MinutesRemaining = MinutesRemaining;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.KillLeaderUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Kills                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxScore                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::KillLeaderUpdated_Event_1(class ATBLPlayerState* PlayerState, int Kills, int MaxScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.KillLeaderUpdated_Event_1"));

	struct
	{
		class ATBLPlayerState*         PlayerState;
		int                            Kills;
		int                            MaxScore;
	} params = {};

	params.PlayerState = PlayerState;
	params.Kills = Kills;
	params.MaxScore = MaxScore;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.MatchWaitingToStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeMessageComponent_C::MatchWaitingToStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.MatchWaitingToStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.Interface_QueueGameModeMessages
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FGameModeMessageTable> Messages                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::Interface_QueueGameModeMessages(TArray<struct FGameModeMessageTable> Messages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.Interface_QueueGameModeMessages"));

	struct
	{
		TArray<struct FGameModeMessageTable> Messages;
	} params = {};

	params.Messages = Messages;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.FFAPlayerVictory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::FFAPlayerVictory(class ATBLPlayerState* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.FFAPlayerVictory"));

	struct
	{
		class ATBLPlayerState*         Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.OnMatchWonBy_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Victor                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::OnMatchWonBy_Event_1(EFaction Victor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.OnMatchWonBy_Event_1"));

	struct
	{
		EFaction                       Victor;
	} params = {};

	params.Victor = Victor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageComponent.GameModeMessageComponent_C.ExecuteUbergraph_GameModeMessageComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageComponent_C::ExecuteUbergraph_GameModeMessageComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageComponent.GameModeMessageComponent_C.ExecuteUbergraph_GameModeMessageComponent"));

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
