// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PodiumResultsScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PodiumResultsScreen.PodiumResultsScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPodiumResultsScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PodiumResultsScreen.PodiumResultsScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PodiumResultsScreen.PodiumResultsScreen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPodiumResultsScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PodiumResultsScreen.PodiumResultsScreen_C.PreConstruct"));

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


// Function PodiumResultsScreen.PodiumResultsScreen_C.ReConstructWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPodiumResultsScreen_C::ReConstructWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PodiumResultsScreen.PodiumResultsScreen_C.ReConstructWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PodiumResultsScreen.PodiumResultsScreen_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UPodiumResultsScreen_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PodiumResultsScreen.PodiumResultsScreen_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PodiumResultsScreen.PodiumResultsScreen_C.ExecuteUbergraph_PodiumResultsScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPodiumResultsScreen_C::ExecuteUbergraph_PodiumResultsScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PodiumResultsScreen.PodiumResultsScreen_C.ExecuteUbergraph_PodiumResultsScreen"));

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
