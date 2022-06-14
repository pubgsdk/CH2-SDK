// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TutorialPauseScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutorialPauseScreen.TutorialPauseScreen_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTutorialPauseScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.OnKeyDown"));

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


// Function TutorialPauseScreen.TutorialPauseScreen_C.SetupSteps
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTutorialPauseScreenStep> Steps                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UTutorialPauseScreen_C::SetupSteps(TArray<struct FTutorialPauseScreenStep>* Steps)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.SetupSteps"));

	struct
	{
		TArray<struct FTutorialPauseScreenStep> Steps;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Steps != nullptr)
		*Steps = params.Steps;
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.VideoLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialPauseScreen_C::VideoLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.VideoLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.PlayVideo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialPauseScreen_C::PlayVideo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.PlayVideo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialPauseScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.Tick"));

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


// Function TutorialPauseScreen.TutorialPauseScreen_C.OpenPauseScreen
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   StationTitle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ChallengeIntro                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ChallengeTitle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<struct FTutorialPauseScreenStep> Steps                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FText                   HintDesc                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UMediaSource*            Video                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ContinueTIme                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialPauseScreen_C::OpenPauseScreen(const struct FText& StationTitle, const struct FText& ChallengeIntro, const struct FText& ChallengeTitle, TArray<struct FTutorialPauseScreenStep> Steps, const struct FText& HintDesc, class UMediaSource* Video, float ContinueTIme)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.OpenPauseScreen"));

	struct
	{
		struct FText                   StationTitle;
		struct FText                   ChallengeIntro;
		struct FText                   ChallengeTitle;
		TArray<struct FTutorialPauseScreenStep> Steps;
		struct FText                   HintDesc;
		class UMediaSource*            Video;
		float                          ContinueTIme;
	} params = {};

	params.StationTitle = StationTitle;
	params.ChallengeIntro = ChallengeIntro;
	params.ChallengeTitle = ChallengeTitle;
	params.Steps = Steps;
	params.HintDesc = HintDesc;
	params.Video = Video;
	params.ContinueTIme = ContinueTIme;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTutorialPauseScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.PreConstruct"));

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


// Function TutorialPauseScreen.TutorialPauseScreen_C.SecondContinueClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialPauseScreen_C::SecondContinueClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.SecondContinueClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.GamepadInputChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialPauseScreen_C::GamepadInputChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.GamepadInputChanged"));

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


// Function TutorialPauseScreen.TutorialPauseScreen_C.BndEvt__FirstContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialPauseScreen_C::BndEvt__FirstContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.BndEvt__FirstContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UStatefulButton_C*       Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.WidgetAnimationEvt_FadeOutFirstScreen_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTutorialPauseScreen_C::WidgetAnimationEvt_FadeOutFirstScreen_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.WidgetAnimationEvt_FadeOutFirstScreen_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.FirstContinueClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialPauseScreen_C::FirstContinueClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.FirstContinueClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.InitSecondScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialPauseScreen_C::InitSecondScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.InitSecondScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.BndEvt__Radiobutton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature
// (FUNC_BlueprintEvent)

void UTutorialPauseScreen_C::BndEvt__Radiobutton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.BndEvt__Radiobutton_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.SetupContinueButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeLeft                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialPauseScreen_C::SetupContinueButton(float TimeLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.SetupContinueButton"));

	struct
	{
		float                          TimeLeft;
	} params = {};

	params.TimeLeft = TimeLeft;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialPauseScreen.TutorialPauseScreen_C.ExecuteUbergraph_TutorialPauseScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialPauseScreen_C::ExecuteUbergraph_TutorialPauseScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialPauseScreen.TutorialPauseScreen_C.ExecuteUbergraph_TutorialPauseScreen"));

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
