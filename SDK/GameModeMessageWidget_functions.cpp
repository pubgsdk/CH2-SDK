// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameModeMessageWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameModeMessageWidget.GameModeMessageWidget_C.SetStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveMessageStyleType> ObjectiveMessagestyle          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageWidget_C::SetStyle(TEnumAsByte<EObjectiveMessageStyleType> ObjectiveMessagestyle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageWidget.GameModeMessageWidget_C.SetStyle"));

	struct
	{
		TEnumAsByte<EObjectiveMessageStyleType> ObjectiveMessagestyle;
	} params = {};

	params.ObjectiveMessagestyle = ObjectiveMessagestyle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageWidget.GameModeMessageWidget_C.HideMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeMessageWidget_C::HideMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageWidget.GameModeMessageWidget_C.HideMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageWidget.GameModeMessageWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameModeMessageWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageWidget.GameModeMessageWidget_C.PreConstruct"));

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


// Function GameModeMessageWidget.GameModeMessageWidget_C.SetupMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameModeMessage        Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UGameModeMessageWidget_C::SetupMessage(const struct FGameModeMessage& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageWidget.GameModeMessageWidget_C.SetupMessage"));

	struct
	{
		struct FGameModeMessage        Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageWidget.GameModeMessageWidget_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeMessageWidget_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageWidget.GameModeMessageWidget_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageWidget.GameModeMessageWidget_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeMessageWidget_C::CustomEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageWidget.GameModeMessageWidget_C.CustomEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageWidget.GameModeMessageWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameModeMessageWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageWidget.GameModeMessageWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageWidget.GameModeMessageWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UGameModeMessageWidget_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageWidget.GameModeMessageWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageWidget.GameModeMessageWidget_C.ExecuteUbergraph_GameModeMessageWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageWidget_C::ExecuteUbergraph_GameModeMessageWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageWidget.GameModeMessageWidget_C.ExecuteUbergraph_GameModeMessageWidget"));

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


// Function GameModeMessageWidget.GameModeMessageWidget_C.AnimationOutComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeMessageWidget_C::AnimationOutComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageWidget.GameModeMessageWidget_C.AnimationOutComplete__DelegateSignature"));

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
