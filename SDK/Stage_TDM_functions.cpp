// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Stage_TDM_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stage_TDM.Stage_TDM_C.GetFactionTickets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Tickets                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TDM_C::GetFactionTickets(EFaction Faction, int* Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.GetFactionTickets"));

	struct
	{
		EFaction                       Faction;
		int                            Tickets;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Tickets != nullptr)
		*Tickets = params.Tickets;
}


// Function Stage_TDM.Stage_TDM_C.FactionTicketMessages
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Tickets                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TDM_C::FactionTicketMessages(EFaction Faction, int Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.FactionTicketMessages"));

	struct
	{
		EFaction                       Faction;
		int                            Tickets;
	} params = {};

	params.Faction = Faction;
	params.Tickets = Tickets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.ResizeFFAObjectiveWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFFAObjectiveWidget_Leader_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TDM_C::ResizeFFAObjectiveWidget(class UFFAObjectiveWidget_Leader_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.ResizeFFAObjectiveWidget"));

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


// Function Stage_TDM.Stage_TDM_C.UpdateListOrder
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TDM_C::UpdateListOrder()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.UpdateListOrder"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.Get_MaxScoreText_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UStage_TDM_C::Get_MaxScoreText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.Get_MaxScoreText_Text_1"));

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


// Function Stage_TDM.Stage_TDM_C.SetTimeObjectiveActorComponent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  StageActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TDM_C::SetTimeObjectiveActorComponent(class AActor* StageActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.SetTimeObjectiveActorComponent"));

	struct
	{
		class AActor*                  StageActor;
	} params = {};

	params.StageActor = StageActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.Get_StageTimeRemaining_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UStage_TDM_C::Get_StageTimeRemaining_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.Get_StageTimeRemaining_Text_1"));

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


// Function Stage_TDM.Stage_TDM_C.SetScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Agatha                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Mason                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   TopScoreText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   BottomScoreText                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UStage_TDM_C::SetScore(float Agatha, float Mason, const struct FText& TopScoreText, const struct FText& BottomScoreText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.SetScore"));

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


// Function Stage_TDM.Stage_TDM_C.TDMSuddenDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TDM_C::TDMSuddenDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.TDMSuddenDeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.K2_OnAssignedToActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TDM_C::K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.K2_OnAssignedToActor"));

	struct
	{
		class AActor*                  Actor;
		class UActorComponent*         Component;
	} params = {};

	params.Actor = Actor;
	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.K2_OnReturnedToPool
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStage_TDM_C::K2_OnReturnedToPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.K2_OnReturnedToPool"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.Client Tickets Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TDM_C::Client_Tickets_Changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.Client Tickets Changed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStage_TDM_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.ReRun Constructed Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TDM_C::ReRun_Constructed_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.ReRun Constructed Event"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.RedTargetKilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Targets_Left                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TDM_C::RedTargetKilled(int Targets_Left)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.RedTargetKilled"));

	struct
	{
		int                            Targets_Left;
	} params = {};

	params.Targets_Left = Targets_Left;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.BlueTargetKilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Targets_Left                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TDM_C::BlueTargetKilled(int Targets_Left)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.BlueTargetKilled"));

	struct
	{
		int                            Targets_Left;
	} params = {};

	params.Targets_Left = Targets_Left;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.FactionTicketsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Tickets                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TDM_C::FactionTicketsChanged(EFaction Faction, int Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.FactionTicketsChanged"));

	struct
	{
		EFaction                       Faction;
		int                            Tickets;
	} params = {};

	params.Faction = Faction;
	params.Tickets = Tickets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.OnMatchEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TDM_C::OnMatchEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.OnMatchEnded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.On Tickets Changed_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            New_Tickets                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TDM_C::On_Tickets_Changed_Event_1(EFaction Faction, int Delta, int New_Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.On Tickets Changed_Event_1"));

	struct
	{
		EFaction                       Faction;
		int                            Delta;
		int                            New_Tickets;
	} params = {};

	params.Faction = Faction;
	params.Delta = Delta;
	params.New_Tickets = New_Tickets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.FadeTicketMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TDM_C::FadeTicketMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.FadeTicketMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.SetVolatile
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TDM_C::SetVolatile()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.SetVolatile"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TDM_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UStage_TDM_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.InitializeTeams
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStage_TDM_C::InitializeTeams()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.InitializeTeams"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Stage_TDM.Stage_TDM_C.ExecuteUbergraph_Stage_TDM
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStage_TDM_C::ExecuteUbergraph_Stage_TDM(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Stage_TDM.Stage_TDM_C.ExecuteUbergraph_Stage_TDM"));

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
