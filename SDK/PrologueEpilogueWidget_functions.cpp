// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PrologueEpilogueWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.IsInPrologueState
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Prologue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPrologueEpilogueWidget_C::IsInPrologueState(bool* Prologue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.IsInPrologueState"));

	struct
	{
		bool                           Prologue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Prologue != nullptr)
		*Prologue = params.Prologue;
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.SetVictoryDefeatsummarytextblock_Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::SetVictoryDefeatsummarytextblock_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.SetVictoryDefeatsummarytextblock_Text"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.Set Map Name
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           MapNameUpdated                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPrologueEpilogueWidget_C::Set_Map_Name(bool* MapNameUpdated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.Set Map Name"));

	struct
	{
		bool                           MapNameUpdated;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MapNameUpdated != nullptr)
		*MapNameUpdated = params.MapNameUpdated;
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.OnLoaded_B3CC7A7441791CBEF7B64A8BDC00997D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPrologueEpilogueWidget_C::OnLoaded_B3CC7A7441791CBEF7B64A8BDC00997D(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.OnLoaded_B3CC7A7441791CBEF7B64A8BDC00997D"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.OnLoaded_4CA3F9EA4C72572D296E9E87FBCB3A02
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPrologueEpilogueWidget_C::OnLoaded_4CA3F9EA4C72572D296E9E87FBCB3A02(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.OnLoaded_4CA3F9EA4C72572D296E9E87FBCB3A02"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.Play Prologue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::Play_Prologue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.Play Prologue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.Play Epilogue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::Play_Epilogue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.Play Epilogue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.End Prologue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::End_Prologue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.End Prologue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.WidgetAnimationEvt_FadeInEpilogue_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::WidgetAnimationEvt_FadeInEpilogue_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.WidgetAnimationEvt_FadeInEpilogue_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.WidgetAnimationEvt_FadeOutPrologue_K2Node_WidgetAnimationEvent_3
// (FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::WidgetAnimationEvt_FadeOutPrologue_K2Node_WidgetAnimationEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.WidgetAnimationEvt_FadeOutPrologue_K2Node_WidgetAnimationEvent_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.SetMapNameTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::SetMapNameTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.SetMapNameTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.OnTeamChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPrologueEpilogueWidget_C::OnTeamChanged_Event_1(class ATBLTeam* NewTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.OnTeamChanged_Event_1"));

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


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.UpdateTeamBackground
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::UpdateTeamBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.UpdateTeamBackground"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueEpilogueWidget_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.ExecuteUbergraph_PrologueEpilogueWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPrologueEpilogueWidget_C::ExecuteUbergraph_PrologueEpilogueWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueEpilogueWidget.PrologueEpilogueWidget_C.ExecuteUbergraph_PrologueEpilogueWidget"));

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
