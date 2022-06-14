// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PartyNotificationWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PartyNotificationWidget.PartyNotificationWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPartyNotificationWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PartyNotificationWidget.PartyNotificationWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PartyNotificationWidget.PartyNotificationWidget_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UPartyNotificationWidget_C::WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PartyNotificationWidget.PartyNotificationWidget_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PartyNotificationWidget.PartyNotificationWidget_C.RemoveWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPartyNotificationWidget_C::RemoveWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PartyNotificationWidget.PartyNotificationWidget_C.RemoveWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PartyNotificationWidget.PartyNotificationWidget_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPartyNotificationWidget_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PartyNotificationWidget.PartyNotificationWidget_C.FadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PartyNotificationWidget.PartyNotificationWidget_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPartyNotificationWidget_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PartyNotificationWidget.PartyNotificationWidget_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PartyNotificationWidget.PartyNotificationWidget_C.Cinematic Mode Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicBarsMode> New_Mode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPartyNotificationWidget_C::Cinematic_Mode_Changed(TEnumAsByte<ECinematicBarsMode> New_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PartyNotificationWidget.PartyNotificationWidget_C.Cinematic Mode Changed"));

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


// Function PartyNotificationWidget.PartyNotificationWidget_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPartyNotificationWidget_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PartyNotificationWidget.PartyNotificationWidget_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PartyNotificationWidget.PartyNotificationWidget_C.ExecuteUbergraph_PartyNotificationWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPartyNotificationWidget_C::ExecuteUbergraph_PartyNotificationWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PartyNotificationWidget.PartyNotificationWidget_C.ExecuteUbergraph_PartyNotificationWidget"));

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
