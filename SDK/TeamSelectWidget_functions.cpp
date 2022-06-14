// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TeamSelectWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeamSelectWidget.TeamSelectWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTeamSelectWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.OnKeyDown"));

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


// Function TeamSelectWidget.TeamSelectWidget_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTeamSelectWidget_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.OnKeyUp"));

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


// Function TeamSelectWidget.TeamSelectWidget_C.DetermineState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETeamSelectButtonState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

TEnumAsByte<ETeamSelectButtonState> UTeamSelectWidget_C::DetermineState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.DetermineState"));

	struct
	{
		TEnumAsByte<ETeamSelectButtonState> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TeamSelectWidget.TeamSelectWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTeamSelectWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.PreConstruct"));

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


// Function TeamSelectWidget.TeamSelectWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSelectWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.UpdateState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectWidget_C::UpdateState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.UpdateState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTeamSelectWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.K2_Unhighlight
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamSelectWidget_C::K2_Unhighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.K2_Unhighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.K2_Highlight
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamSelectWidget_C::K2_Highlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.K2_Highlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.InitTeamSelectWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTeamSelectWidget_C*     OpposingFactionWidget          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       PlayerFaction                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSelectWidget_C::InitTeamSelectWidget(class UTeamSelectWidget_C* OpposingFactionWidget, EFaction PlayerFaction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.InitTeamSelectWidget"));

	struct
	{
		class UTeamSelectWidget_C*     OpposingFactionWidget;
		EFaction                       PlayerFaction;
	} params = {};

	params.OpposingFactionWidget = OpposingFactionWidget;
	params.PlayerFaction = PlayerFaction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.HighlightWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectWidget_C::HighlightWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.HighlightWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.UnhighlightWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectWidget_C::UnhighlightWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.UnhighlightWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.PlayTeamFullEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectWidget_C::PlayTeamFullEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.PlayTeamFullEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.SetTutorialMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTeamSelectWidget_C::SetTutorialMode(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.SetTutorialMode"));

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


// Function TeamSelectWidget.TeamSelectWidget_C.UpdateTeamInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectWidget_C::UpdateTeamInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.UpdateTeamInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.ExecuteUbergraph_TeamSelectWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamSelectWidget_C::ExecuteUbergraph_TeamSelectWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.ExecuteUbergraph_TeamSelectWidget"));

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


// Function TeamSelectWidget.TeamSelectWidget_C.OnWidgetUnhighlight__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectWidget_C::OnWidgetUnhighlight__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.OnWidgetUnhighlight__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TeamSelectWidget.TeamSelectWidget_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamSelectWidget_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TeamSelectWidget.TeamSelectWidget_C.OnClicked__DelegateSignature"));

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
