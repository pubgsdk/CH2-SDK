// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VictoryDefeatWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VictoryDefeatWidget.VictoryDefeatWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UVictoryDefeatWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatWidget.VictoryDefeatWidget_C.PreConstruct"));

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


// Function VictoryDefeatWidget.VictoryDefeatWidget_C.ReConstructWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVictoryDefeatWidget_C::ReConstructWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatWidget.VictoryDefeatWidget_C.ReConstructWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VictoryDefeatWidget.VictoryDefeatWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UVictoryDefeatWidget_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatWidget.VictoryDefeatWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VictoryDefeatWidget.VictoryDefeatWidget_C.AddMatchEndScoreEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UVictoryDefeatWidget_C::AddMatchEndScoreEvent(const struct FScoreEventStruct& ScoreEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatWidget.VictoryDefeatWidget_C.AddMatchEndScoreEvent"));

	struct
	{
		struct FScoreEventStruct       ScoreEvent;
	} params = {};

	params.ScoreEvent = ScoreEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VictoryDefeatWidget.VictoryDefeatWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVictoryDefeatWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatWidget.VictoryDefeatWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VictoryDefeatWidget.VictoryDefeatWidget_C.OnKillsChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVictoryDefeatWidget_C::OnKillsChanged_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatWidget.VictoryDefeatWidget_C.OnKillsChanged_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VictoryDefeatWidget.VictoryDefeatWidget_C.ExecuteUbergraph_VictoryDefeatWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVictoryDefeatWidget_C::ExecuteUbergraph_VictoryDefeatWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatWidget.VictoryDefeatWidget_C.ExecuteUbergraph_VictoryDefeatWidget"));

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
