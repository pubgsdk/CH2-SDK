// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HintNotificationWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HintNotificationWidget.HintNotificationWidget_C.Cinematic Mode Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicBarsMode> New_Mode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHintNotificationWidget_C::Cinematic_Mode_Changed(TEnumAsByte<ECinematicBarsMode> New_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HintNotificationWidget.HintNotificationWidget_C.Cinematic Mode Changed"));

	struct
	{
		TEnumAsByte<ECinematicBarsMode> New_Mode;
	} params = {};

	params.New_Mode = New_Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HintNotificationWidget.HintNotificationWidget_C.Fade In
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHintNotificationWidget_C::Fade_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HintNotificationWidget.HintNotificationWidget_C.Fade In"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HintNotificationWidget.HintNotificationWidget_C.Fade Out
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHintNotificationWidget_C::Fade_Out()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HintNotificationWidget.HintNotificationWidget_C.Fade Out"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HintNotificationWidget.HintNotificationWidget_C.RemoveWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHintNotificationWidget_C::RemoveWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HintNotificationWidget.HintNotificationWidget_C.RemoveWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HintNotificationWidget.HintNotificationWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHintNotificationWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HintNotificationWidget.HintNotificationWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HintNotificationWidget.HintNotificationWidget_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UHintNotificationWidget_C::WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HintNotificationWidget.HintNotificationWidget_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HintNotificationWidget.HintNotificationWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHintNotificationWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HintNotificationWidget.HintNotificationWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HintNotificationWidget.HintNotificationWidget_C.OnGamepadInputChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHintNotificationWidget_C::OnGamepadInputChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HintNotificationWidget.HintNotificationWidget_C.OnGamepadInputChanged"));

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


// Function HintNotificationWidget.HintNotificationWidget_C.ExecuteUbergraph_HintNotificationWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHintNotificationWidget_C::ExecuteUbergraph_HintNotificationWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HintNotificationWidget.HintNotificationWidget_C.ExecuteUbergraph_HintNotificationWidget"));

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
