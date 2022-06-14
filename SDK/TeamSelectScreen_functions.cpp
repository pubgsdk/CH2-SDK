// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TeamSelectScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeamSelectScreen.TeamSelectScreen_C.K2_GetFocusWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UTeamSelectScreen_C::K2_GetFocusWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.K2_GetFocusWidget"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TeamSelectScreen.TeamSelectScreen_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTeamSelectScreen_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.OnPreviewKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TeamSelectScreen.TeamSelectScreen_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTeamSelectScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TeamSelectScreen.TeamSelectScreen_C.TeamToSwitchTo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       TeamToSwitchTo                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSelectScreen_C::TeamToSwitchTo(EFaction TeamToSwitchTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.TeamToSwitchTo"));

	struct
	{
		EFaction                       TeamToSwitchTo;
	} params = {};

	params.TeamToSwitchTo = TeamToSwitchTo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.SendChatNotification
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       FactionToSwitchTo              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSelectScreen_C::SendChatNotification(EFaction FactionToSwitchTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.SendChatNotification"));

	struct
	{
		EFaction                       FactionToSwitchTo;
	} params = {};

	params.FactionToSwitchTo = FactionToSwitchTo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.Init Team Select Screen
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::Init_Team_Select_Screen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.Init Team Select Screen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.IsInSpectatorMode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTeamSelectScreen_C::IsInSpectatorMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.IsInSpectatorMode"));

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


// Function TeamSelectScreen.TeamSelectScreen_C.Close This Screen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::Close_This_Screen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.Close This Screen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.Open Loadout Menu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::Open_Loadout_Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.Open Loadout Menu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTeamSelectScreen_C::BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTeamSelectScreen_C::BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTeamSelectScreen_C::BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTeamSelectScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.PreConstruct"));

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


// Function TeamSelectScreen.TeamSelectScreen_C.StartTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::StartTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.StartTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.TimerAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::TimerAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.TimerAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.OpenLoadout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::OpenLoadout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.OpenLoadout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.Spectate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::Spectate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.Spectate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.OnAcknowledgedTeamRequest_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSelectScreen_C::OnAcknowledgedTeamRequest_Event_1(bool bSuccess, EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.OnAcknowledgedTeamRequest_Event_1"));

	struct
	{
		bool                           bSuccess;
		EFaction                       Faction;
	} params = {};

	params.bSuccess = bSuccess;
	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.OnGamepadChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSelectScreen_C::OnGamepadChange(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.OnGamepadChange"));

	struct
	{
		EGamepadInputMode              GamepadInputMode;
	} params = {};

	params.GamepadInputMode = GamepadInputMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.InterceptTutorialTeamSelect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSelectScreen_C::InterceptTutorialTeamSelect(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.InterceptTutorialTeamSelect"));

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


// Function TeamSelectScreen.TeamSelectScreen_C.SetTutorialMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTeamSelectScreen_C::SetTutorialMode(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.SetTutorialMode"));

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


// Function TeamSelectScreen.TeamSelectScreen_C.OnLoreVideoComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::OnLoreVideoComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.OnLoreVideoComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.GoToInGameMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::GoToInGameMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.GoToInGameMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTeamSelectScreen_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTeamSelectScreen_C::BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
// (FUNC_BlueprintEvent)

void UTeamSelectScreen_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTeamSelectScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.ExecuteUbergraph_TeamSelectScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSelectScreen_C::ExecuteUbergraph_TeamSelectScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.ExecuteUbergraph_TeamSelectScreen"));

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


// Function TeamSelectScreen.TeamSelectScreen_C.LoreVideoComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::LoreVideoComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.LoreVideoComplete__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.TutorialTeamSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSelectScreen_C::TutorialTeamSelected__DelegateSignature(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.TutorialTeamSelected__DelegateSignature"));

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


// Function TeamSelectScreen.TeamSelectScreen_C.TeamChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::TeamChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.TeamChanged__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectScreen.TeamSelectScreen_C.SendToServerChatRequest__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectScreen_C::SendToServerChatRequest__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectScreen.TeamSelectScreen_C.SendToServerChatRequest__DelegateSignature"));

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
