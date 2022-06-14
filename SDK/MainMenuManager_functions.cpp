// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MainMenuManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainMenuManager.MainMenuManager_C.K2_GetFocusWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UMainMenuManager_C::K2_GetFocusWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.K2_GetFocusWidget"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MainMenuManager.MainMenuManager_C.GetFadeDuration
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::GetFadeDuration(float* Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.GetFadeDuration"));

	struct
	{
		float                          Duration;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function MainMenuManager.MainMenuManager_C.Push Cinematic Widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWidget*/      Widget_class                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::Push_Cinematic_Widget(class UClass* /*UWidget*/ Widget_class, class UWidget** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Push Cinematic Widget"));

	struct
	{
		class UClass* /*UWidget*/      Widget_class;
		class UWidget*                 Widget;
	} params = {};

	params.Widget_class = Widget_class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function MainMenuManager.MainMenuManager_C.OnFreeWeekendCapsuleClick
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::OnFreeWeekendCapsuleClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.OnFreeWeekendCapsuleClick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.UpdatePromoCapsule
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::UpdatePromoCapsule()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.UpdatePromoCapsule"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.ShowGameUpdateTakeoverScreenIfNeeded
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bWasShown                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMainMenuManager_C::ShowGameUpdateTakeoverScreenIfNeeded(bool* bWasShown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.ShowGameUpdateTakeoverScreenIfNeeded"));

	struct
	{
		bool                           bWasShown;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bWasShown != nullptr)
		*bWasShown = params.bWasShown;
}


// Function MainMenuManager.MainMenuManager_C.ShowGameUpdateTakeoverScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameUpdateData         GameUpdateData                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UMainMenuManager_C::ShowGameUpdateTakeoverScreen(const struct FGameUpdateData& GameUpdateData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.ShowGameUpdateTakeoverScreen"));

	struct
	{
		struct FGameUpdateData         GameUpdateData;
	} params = {};

	params.GameUpdateData = GameUpdateData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.GetKeymapWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTBLKeymapWidget*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBLKeymapWidget* UMainMenuManager_C::GetKeymapWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.GetKeymapWidget"));

	struct
	{
		class UTBLKeymapWidget*        ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MainMenuManager.MainMenuManager_C.AddAlphaBlockingScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::AddAlphaBlockingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.AddAlphaBlockingScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMainMenuManager_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.OnPreviewKeyDown"));

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


// Function MainMenuManager.MainMenuManager_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMainMenuManager_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.OnKeyUp"));

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


// Function MainMenuManager.MainMenuManager_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMainMenuManager_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.OnKeyDown"));

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


// Function MainMenuManager.MainMenuManager_C.Camera event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CameraName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FName                   FrontendEvent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::Camera_event(const struct FString& CameraName, const struct FName& FrontendEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Camera event"));

	struct
	{
		struct FString                 CameraName;
		struct FName                   FrontendEvent;
	} params = {};

	params.CameraName = CameraName;
	params.FrontendEvent = FrontendEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Snap Fade In
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::Snap_Fade_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Snap Fade In"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Add Cinematic Mode Change Listener
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UCinematicModeChangeListenerInterface_C> Listener                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMainMenuManager_C::Add_Cinematic_Mode_Change_Listener(const TScriptInterface<class UCinematicModeChangeListenerInterface_C>& Listener)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Add Cinematic Mode Change Listener"));

	struct
	{
		TScriptInterface<class UCinematicModeChangeListenerInterface_C> Listener;
	} params = {};

	params.Listener = Listener;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Release fade out (fade in)
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::Release_fade_out__fade_in_(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Release fade out (fade in)"));

	struct
	{
		class UObject*                 Requester;
	} params = {};

	params.Requester = Requester;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Request fade out
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::Request_fade_out(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Request fade out"));

	struct
	{
		class UObject*                 Requester;
	} params = {};

	params.Requester = Requester;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Release cinematic HUD mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicMenuMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::Release_cinematic_HUD_mode(class UObject* Requester, TEnumAsByte<ECinematicMenuMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Release cinematic HUD mode"));

	struct
	{
		class UObject*                 Requester;
		TEnumAsByte<ECinematicMenuMode> Mode;
	} params = {};

	params.Requester = Requester;
	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Request cinematic HUD mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicMenuMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::Request_cinematic_HUD_mode(class UObject* Requester, TEnumAsByte<ECinematicMenuMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Request cinematic HUD mode"));

	struct
	{
		class UObject*                 Requester;
		TEnumAsByte<ECinematicMenuMode> Mode;
	} params = {};

	params.Requester = Requester;
	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Accept the NDA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::Accept_the_NDA()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Accept the NDA"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Release cinematic bars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::Release_cinematic_bars(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Release cinematic bars"));

	struct
	{
		class UObject*                 Requester;
	} params = {};

	params.Requester = Requester;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.ShowPlayingWidgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::ShowPlayingWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.ShowPlayingWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.ShowMainMenuWidgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::ShowMainMenuWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.ShowMainMenuWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.YesExitTutorial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::YesExitTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.YesExitTutorial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.NoExitTutorial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::NoExitTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.NoExitTutorial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Navigation Back Button Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::Navigation_Back_Button_Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Navigation Back Button Pressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Request cinematic bars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicBarsMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::Request_cinematic_bars(class UObject* Requester, TEnumAsByte<ECinematicBarsMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Request cinematic bars"));

	struct
	{
		class UObject*                 Requester;
		TEnumAsByte<ECinematicBarsMode> Mode;
	} params = {};

	params.Requester = Requester;
	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMainMenuManager_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Remove Cinematic Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::Remove_Cinematic_Widget(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Remove Cinematic Widget"));

	struct
	{
		class UWidget*                 Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.RequestRandomHint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Chance                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHintType>         HintKey                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHintInputType>    HintInputType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::RequestRandomHint(float Chance, TEnumAsByte<EHintType> HintKey, TEnumAsByte<EHintInputType> HintInputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.RequestRandomHint"));

	struct
	{
		float                          Chance;
		TEnumAsByte<EHintType>         HintKey;
		TEnumAsByte<EHintInputType>    HintInputType;
	} params = {};

	params.Chance = Chance;
	params.HintKey = HintKey;
	params.HintInputType = HintInputType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.On Gamepad Input Mode Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::On_Gamepad_Input_Mode_Changed(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.On Gamepad Input Mode Changed"));

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


// Function MainMenuManager.MainMenuManager_C.Update Mouse Cursor Stack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::Update_Mouse_Cursor_Stack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Update Mouse Cursor Stack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.ToggleKeymap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::ToggleKeymap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.ToggleKeymap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.RequestSpecificHint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   HintKey                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::RequestSpecificHint(const struct FName& HintKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.RequestSpecificHint"));

	struct
	{
		struct FName                   HintKey;
	} params = {};

	params.HintKey = HintKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.Show Debug Menu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::Show_Debug_Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.Show Debug Menu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.OnMenuChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Changed                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMainMenuManager_C::OnMenuChanged(bool Changed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.OnMenuChanged"));

	struct
	{
		bool                           Changed;
	} params = {};

	params.Changed = Changed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.OnProfileDataLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuManager_C::OnProfileDataLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.OnProfileDataLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MainMenuManager.MainMenuManager_C.ExecuteUbergraph_MainMenuManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMainMenuManager_C::ExecuteUbergraph_MainMenuManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MainMenuManager.MainMenuManager_C.ExecuteUbergraph_MainMenuManager"));

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
