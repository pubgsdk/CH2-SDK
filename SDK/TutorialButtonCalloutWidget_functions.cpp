// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TutorialButtonCalloutWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.GetActionAtIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTutorialCalloutAction_C* Action                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialButtonCalloutWidget_C::GetActionAtIndex(int Index, bool IsController, class UTutorialCalloutAction_C** Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.GetActionAtIndex"));

	struct
	{
		int                            Index;
		bool                           IsController;
		class UTutorialCalloutAction_C* Action;
	} params = {};

	params.Index = Index;
	params.IsController = IsController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Action != nullptr)
		*Action = params.Action;
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InputModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialButtonCalloutWidget_C::InputModeChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InputModeChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.CreateModifier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETutorialCalloutModifier> Modifier                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialButtonCalloutWidget_C::CreateModifier(TEnumAsByte<ETutorialCalloutModifier> Modifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.CreateModifier"));

	struct
	{
		TEnumAsByte<ETutorialCalloutModifier> Modifier;
	} params = {};

	params.Modifier = Modifier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTutorialButtonCalloutWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.ClearCallouts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialButtonCalloutWidget_C::ClearCallouts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.ClearCallouts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.AddCallout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTutorialCalloutActionStruct CalloutParams                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsController                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTutorialButtonCalloutWidget_C::AddCallout(const struct FTutorialCalloutActionStruct& CalloutParams, bool IsController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.AddCallout"));

	struct
	{
		struct FTutorialCalloutActionStruct CalloutParams;
		bool                           IsController;
	} params = {};

	params.CalloutParams = CalloutParams;
	params.IsController = IsController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InitWithCallouts
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTutorialCalloutActionStruct> KeyboardCallouts               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<struct FTutorialCalloutActionStruct> ControllerCallouts             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UTutorialButtonCalloutWidget_C::InitWithCallouts(TArray<struct FTutorialCalloutActionStruct> KeyboardCallouts, TArray<struct FTutorialCalloutActionStruct> ControllerCallouts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InitWithCallouts"));

	struct
	{
		TArray<struct FTutorialCalloutActionStruct> KeyboardCallouts;
		TArray<struct FTutorialCalloutActionStruct> ControllerCallouts;
	} params = {};

	params.KeyboardCallouts = KeyboardCallouts;
	params.ControllerCallouts = ControllerCallouts;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.GamePadInputModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialButtonCalloutWidget_C::GamePadInputModeChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.GamePadInputModeChanged"));

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


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.HighlightNextAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialButtonCalloutWidget_C::HighlightNextAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.HighlightNextAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.HighlightActionAtIndex
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialButtonCalloutWidget_C::HighlightActionAtIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.HighlightActionAtIndex"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTutorialButtonCalloutWidget_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InitWithSavedCallouts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialButtonCalloutWidget_C::InitWithSavedCallouts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InitWithSavedCallouts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.FadeUsableAtIndex
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Fade                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTutorialButtonCalloutWidget_C::FadeUsableAtIndex(int Index, bool Fade)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.FadeUsableAtIndex"));

	struct
	{
		int                            Index;
		bool                           Fade;
	} params = {};

	params.Index = Index;
	params.Fade = Fade;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.ExecuteUbergraph_TutorialButtonCalloutWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialButtonCalloutWidget_C::ExecuteUbergraph_TutorialButtonCalloutWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.ExecuteUbergraph_TutorialButtonCalloutWidget"));

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
