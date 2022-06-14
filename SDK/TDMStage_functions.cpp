// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TDMStage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TDMStage.TDMStage_C.Create debug menu widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Debug_menu_widget              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATDMStage_C::Create_debug_menu_widget(class UUserWidget** Debug_menu_widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.Create debug menu widget"));

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


// Function TDMStage.TDMStage_C.GetTimeRemaining
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ATDMStage_C::GetTimeRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.GetTimeRemaining"));

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


// Function TDMStage.TDMStage_C.GetTimeRemainingPercent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ATDMStage_C::GetTimeRemainingPercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.GetTimeRemainingPercent"));

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


// Function TDMStage.TDMStage_C.GetStageIdNum
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int ATDMStage_C::GetStageIdNum()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.GetStageIdNum"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TDMStage.TDMStage_C.GetStageCommander
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AActor* ATDMStage_C::GetStageCommander(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.GetStageCommander"));

	struct
	{
		EFaction                       Faction;
		class AActor*                  ReturnValue;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TDMStage.TDMStage_C.CompleteStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> ATDMStage_C::CompleteStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.CompleteStage"));

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


// Function TDMStage.TDMStage_C.IsStageReadyToComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATDMStage_C::IsStageReadyToComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.IsStageReadyToComplete"));

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


// Function TDMStage.TDMStage_C.GetTicketsRemainingPercentage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ATDMStage_C::GetTicketsRemainingPercentage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.GetTicketsRemainingPercentage"));

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


// Function TDMStage.TDMStage_C.Get Faction Tickets Remaining Percent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ATDMStage_C::Get_Faction_Tickets_Remaining_Percent(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.Get Faction Tickets Remaining Percent"));

	struct
	{
		EFaction                       Faction;
		float                          ReturnValue;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TDMStage.TDMStage_C.UpdateTDMStageSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::UpdateTDMStageSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.UpdateTDMStageSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.Get Time Left
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimespan               Time_Left                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATDMStage_C::Get_Time_Left(struct FTimespan* Time_Left)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.Get Time Left"));

	struct
	{
		struct FTimespan               Time_Left;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Time_Left != nullptr)
		*Time_Left = params.Time_Left;
}


// Function TDMStage.TDMStage_C. Remove Tickets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATDMStage_C::_Remove_Tickets(EFaction Faction, int Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C. Remove Tickets"));

	struct
	{
		EFaction                       Faction;
		int                            Delta;
	} params = {};

	params.Faction = Faction;
	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.Initialize TDM Stage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> Attacker_Died                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TScriptInterface<class UStageInterface> Defender_Died                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TScriptInterface<class UStageInterface> Draw                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTDM_Stage_Properties   Settings                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATDMStage_C::Initialize_TDM_Stage(const TScriptInterface<class UStageInterface>& Attacker_Died, const TScriptInterface<class UStageInterface>& Defender_Died, const TScriptInterface<class UStageInterface>& Draw, const struct FTDM_Stage_Properties& Settings, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.Initialize TDM Stage"));

	struct
	{
		TScriptInterface<class UStageInterface> Attacker_Died;
		TScriptInterface<class UStageInterface> Defender_Died;
		TScriptInterface<class UStageInterface> Draw;
		struct FTDM_Stage_Properties   Settings;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.Attacker_Died = Attacker_Died;
	params.Defender_Died = Defender_Died;
	params.Draw = Draw;
	params.Settings = Settings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function TDMStage.TDMStage_C.StartStage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::StartStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.StartStage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATDMStage_C::BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On Duration Exceeded__DelegateSignature
// (FUNC_BlueprintEvent)

void ATDMStage_C::BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On_Duration_Exceeded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On Duration Exceeded__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On Tickets Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            New_Tickets                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATDMStage_C::BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On_Tickets_Changed__DelegateSignature(EFaction Faction, int Delta, int New_Tickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On Tickets Changed__DelegateSignature"));

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


// Function TDMStage.TDMStage_C.Force Draw
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::Force_Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.Force Draw"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.Last Rout Fired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::Last_Rout_Fired()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.Last Rout Fired"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.ForceMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::ForceMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.ForceMusic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.ExecuteUbergraph_TDMStage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATDMStage_C::ExecuteUbergraph_TDMStage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.ExecuteUbergraph_TDMStage"));

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


// Function TDMStage.TDMStage_C.On Tickets Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewTickets                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATDMStage_C::On_Tickets_Changed__DelegateSignature(EFaction Faction, int Delta, int NewTickets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.On Tickets Changed__DelegateSignature"));

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


// Function TDMStage.TDMStage_C.On Tickets Exhausted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATDMStage_C::On_Tickets_Exhausted__DelegateSignature(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.On Tickets Exhausted__DelegateSignature"));

	struct
	{
		EFaction                       Faction;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.On Draw__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::On_Draw__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.On Draw__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.On Red Died__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::On_Red_Died__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.On Red Died__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.On Blue Died__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::On_Blue_Died__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.On Blue Died__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.On Ended__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::On_Ended__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.On Ended__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TDMStage.TDMStage_C.On Started__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATDMStage_C::On_Started__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TDMStage.TDMStage_C.On Started__DelegateSignature"));

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
