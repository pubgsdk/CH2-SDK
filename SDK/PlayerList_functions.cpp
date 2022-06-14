// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerList.PlayerList_C.UpdateMuteButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::UpdateMuteButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.UpdateMuteButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.ShouldShowNativeProfileForHardwarePlatform
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bShow                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerList_C::ShouldShowNativeProfileForHardwarePlatform(class ATBLPlayerState* PlayerState, bool* bShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.ShouldShowNativeProfileForHardwarePlatform"));

	struct
	{
		class ATBLPlayerState*         PlayerState;
		bool                           bShow;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function PlayerList.PlayerList_C.ShouldShowNativeProfileForPlatform
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlatformType>     Platform                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bShow                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerList_C::ShouldShowNativeProfileForPlatform(TEnumAsByte<EPlatformType> Platform, bool* bShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.ShouldShowNativeProfileForPlatform"));

	struct
	{
		TEnumAsByte<EPlatformType>     Platform;
		bool                           bShow;
	} params = {};

	params.Platform = Platform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function PlayerList.PlayerList_C.ShowPlatformSpecificUser
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::ShowPlatformSpecificUser(class ATBLPlayerState* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.ShowPlatformSpecificUser"));

	struct
	{
		class ATBLPlayerState*         Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPlayerList_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayerList.PlayerList_C.GetPositionViaPlayerList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPanelWidget*            PlayerList                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EPlayerListPositionType> Position                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::GetPositionViaPlayerList(class UPanelWidget* PlayerList, TEnumAsByte<EPlayerListPositionType>* Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.GetPositionViaPlayerList"));

	struct
	{
		class UPanelWidget*            PlayerList;
		TEnumAsByte<EPlayerListPositionType> Position;
	} params = {};

	params.PlayerList = PlayerList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Position != nullptr)
		*Position = params.Position;
}


// Function PlayerList.PlayerList_C.GetPlayerListViaPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EPlayerListPositionType> Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPanelWidget*            PlayerList                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::GetPlayerListViaPosition(TEnumAsByte<EPlayerListPositionType> Position, class UPanelWidget** PlayerList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.GetPlayerListViaPosition"));

	struct
	{
		TEnumAsByte<EPlayerListPositionType> Position;
		class UPanelWidget*            PlayerList;
	} params = {};

	params.Position = Position;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PlayerList != nullptr)
		*PlayerList = params.PlayerList;
}


// Function PlayerList.PlayerList_C.GetRankIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            LoopIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPanelWidget*            PlayerList                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UPlayerList_C::GetRankIndex(int LoopIndex, class UPanelWidget* PlayerList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.GetRankIndex"));

	struct
	{
		int                            LoopIndex;
		class UPanelWidget*            PlayerList;
		int                            ReturnValue;
	} params = {};

	params.LoopIndex = LoopIndex;
	params.PlayerList = PlayerList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayerList.PlayerList_C.IsRightSide
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPanelWidget*            PlayerList                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bReturnValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerList_C::IsRightSide(class UPanelWidget* PlayerList, bool* bReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.IsRightSide"));

	struct
	{
		class UPanelWidget*            PlayerList;
		bool                           bReturnValue;
	} params = {};

	params.PlayerList = PlayerList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function PlayerList.PlayerList_C.CreatePlayerListEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPlayerListEntry_C*> ExistingEntries                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UPanelWidget*            PlayerList                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPlayerListEntry_C*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UPlayerListEntry_C* UPlayerList_C::CreatePlayerListEntry(TArray<class UPlayerListEntry_C*> ExistingEntries, class UPanelWidget* PlayerList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.CreatePlayerListEntry"));

	struct
	{
		TArray<class UPlayerListEntry_C*> ExistingEntries;
		class UPanelWidget*            PlayerList;
		class UPlayerListEntry_C*      ReturnValue;
	} params = {};

	params.ExistingEntries = ExistingEntries;
	params.PlayerList = PlayerList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayerList.PlayerList_C.GetAvailablePlayerEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPlayerListEntry_C*> ExistingEntries                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UPanelWidget*            PlayerList                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPlayerListEntry_C*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UPlayerListEntry_C* UPlayerList_C::GetAvailablePlayerEntry(class UPanelWidget* PlayerList, int Index, TArray<class UPlayerListEntry_C*>* ExistingEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.GetAvailablePlayerEntry"));

	struct
	{
		TArray<class UPlayerListEntry_C*> ExistingEntries;
		class UPanelWidget*            PlayerList;
		int                            Index;
		class UPlayerListEntry_C*      ReturnValue;
	} params = {};

	params.PlayerList = PlayerList;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ExistingEntries != nullptr)
		*ExistingEntries = params.ExistingEntries;

	return params.ReturnValue;
}


// Function PlayerList.PlayerList_C.UpdatePageEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPlayerListEntry_C*> PageEntries                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// TArray<class ATBLPlayerState*> Players                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// class UPanelWidget*            PlayerList                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::UpdatePageEntries(class UPanelWidget* PlayerList, TArray<class UPlayerListEntry_C*>* PageEntries, TArray<class ATBLPlayerState*>* Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.UpdatePageEntries"));

	struct
	{
		TArray<class UPlayerListEntry_C*> PageEntries;
		TArray<class ATBLPlayerState*> Players;
		class UPanelWidget*            PlayerList;
	} params = {};

	params.PlayerList = PlayerList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PageEntries != nullptr)
		*PageEntries = params.PageEntries;
	if (Players != nullptr)
		*Players = params.Players;
}


// Function PlayerList.PlayerList_C.HavePlayerStatesChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class ATBLPlayerState*> OldPlayerStates                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<class ATBLPlayerState*> NewPlayerStates                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           bReturnValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerList_C::HavePlayerStatesChanged(TArray<class ATBLPlayerState*> OldPlayerStates, TArray<class ATBLPlayerState*> NewPlayerStates, bool* bReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.HavePlayerStatesChanged"));

	struct
	{
		TArray<class ATBLPlayerState*> OldPlayerStates;
		TArray<class ATBLPlayerState*> NewPlayerStates;
		bool                           bReturnValue;
	} params = {};

	params.OldPlayerStates = OldPlayerStates;
	params.NewPlayerStates = NewPlayerStates;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function PlayerList.PlayerList_C.CheckIfPlayerStatesHaveChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::CheckIfPlayerStatesHaveChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.CheckIfPlayerStatesHaveChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.GetFactionsSet
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TSet<EFaction>                 Factions                       (CPF_Parm, CPF_OutParm)

void UPlayerList_C::GetFactionsSet(TSet<EFaction>* Factions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.GetFactionsSet"));

	struct
	{
		TSet<EFaction>                 Factions;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Factions != nullptr)
		*Factions = params.Factions;
}


// Function PlayerList.PlayerList_C.GetSortedPlayerStates
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSet<EFaction>                 Factions                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<class ATBLPlayerState*> LeftPagePlayers                (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// TArray<class ATBLPlayerState*> RightPagePlayers               (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UPlayerList_C::GetSortedPlayerStates(TSet<EFaction> Factions, TArray<class ATBLPlayerState*>* LeftPagePlayers, TArray<class ATBLPlayerState*>* RightPagePlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.GetSortedPlayerStates"));

	struct
	{
		TSet<EFaction>                 Factions;
		TArray<class ATBLPlayerState*> LeftPagePlayers;
		TArray<class ATBLPlayerState*> RightPagePlayers;
	} params = {};

	params.Factions = Factions;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LeftPagePlayers != nullptr)
		*LeftPagePlayers = params.LeftPagePlayers;
	if (RightPagePlayers != nullptr)
		*RightPagePlayers = params.RightPagePlayers;
}


// Function PlayerList.PlayerList_C.PopulatePlayerList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            PlayerList                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UPlayerListEntry_C*> PlayerListArray                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UPlayerList_C::PopulatePlayerList(class UPanelWidget* PlayerList, TArray<class UPlayerListEntry_C*> PlayerListArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.PopulatePlayerList"));

	struct
	{
		class UPanelWidget*            PlayerList;
		TArray<class UPlayerListEntry_C*> PlayerListArray;
	} params = {};

	params.PlayerList = PlayerList;
	params.PlayerListArray = PlayerListArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPlayerList_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnKeyDown"));

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


// Function PlayerList.PlayerList_C.OnOpenedScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::OnOpenedScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnOpenedScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerList_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.PreConstruct"));

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


// Function PlayerList.PlayerList_C.OnLeftPagePlayersChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::OnLeftPagePlayersChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnLeftPagePlayersChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.OnRightPagePlayersChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::OnRightPagePlayersChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnRightPagePlayersChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.OnSpectatorPlayersChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::OnSpectatorPlayersChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnSpectatorPlayersChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.Tick"));

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


// Function PlayerList.PlayerList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.PlayerLeveledUp
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FLevelUpResult>  LevelUpResult                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UPlayerList_C::PlayerLeveledUp(TArray<struct FLevelUpResult> LevelUpResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.PlayerLeveledUp"));

	struct
	{
		TArray<struct FLevelUpResult>  LevelUpResult;
	} params = {};

	params.LevelUpResult = LevelUpResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerList_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.OnInputModeChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::OnInputModeChange(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnInputModeChange"));

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


// Function PlayerList.PlayerList_C.FocusOnPlayerList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::FocusOnPlayerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.FocusOnPlayerList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.OnPlayerListEntryClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::OnPlayerListEntryClicked(class ATBLPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnPlayerListEntryClicked"));

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


// Function PlayerList.PlayerList_C.EnableContextMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::EnableContextMenu(class ATBLPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.EnableContextMenu"));

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


// Function PlayerList.PlayerList_C.DisableContextMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::DisableContextMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.DisableContextMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.BndEvt__VoteKickButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::BndEvt__VoteKickButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.BndEvt__VoteKickButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

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


// Function PlayerList.PlayerList_C.BndEvt__ReportButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::BndEvt__ReportButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.BndEvt__ReportButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

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


// Function PlayerList.PlayerList_C.BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.BndEvt__BackButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

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


// Function PlayerList.PlayerList_C.OnClosedScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::OnClosedScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnClosedScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.OnReportClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::OnReportClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.OnReportClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.MenuFocused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFocused                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Instant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerList_C::MenuFocused(bool IsFocused, bool Instant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.MenuFocused"));

	struct
	{
		bool                           IsFocused;
		bool                           Instant;
	} params = {};

	params.IsFocused = IsFocused;
	params.Instant = Instant;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.GoToMainMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::GoToMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.GoToMainMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.BndEvt__UserInfoButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::BndEvt__UserInfoButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.BndEvt__UserInfoButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature"));

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


// Function PlayerList.PlayerList_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::BndEvt__MuteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature"));

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


// Function PlayerList.PlayerList_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerList_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.BndEvt__ResumeButton_86_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
// (FUNC_BlueprintEvent)

void UPlayerList_C::BndEvt__ResumeButton_86_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.BndEvt__ResumeButton_86_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.ClosePopups
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerList_C::ClosePopups()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.ClosePopups"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerList.PlayerList_C.ExecuteUbergraph_PlayerList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerList_C::ExecuteUbergraph_PlayerList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerList.PlayerList_C.ExecuteUbergraph_PlayerList"));

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
