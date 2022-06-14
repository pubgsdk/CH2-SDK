// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayingMenuManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayingMenuManager.PlayingMenuManager_C.GetFadeDuration
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::GetFadeDuration(float* Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.GetFadeDuration"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.Push Cinematic Widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWidget*/      Widget_class                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Push_Cinematic_Widget(class UClass* /*UWidget*/ Widget_class, class UWidget** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Push Cinematic Widget"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.GetKeymapWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTBLKeymapWidget*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBLKeymapWidget* UPlayingMenuManager_C::GetKeymapWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.GetKeymapWidget"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.DetermineScoreEventType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FScoreEventStruct       ScoreEventStruct               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::DetermineScoreEventType(const struct FScoreEventStruct& ScoreEventStruct, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.DetermineScoreEventType"));

	struct
	{
		struct FScoreEventStruct       ScoreEventStruct;
		bool                           _;
	} params = {};

	params.ScoreEventStruct = ScoreEventStruct;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function PlayingMenuManager.PlayingMenuManager_C.IsVisibleCinematicWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass* /*UWidget*/      WidgetClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsVisible                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::IsVisibleCinematicWidget(class UClass* /*UWidget*/ WidgetClass, bool* bIsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.IsVisibleCinematicWidget"));

	struct
	{
		class UClass* /*UWidget*/      WidgetClass;
		bool                           bIsVisible;
	} params = {};

	params.WidgetClass = WidgetClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsVisible != nullptr)
		*bIsVisible = params.bIsVisible;
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPlayingMenuManager_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnKeyDown"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.EnableFocusMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable_                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::EnableFocusMode(bool Enable_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.EnableFocusMode"));

	struct
	{
		bool                           Enable_;
	} params = {};

	params.Enable_ = Enable_;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnDeathRecap
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Timer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTimerHandle            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FTimerHandle UPlayingMenuManager_C::OnDeathRecap(float Timer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnDeathRecap"));

	struct
	{
		float                          Timer;
		struct FTimerHandle            ReturnValue;
	} params = {};

	params.Timer = Timer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayingMenuManager.PlayingMenuManager_C.UpdateSpectatorHudVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::UpdateSpectatorHudVisibility(class UObject* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.UpdateSpectatorHudVisibility"));

	struct
	{
		class UObject*                 Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Handle Cinematic HUD Requests Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Handle_Cinematic_HUD_Requests_Changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Handle Cinematic HUD Requests Changed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ResetGuiBackgroundCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ResetGuiBackgroundCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ResetGuiBackgroundCount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.AddWidgetToScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHorizontalAlignment> HAlign                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EVerticalAlignment> VAlign                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UOverlay*                Overlay                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::AddWidgetToScreen(class UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HAlign, TEnumAsByte<EVerticalAlignment> VAlign, class UOverlay* Overlay)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.AddWidgetToScreen"));

	struct
	{
		class UWidget*                 Widget;
		TEnumAsByte<EHorizontalAlignment> HAlign;
		TEnumAsByte<EVerticalAlignment> VAlign;
		class UOverlay*                Overlay;
	} params = {};

	params.Widget = Widget;
	params.HAlign = HAlign;
	params.VAlign = VAlign;
	params.Overlay = Overlay;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Get Faction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFaction                       Faction                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Get_Faction(EFaction* Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Get Faction"));

	struct
	{
		EFaction                       Faction;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Faction != nullptr)
		*Faction = params.Faction;
}


// Function PlayingMenuManager.PlayingMenuManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Toggle Loadout Screen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bScoreboardMode                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::Toggle_Loadout_Screen(bool bScoreboardMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Toggle Loadout Screen"));

	struct
	{
		bool                           bScoreboardMode;
	} params = {};

	params.bScoreboardMode = bScoreboardMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Show InGame Menu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Show_InGame_Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Show InGame Menu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Start of game actions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Start_of_game_actions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Start of game actions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ShowVOPersonalMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::ShowVOPersonalMenu(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ShowVOPersonalMenu"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ShowVOTacticalMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::ShowVOTacticalMenu(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ShowVOTacticalMenu"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ShowHudLayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ShowHudLayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ShowHudLayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.HideHudLayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::HideHudLayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.HideHudLayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.HideVOMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::HideVOMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.HideVOMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Hide Overview Screen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Hide_Overview_Screen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Hide Overview Screen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OpenDebugMenu
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UBlueprintDebugMenuComponent* DebugMenuComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OpenDebugMenu(class UBlueprintDebugMenuComponent* DebugMenuComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OpenDebugMenu"));

	struct
	{
		class UBlueprintDebugMenuComponent* DebugMenuComponent;
	} params = {};

	params.DebugMenuComponent = DebugMenuComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Remove Debug Menu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Remove_Debug_Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Remove Debug Menu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Remove Cinematic Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Remove_Cinematic_Widget(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Remove Cinematic Widget"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.Show Overview Screen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Show_Overview_Screen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Show Overview Screen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Request cinematic bars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicBarsMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Request_cinematic_bars(class UObject* Requester, TEnumAsByte<ECinematicBarsMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Request cinematic bars"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.Release cinematic bars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Release_cinematic_bars(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Release cinematic bars"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.Open Loadout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Open_Loadout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Open Loadout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On Mode Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicBarsMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On_Mode_Changed__DelegateSignature(TEnumAsByte<ECinematicBarsMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On Mode Changed__DelegateSignature"));

	struct
	{
		TEnumAsByte<ECinematicBarsMode> Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Request cinematic HUD mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicMenuMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Request_cinematic_HUD_mode(class UObject* Requester, TEnumAsByte<ECinematicMenuMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Request cinematic HUD mode"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.Release cinematic HUD mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicMenuMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Release_cinematic_HUD_mode(class UObject* Requester, TEnumAsByte<ECinematicMenuMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Release cinematic HUD mode"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.Update cinematic requests soon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Update_cinematic_requests_soon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Update cinematic requests soon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Request fade out
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Request_fade_out(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Request fade out"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.Release fade out (fade in)
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Release_fade_out__fade_in_(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Release fade out (fade in)"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics Mode Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicMenuMode> New_Mode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicMenuMode> Previous_mode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics_Mode_Changed__DelegateSignature(TEnumAsByte<ECinematicMenuMode> New_Mode, TEnumAsByte<ECinematicMenuMode> Previous_mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics Mode Changed__DelegateSignature"));

	struct
	{
		TEnumAsByte<ECinematicMenuMode> New_Mode;
		TEnumAsByte<ECinematicMenuMode> Previous_mode;
	} params = {};

	params.New_Mode = New_Mode;
	params.Previous_mode = Previous_mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ShowVOEmoteMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::ShowVOEmoteMenu(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ShowVOEmoteMenu"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnClientPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OnClientPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnClientPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnPossessedPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OnPossessedPawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnPossessedPawn"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnTeamChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OnTeamChanged_Event_1(class ATBLTeam* NewTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnTeamChanged_Event_1"));

	struct
	{
		class ATBLTeam*                NewTeam;
	} params = {};

	params.NewTeam = NewTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                NewTeam                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OnTeamChanged(class ATBLTeam* NewTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnTeamChanged"));

	struct
	{
		class ATBLTeam*                NewTeam;
	} params = {};

	params.NewTeam = NewTeam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Add Cinematic Mode Change Listener
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UCinematicModeChangeListenerInterface_C> Listener                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::Add_Cinematic_Mode_Change_Listener(const TScriptInterface<class UCinematicModeChangeListenerInterface_C>& Listener)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Add Cinematic Mode Change Listener"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.OnDeathRecapReplicated_Local
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::OnDeathRecapReplicated_Local()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnDeathRecapReplicated_Local"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.HidePostDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::HidePostDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.HidePostDeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Post Death Possessed New Pawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Post_Death_Possessed_New_Pawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Post Death Possessed New Pawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Snap Fade In
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Snap_Fade_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Snap Fade In"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Toggle Team Select Screen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bScoreboardMode                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::Toggle_Team_Select_Screen(bool bScoreboardMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Toggle Team Select Screen"));

	struct
	{
		bool                           bScoreboardMode;
	} params = {};

	params.bScoreboardMode = bScoreboardMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Event Open Team Select Screen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Event_Open_Team_Select_Screen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Event Open Team Select Screen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnMatchEnded_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::OnMatchEnded_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnMatchEnded_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.FadeOutCinematicLayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::FadeOutCinematicLayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.FadeOutCinematicLayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.FadeInCinematicLayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::FadeInCinematicLayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.FadeInCinematicLayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EOverviewScreenState> NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EOverviewScreenState> PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature(TEnumAsByte<EOverviewScreenState> NewState, TEnumAsByte<EOverviewScreenState> PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.OnZoomDisabled_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::OnZoomDisabled_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnZoomDisabled_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnZoomEnabled_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::OnZoomEnabled_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnZoomEnabled_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Toggle Player List Screen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowHide                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::Toggle_Player_List_Screen(bool bShowHide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Toggle Player List Screen"));

	struct
	{
		bool                           bShowHide;
	} params = {};

	params.bShowHide = bShowHide;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.FadeOutFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::FadeOutFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.FadeOutFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.FadeOutStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::FadeOutStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.FadeOutStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.SetHudVisibility
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::SetHudVisibility(bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.SetHudVisibility"));

	struct
	{
		bool                           bVisible;
	} params = {};

	params.bVisible = bVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Force HUD Visible
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Force_HUD_Visible()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Force HUD Visible"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Show Radial Inventory Screen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Show_Radial_Inventory_Screen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Show Radial Inventory Screen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Hide Radial Inventory Screen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Hide_Radial_Inventory_Screen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Hide Radial Inventory Screen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ShowLoadoutOnFirstDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ShowLoadoutOnFirstDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ShowLoadoutOnFirstDeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnPushCinematicWidgetEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OnPushCinematicWidgetEvent(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnPushCinematicWidgetEvent"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.BP_FadeOut
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          PlaybackSpeed                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::BP_FadeOut(float PlaybackSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.BP_FadeOut"));

	struct
	{
		float                          PlaybackSpeed;
	} params = {};

	params.PlaybackSpeed = PlaybackSpeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.BP_FadeIn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          PlaybackSpeed                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::BP_FadeIn(float PlaybackSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.BP_FadeIn"));

	struct
	{
		float                          PlaybackSpeed;
	} params = {};

	params.PlaybackSpeed = PlaybackSpeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnSavedClassUnavailable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ RequestedSubclass              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OnSavedClassUnavailable(class UClass* /*ATBLCharacter*/ RequestedSubclass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnSavedClassUnavailable"));

	struct
	{
		class UClass* /*ATBLCharacter*/ RequestedSubclass;
	} params = {};

	params.RequestedSubclass = RequestedSubclass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.InitializeScoreEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::InitializeScoreEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.InitializeScoreEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnScoreEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPlayingMenuManager_C::OnScoreEvent_Event_1(const struct FScoreEventStruct& ScoreEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnScoreEvent_Event_1"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.Team Select Input Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Team_Select_Input_Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Team Select Input Pressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.SpawnWaveJoined
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bJoinWaveSuccess               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::SpawnWaveJoined(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.SpawnWaveJoined"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.ShowTutorialAreaWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ShowTutorialAreaWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ShowTutorialAreaWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.HideTutorialAreaWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::HideTutorialAreaWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.HideTutorialAreaWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialArea
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   NarratorText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPlayingMenuManager_C::UpdateTutorialArea(const struct FText& Title, const struct FText& NarratorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialArea"));

	struct
	{
		struct FText                   Title;
		struct FText                   NarratorText;
	} params = {};

	params.Title = Title;
	params.NarratorText = NarratorText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.AddTutorialAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ActionText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ControllerActionText           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ActionKeyboardCallout          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ActionControllerCallout        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ActionDesc                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            ActionMaxCount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SkipAfterTime                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::AddTutorialAction(const struct FText& ActionText, const struct FText& ControllerActionText, const struct FText& ActionKeyboardCallout, const struct FText& ActionControllerCallout, const struct FText& ActionDesc, int ActionMaxCount, float SkipAfterTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.AddTutorialAction"));

	struct
	{
		struct FText                   ActionText;
		struct FText                   ControllerActionText;
		struct FText                   ActionKeyboardCallout;
		struct FText                   ActionControllerCallout;
		struct FText                   ActionDesc;
		int                            ActionMaxCount;
		float                          SkipAfterTime;
	} params = {};

	params.ActionText = ActionText;
	params.ControllerActionText = ControllerActionText;
	params.ActionKeyboardCallout = ActionKeyboardCallout;
	params.ActionControllerCallout = ActionControllerCallout;
	params.ActionDesc = ActionDesc;
	params.ActionMaxCount = ActionMaxCount;
	params.SkipAfterTime = SkipAfterTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ClearTutorialActionList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Fade                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::ClearTutorialActionList(bool Fade)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ClearTutorialActionList"));

	struct
	{
		bool                           Fade;
	} params = {};

	params.Fade = Fade;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialActionCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ActionText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            NewCount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::UpdateTutorialActionCount(const struct FText& ActionText, int NewCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialActionCount"));

	struct
	{
		struct FText                   ActionText;
		int                            NewCount;
	} params = {};

	params.ActionText = ActionText;
	params.NewCount = NewCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.UpdateNarratorText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NarratorText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPlayingMenuManager_C::UpdateNarratorText(const struct FText& NarratorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.UpdateNarratorText"));

	struct
	{
		struct FText                   NarratorText;
	} params = {};

	params.NarratorText = NarratorText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::UpdateTutorialProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialProgress"));

	struct
	{
		float                          Progress;
	} params = {};

	params.Progress = Progress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ForwardSpawnFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ForwardSpawnFade()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ForwardSpawnFade"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ForwardSpawnFadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ForwardSpawnFadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ForwardSpawnFadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.RequestRandomHint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Chance                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHintType>         HintKey                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHintInputType>    HintInputType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::RequestRandomHint(float Chance, TEnumAsByte<EHintType> HintKey, TEnumAsByte<EHintInputType> HintInputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.RequestRandomHint"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.EnableTutorialTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimerLength                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::EnableTutorialTimer(float TimerLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.EnableTutorialTimer"));

	struct
	{
		float                          TimerLength;
	} params = {};

	params.TimerLength = TimerLength;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.DisableTutorialTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::DisableTutorialTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.DisableTutorialTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ResetTutorialTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ResetTutorialTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ResetTutorialTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.TimerSuccess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldDisable                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::TimerSuccess(bool ShouldDisable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.TimerSuccess"));

	struct
	{
		bool                           ShouldDisable;
	} params = {};

	params.ShouldDisable = ShouldDisable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnPlayerSelectedSpectatorMode_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPlayerSpectator              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::OnPlayerSelectedSpectatorMode_Event_1(bool IsPlayerSpectator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnPlayerSelectedSpectatorMode_Event_1"));

	struct
	{
		bool                           IsPlayerSpectator;
	} params = {};

	params.IsPlayerSpectator = IsPlayerSpectator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On Entered Input Mode__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayingMenuManager_C::BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On_Entered_Input_Mode__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On Entered Input Mode__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On Left Input Mode__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayingMenuManager_C::BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On_Left_Input_Mode__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On Left Input Mode__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.InitWithCallouts
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTutorialCalloutActionStruct> KeyboardCallouts               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<struct FTutorialCalloutActionStruct> ControllerCallouts             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::InitWithCallouts(TArray<struct FTutorialCalloutActionStruct> KeyboardCallouts, TArray<struct FTutorialCalloutActionStruct> ControllerCallouts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.InitWithCallouts"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.ClearCallouts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ClearCallouts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ClearCallouts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.NextCallout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::NextCallout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.NextCallout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.RestartCallouts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::RestartCallouts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.RestartCallouts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ResetTutorialChallenges
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ResetTutorialChallenges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ResetTutorialChallenges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.TutorialStationComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::TutorialStationComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.TutorialStationComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.TutorialActionFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPlayingMenuManager_C::TutorialActionFailed(const struct FText& Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.TutorialActionFailed"));

	struct
	{
		struct FText                   Action;
	} params = {};

	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ShowTutorialSkipMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ShowTutorialSkipMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ShowTutorialSkipMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnPromptPlayerMessageReply_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MessageId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Response                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ATBLPlayerController*    Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OnPromptPlayerMessageReply_Event_1(int MessageId, bool Response, class ATBLPlayerController* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnPromptPlayerMessageReply_Event_1"));

	struct
	{
		int                            MessageId;
		bool                           Response;
		class ATBLPlayerController*    Player;
	} params = {};

	params.MessageId = MessageId;
	params.Response = Response;
	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.AutoHideVOTimerStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::AutoHideVOTimerStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.AutoHideVOTimerStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OpenTutorialPauseScreen
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   StationTitle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ChallengeIntro                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ChallengeTitle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<struct FTutorialPauseScreenStep> Steps                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FText                   HintDesc                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UMediaSource*            Video                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ContinueTIme                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OpenTutorialPauseScreen(const struct FText& StationTitle, const struct FText& ChallengeIntro, const struct FText& ChallengeTitle, TArray<struct FTutorialPauseScreenStep> Steps, const struct FText& HintDesc, class UMediaSource* Video, float ContinueTIme)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OpenTutorialPauseScreen"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.HideChat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldHide                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::HideChat(bool ShouldHide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.HideChat"));

	struct
	{
		bool                           ShouldHide;
	} params = {};

	params.ShouldHide = ShouldHide;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.ToggleKeymap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::ToggleKeymap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ToggleKeymap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.CancelSkipChallenge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::CancelSkipChallenge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.CancelSkipChallenge"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.FadeCalloutUsableAtIndex
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Fade                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::FadeCalloutUsableAtIndex(int Index, bool Fade)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.FadeCalloutUsableAtIndex"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.CompleteTutorial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::CompleteTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.CompleteTutorial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Show Loadout First Time Only
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::Show_Loadout_First_Time_Only()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Show Loadout First Time Only"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.RequestSpecificHint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   HintKey                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::RequestSpecificHint(const struct FName& HintKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.RequestSpecificHint"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.ExecuteUbergraph_PlayingMenuManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::ExecuteUbergraph_PlayingMenuManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.ExecuteUbergraph_PlayingMenuManager"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.OnTutorialSkipStation__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::OnTutorialSkipStation__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnTutorialSkipStation__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.OnPushCinematicWidget__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::OnPushCinematicWidget__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.OnPushCinematicWidget__DelegateSignature"));

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


// Function PlayingMenuManager.PlayingMenuManager_C.FadeOutComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::FadeOutComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.FadeOutComplete__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.FadeOutStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayingMenuManager_C::FadeOutStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.FadeOutStarted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Cinematic HUD mode changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicMenuMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Cinematic_HUD_mode_changed__DelegateSignature(TEnumAsByte<ECinematicMenuMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Cinematic HUD mode changed__DelegateSignature"));

	struct
	{
		TEnumAsByte<ECinematicMenuMode> Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Cinematic mode enabled changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled_                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayingMenuManager_C::Cinematic_mode_enabled_changed__DelegateSignature(bool Enabled_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Cinematic mode enabled changed__DelegateSignature"));

	struct
	{
		bool                           Enabled_;
	} params = {};

	params.Enabled_ = Enabled_;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayingMenuManager.PlayingMenuManager_C.Cinematic bars mode changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicBarsMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayingMenuManager_C::Cinematic_bars_mode_changed__DelegateSignature(TEnumAsByte<ECinematicBarsMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayingMenuManager.PlayingMenuManager_C.Cinematic bars mode changed__DelegateSignature"));

	struct
	{
		TEnumAsByte<ECinematicBarsMode> Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
