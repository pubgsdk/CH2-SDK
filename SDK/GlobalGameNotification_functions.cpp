// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GlobalGameNotification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalGameNotification.GlobalGameNotification_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalGameNotification_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotification.GlobalGameNotification_C.FadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotification.GlobalGameNotification_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalGameNotification_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotification.GlobalGameNotification_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotification.GlobalGameNotification_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UGlobalGameNotification_C::WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotification.GlobalGameNotification_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotification.GlobalGameNotification_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalGameNotification_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotification.GlobalGameNotification_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotification.GlobalGameNotification_C.Cinematic Mode Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicBarsMode> New_Mode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotification_C::Cinematic_Mode_Changed(TEnumAsByte<ECinematicBarsMode> New_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotification.GlobalGameNotification_C.Cinematic Mode Changed"));

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


// Function GlobalGameNotification.GlobalGameNotification_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGlobalGameNotification_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotification.GlobalGameNotification_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotification.GlobalGameNotification_C.CustomEvent_3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalGameNotification_C::CustomEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotification.GlobalGameNotification_C.CustomEvent_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotification.GlobalGameNotification_C.ExecuteUbergraph_GlobalGameNotification
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotification_C::ExecuteUbergraph_GlobalGameNotification(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotification.GlobalGameNotification_C.ExecuteUbergraph_GlobalGameNotification"));

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
