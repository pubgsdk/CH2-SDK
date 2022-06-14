// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OverviewScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OverviewScreen.OverviewScreen_C.K2_GetFocusWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UOverviewScreen_C::K2_GetFocusWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.K2_GetFocusWidget"));

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


// Function OverviewScreen.OverviewScreen_C.GetMenuTakeOverActionName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Action                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::GetMenuTakeOverActionName(struct FName* Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.GetMenuTakeOverActionName"));

	struct
	{
		struct FName                   Action;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Action != nullptr)
		*Action = params.Action;
}


// Function OverviewScreen.OverviewScreen_C.StopListeningForMenuTakeOver
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::StopListeningForMenuTakeOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.StopListeningForMenuTakeOver"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.StartListeningForMenuTakeOver
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::StartListeningForMenuTakeOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.StartListeningForMenuTakeOver"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOverviewScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.OnKeyDown"));

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


// Function OverviewScreen.OverviewScreen_C.DisplayNavigationMenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<EOverviewScreenState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EOverviewScreenState> PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOverviewScreen_C::DisplayNavigationMenu(TEnumAsByte<EOverviewScreenState> State, TEnumAsByte<EOverviewScreenState> PreviousState, bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.DisplayNavigationMenu"));

	struct
	{
		TEnumAsByte<EOverviewScreenState> State;
		TEnumAsByte<EOverviewScreenState> PreviousState;
		bool                           Return;
	} params = {};

	params.State = State;
	params.PreviousState = PreviousState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return != nullptr)
		*Return = params.Return;
}


// Function OverviewScreen.OverviewScreen_C.Set Keyboard Focus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::Set_Keyboard_Focus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Set Keyboard Focus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.Get Widget For Current State
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::Get_Widget_For_Current_State(class UWidget** Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Get Widget For Current State"));

	struct
	{
		class UWidget*                 Out;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Out != nullptr)
		*Out = params.Out;
}


// Function OverviewScreen.OverviewScreen_C.Set cinematics UI state
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::Set_cinematics_UI_state(const struct FGameplayTag& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Set cinematics UI state"));

	struct
	{
		struct FGameplayTag            State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.Get Loadout Toggle Button Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UOverviewScreen_C::Get_Loadout_Toggle_Button_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Get Loadout Toggle Button Text"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function OverviewScreen.OverviewScreen_C.IsInEditor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOverviewScreen_C::IsInEditor(bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.IsInEditor"));

	struct
	{
		bool                           Return_Value;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function OverviewScreen.OverviewScreen_C.Toggle Cinematic Mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable_Cinematic_Mode          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOverviewScreen_C::Toggle_Cinematic_Mode(bool Enable_Cinematic_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Toggle Cinematic Mode"));

	struct
	{
		bool                           Enable_Cinematic_Mode;
	} params = {};

	params.Enable_Cinematic_Mode = Enable_Cinematic_Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.IsPlayerInSpawnWave
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InSpawnWave                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOverviewScreen_C::IsPlayerInSpawnWave(class AController* Player, bool* InSpawnWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.IsPlayerInSpawnWave"));

	struct
	{
		class AController*             Player;
		bool                           InSpawnWave;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InSpawnWave != nullptr)
		*InSpawnWave = params.InSpawnWave;
}


// Function OverviewScreen.OverviewScreen_C.InitNavigationMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::InitNavigationMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.InitNavigationMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.Hide Overview Screen If In Scoreboard Mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::Hide_Overview_Screen_If_In_Scoreboard_Mode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Hide Overview Screen If In Scoreboard Mode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.Set Overview Screen Mode
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EOverviewScreenState> New_Mode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::Set_Overview_Screen_Mode(TEnumAsByte<EOverviewScreenState> New_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Set Overview Screen Mode"));

	struct
	{
		TEnumAsByte<EOverviewScreenState> New_Mode;
	} params = {};

	params.New_Mode = New_Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.BindVIewportFocus_GameAndUIInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerController*    TBLPlayerController            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::BindVIewportFocus_GameAndUIInput(class ATBLPlayerController* TBLPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.BindVIewportFocus_GameAndUIInput"));

	struct
	{
		class ATBLPlayerController*    TBLPlayerController;
	} params = {};

	params.TBLPlayerController = TBLPlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.OnGameViewportReceivedFocus_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::OnGameViewportReceivedFocus_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.OnGameViewportReceivedFocus_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.BindVIewportFocus_GameInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerController*    TBLPlayerController            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::BindVIewportFocus_GameInput(class ATBLPlayerController* TBLPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.BindVIewportFocus_GameInput"));

	struct
	{
		class ATBLPlayerController*    TBLPlayerController;
	} params = {};

	params.TBLPlayerController = TBLPlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.OnGameViewportReceivedFocus_Event_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::OnGameViewportReceivedFocus_Event_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.OnGameViewportReceivedFocus_Event_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature"));

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


// Function OverviewScreen.OverviewScreen_C.BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature"));

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


// Function OverviewScreen.OverviewScreen_C.BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UOverviewScreen_C::BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.RequestedToJoinSpawnWave_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::RequestedToJoinSpawnWave_Event_1(class ASpawnWave* SpawnWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.RequestedToJoinSpawnWave_Event_1"));

	struct
	{
		class ASpawnWave*              SpawnWave;
	} params = {};

	params.SpawnWave = SpawnWave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.OnReceivedSpawnWaveJoinResponse_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bJoinWaveSuccess               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOverviewScreen_C::OnReceivedSpawnWaveJoinResponse_Event_1(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.OnReceivedSpawnWaveJoinResponse_Event_1"));

	struct
	{
		class ASpawnWave*              SpawnWave;
		bool                           bJoinWaveSuccess;
	} params = {};

	params.SpawnWave = SpawnWave;
	params.bJoinWaveSuccess = bJoinWaveSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.Bind navigation widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::Bind_navigation_widget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Bind navigation widget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.Resume Clicked_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::Resume_Clicked_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Resume Clicked_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.Toggle ingame menu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::Toggle_ingame_menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Toggle ingame menu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.Fired Button Action_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Button_ID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::Fired_Button_Action_Event_1(const struct FName& Button_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Fired Button Action_Event_1"));

	struct
	{
		struct FName                   Button_ID;
	} params = {};

	params.Button_ID = Button_ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::CustomEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.CustomEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.Init Subwidgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::Init_Subwidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Init Subwidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.BP_ShowLoadout
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bReset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOverviewScreen_C::BP_ShowLoadout(bool bReset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.BP_ShowLoadout"));

	struct
	{
		bool                           bReset;
	} params = {};

	params.bReset = bReset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOverviewScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.PlayerListFocused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOverviewScreen_C::PlayerListFocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.PlayerListFocused"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function OverviewScreen.OverviewScreen_C.GamepadInputChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::GamepadInputChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.GamepadInputChanged"));

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


// Function OverviewScreen.OverviewScreen_C.ExecuteUbergraph_OverviewScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::ExecuteUbergraph_OverviewScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.ExecuteUbergraph_OverviewScreen"));

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


// Function OverviewScreen.OverviewScreen_C.OverviewScreenStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EOverviewScreenState> NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EOverviewScreenState> PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOverviewScreen_C::OverviewScreenStateChanged__DelegateSignature(TEnumAsByte<EOverviewScreenState> NewState, TEnumAsByte<EOverviewScreenState> PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OverviewScreen.OverviewScreen_C.OverviewScreenStateChanged__DelegateSignature"));

	struct
	{
		TEnumAsByte<EOverviewScreenState> NewState;
		TEnumAsByte<EOverviewScreenState> PreviousState;
	} params = {};

	params.NewState = NewState;
	params.PreviousState = PreviousState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
