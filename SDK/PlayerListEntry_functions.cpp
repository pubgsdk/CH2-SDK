// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerListEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerListEntry.PlayerListEntry_C.UpdateSelfOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::UpdateSelfOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdateSelfOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPlayerListEntry_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnPreviewKeyDown"));

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


// Function PlayerListEntry.PlayerListEntry_C.OnRightClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               ClickPosition                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::OnRightClicked(const struct FVector2D& ClickPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnRightClicked"));

	struct
	{
		struct FVector2D               ClickPosition;
	} params = {};

	params.ClickPosition = ClickPosition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.UpdatePlatform
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::UpdatePlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdatePlatform"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.IsConsole
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EHardwarePlatform              HardwarePlatform               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsConsole                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerListEntry_C::IsConsole(EHardwarePlatform HardwarePlatform, bool* bIsConsole)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.IsConsole"));

	struct
	{
		EHardwarePlatform              HardwarePlatform;
		bool                           bIsConsole;
	} params = {};

	params.HardwarePlatform = HardwarePlatform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsConsole != nullptr)
		*bIsConsole = params.bIsConsole;
}


// Function PlayerListEntry.PlayerListEntry_C.GetPlayerName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::GetPlayerName(struct FString* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.GetPlayerName"));

	struct
	{
		struct FString                 Name;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Name != nullptr)
		*Name = params.Name;
}


// Function PlayerListEntry.PlayerListEntry_C.UpdateBotStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::UpdateBotStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdateBotStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.UpdatePing
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::UpdatePing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdatePing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.On_ScoreboardDropDownAnchor_GetMenuContent_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UPlayerListEntry_C::On_ScoreboardDropDownAnchor_GetMenuContent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.On_ScoreboardDropDownAnchor_GetMenuContent_1"));

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


// Function PlayerListEntry.PlayerListEntry_C.SetState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerListEntryState> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::SetState(TEnumAsByte<EPlayerListEntryState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.SetState"));

	struct
	{
		TEnumAsByte<EPlayerListEntryState> State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.UpdateIsInParty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InParty                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerListEntry_C::UpdateIsInParty(bool InParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdateIsInParty"));

	struct
	{
		bool                           InParty;
	} params = {};

	params.InParty = InParty;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.UpdatePlayerState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         InState                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            RankIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RightSide                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerListEntry_C::UpdatePlayerState(class ATBLPlayerState* InState, int RankIndex, bool RightSide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdatePlayerState"));

	struct
	{
		class ATBLPlayerState*         InState;
		int                            RankIndex;
		bool                           RightSide;
	} params = {};

	params.InState = InState;
	params.RankIndex = RankIndex;
	params.RightSide = RightSide;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.UpdateWidgetState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsAlive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerListEntry_C::UpdateWidgetState(bool IsAlive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdateWidgetState"));

	struct
	{
		bool                           IsAlive;
	} params = {};

	params.IsAlive = IsAlive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.InvalidateCache
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::InvalidateCache()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.InvalidateCache"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnPlayerStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PreviousPlayerState            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::OnPlayerStateChanged(class ATBLPlayerState* PreviousPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnPlayerStateChanged"));

	struct
	{
		class ATBLPlayerState*         PreviousPlayerState;
	} params = {};

	params.PreviousPlayerState = PreviousPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.UpdateBackgroundImageVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RankIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::UpdateBackgroundImageVisibility(int RankIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdateBackgroundImageVisibility"));

	struct
	{
		int                            RankIndex;
	} params = {};

	params.RankIndex = RankIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.UpdateRenderScales
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsRightSide                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerListEntry_C::UpdateRenderScales(bool bIsRightSide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdateRenderScales"));

	struct
	{
		bool                           bIsRightSide;
	} params = {};

	params.bIsRightSide = bIsRightSide;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.UpdateForFaction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::UpdateForFaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdateForFaction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.UpdatePlayername
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::UpdatePlayername()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdatePlayername"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerListEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerListEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.PreConstruct"));

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


// Function PlayerListEntry.PlayerListEntry_C.UpdateRank
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RankIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::UpdateRank(int RankIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdateRank"));

	struct
	{
		int                            RankIndex;
	} params = {};

	params.RankIndex = RankIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.Tick"));

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


// Function PlayerListEntry.PlayerListEntry_C.UpdateIsFriend
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::UpdateIsFriend()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdateIsFriend"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnLevelUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            GlobalRank                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::OnLevelUp(int GlobalRank)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnLevelUp"));

	struct
	{
		int                            GlobalRank;
	} params = {};

	params.GlobalRank = GlobalRank;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.StatsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTBLOnlineStats         OnlineStats                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPlayerListEntry_C::StatsUpdated(const struct FTBLOnlineStats& OnlineStats)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.StatsUpdated"));

	struct
	{
		struct FTBLOnlineStats         OnlineStats;
	} params = {};

	params.OnlineStats = OnlineStats;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnGamepadChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::OnGamepadChange(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnGamepadChange"));

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


// Function PlayerListEntry.PlayerListEntry_C.OnAddedToFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UPlayerListEntry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnAddedToFocusPath"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnRemovedFromFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UPlayerListEntry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnRemovedFromFocusPath"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerListEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerListEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerListEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnGlobalRankChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewGlobalRank                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::OnGlobalRankChanged_Event_1(int NewGlobalRank)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnGlobalRankChanged_Event_1"));

	struct
	{
		int                            NewGlobalRank;
	} params = {};

	params.NewGlobalRank = NewGlobalRank;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.UpdatePartyStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::UpdatePartyStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.UpdatePartyStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnScoreChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::OnScoreChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnScoreChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnDeathsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::OnDeathsChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnDeathsChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnTakedownsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::OnTakedownsChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnTakedownsChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnKillsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::OnKillsChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnKillsChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.OnPlatformChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerListEntry_C::OnPlatformChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnPlatformChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerListEntry.PlayerListEntry_C.ExecuteUbergraph_PlayerListEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::ExecuteUbergraph_PlayerListEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.ExecuteUbergraph_PlayerListEntry"));

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


// Function PlayerListEntry.PlayerListEntry_C.OnPlayerListEntryClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerListEntry_C::OnPlayerListEntryClicked__DelegateSignature(class ATBLPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerListEntry.PlayerListEntry_C.OnPlayerListEntryClicked__DelegateSignature"));

	struct
	{
		class ATBLPlayerState*         PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
