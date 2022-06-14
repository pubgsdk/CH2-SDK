// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerHudMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerHudMarker.PlayerHudMarker_C.UpdateCachedPlayerNeedsHealing
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CachedValueChanged             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerHudMarker_C::UpdateCachedPlayerNeedsHealing(bool* CachedValueChanged)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.UpdateCachedPlayerNeedsHealing"));

	struct
	{
		bool                           CachedValueChanged;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CachedValueChanged != nullptr)
		*CachedValueChanged = params.CachedValueChanged;
}


// Function PlayerHudMarker.PlayerHudMarker_C.IsLocalPlayerAlive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPlayerHudMarker_C::IsLocalPlayerAlive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.IsLocalPlayerAlive"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayerHudMarker.PlayerHudMarker_C.GetAssignedPlayerName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UPlayerHudMarker_C::GetAssignedPlayerName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.GetAssignedPlayerName"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayerHudMarker.PlayerHudMarker_C.HandleCombatStateChangedDelay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::HandleCombatStateChangedDelay(const struct FName& PreviousState, const struct FName& NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.HandleCombatStateChangedDelay"));

	struct
	{
		struct FName                   PreviousState;
		struct FName                   NewState;
	} params = {};

	params.PreviousState = PreviousState;
	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.SetAllyIconColour
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHudMarker_C::SetAllyIconColour()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.SetAllyIconColour"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.GetLocalPlayersPartyId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::GetLocalPlayersPartyId(struct FString* PartyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.GetLocalPlayersPartyId"));

	struct
	{
		struct FString                 PartyId;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PartyId != nullptr)
		*PartyId = params.PartyId;
}


// Function PlayerHudMarker.PlayerHudMarker_C.HandleOnPlayerStateReplicated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::HandleOnPlayerStateReplicated(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.HandleOnPlayerStateReplicated"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.HandleTeamChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLTeam*                Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::HandleTeamChanged(class ATBLTeam* Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.HandleTeamChanged"));

	struct
	{
		class ATBLTeam*                Team;
	} params = {};

	params.Team = Team;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.HandleCombatStateChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::HandleCombatStateChanged(const struct FName& PreviousState, const struct FName& NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.HandleCombatStateChanged"));

	struct
	{
		struct FName                   PreviousState;
		struct FName                   NewState;
	} params = {};

	params.PreviousState = PreviousState;
	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHudMarker_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.Update"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.HandleBroadcastActorUnderCrosshairChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActorIsUnderCrosshair         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerHudMarker_C::HandleBroadcastActorUnderCrosshairChanged(bool bActorIsUnderCrosshair)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.HandleBroadcastActorUnderCrosshairChanged"));

	struct
	{
		bool                           bActorIsUnderCrosshair;
	} params = {};

	params.bActorIsUnderCrosshair = bActorIsUnderCrosshair;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.K2_OnAssignedToActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.K2_OnAssignedToActor"));

	struct
	{
		class AActor*                  Actor;
		class UActorComponent*         Component;
	} params = {};

	params.Actor = Actor;
	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.HandleKilled
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UPlayerHudMarker_C::HandleKilled(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.HandleKilled"));

	struct
	{
		struct FDeathDamageTakenEvent  Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerHudMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.PlayHealedCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHudMarker_C::PlayHealedCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.PlayHealedCharacter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.NewState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerMarkerState> CurrentPlayerMarkerState       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::NewState(TEnumAsByte<EPlayerMarkerState> CurrentPlayerMarkerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.NewState"));

	struct
	{
		TEnumAsByte<EPlayerMarkerState> CurrentPlayerMarkerState;
	} params = {};

	params.CurrentPlayerMarkerState = CurrentPlayerMarkerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerHudMarker_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.ActiveHealingAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHudMarker_C::ActiveHealingAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.ActiveHealingAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHudMarker_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.K2_OnReturnedToPool
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerHudMarker_C::K2_OnReturnedToPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.K2_OnReturnedToPool"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnCombatStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::OnCombatStateChange(const struct FName& PreviousState, const struct FName& NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnCombatStateChange"));

	struct
	{
		struct FName                   PreviousState;
		struct FName                   NewState;
	} params = {};

	params.PreviousState = PreviousState;
	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnPartyDisband_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHudMarker_C::OnPartyDisband_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyDisband_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberJoin_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::OnPartyMemberJoin_Event_1(const struct FString& UserId, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberJoin_Event_1"));

	struct
	{
		struct FString                 UserId;
		struct FString                 DisplayName;
	} params = {};

	params.UserId = UserId;
	params.DisplayName = DisplayName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnPartyLeave_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerHudMarker_C::OnPartyLeave_Event_1(bool Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyLeave_Event_1"));

	struct
	{
		bool                           Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnPartyInviteAccept_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::OnPartyInviteAccept_Event_1(const struct FString& PartyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyInviteAccept_Event_1"));

	struct
	{
		struct FString                 PartyId;
	} params = {};

	params.PartyId = PartyId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberLeave_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::OnPartyMemberLeave_Event_1(const struct FString& UserId, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberLeave_Event_1"));

	struct
	{
		struct FString                 UserId;
		struct FString                 DisplayName;
	} params = {};

	params.UserId = UserId;
	params.DisplayName = DisplayName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberRemove_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::OnPartyMemberRemove_Event_1(const struct FString& UserId, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberRemove_Event_1"));

	struct
	{
		struct FString                 UserId;
		struct FString                 DisplayName;
	} params = {};

	params.UserId = UserId;
	params.DisplayName = DisplayName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberKick_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::OnPartyMemberKick_Event_1(const struct FString& UserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnPartyMemberKick_Event_1"));

	struct
	{
		struct FString                 UserId;
	} params = {};

	params.UserId = UserId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnLocalPlayerAbleToHealChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bAbleToHeal                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerHudMarker_C::OnLocalPlayerAbleToHealChanged(bool bAbleToHeal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnLocalPlayerAbleToHealChanged"));

	struct
	{
		bool                           bAbleToHeal;
	} params = {};

	params.bAbleToHeal = bAbleToHeal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.OnPossessedPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::OnPossessedPawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnPossessedPawn"));

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


// Function PlayerHudMarker.PlayerHudMarker_C.OnNeedsHealingChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHudMarker_C::OnNeedsHealingChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.OnNeedsHealingChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerHudMarker.PlayerHudMarker_C.ExecuteUbergraph_PlayerHudMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHudMarker_C::ExecuteUbergraph_PlayerHudMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerHudMarker.PlayerHudMarker_C.ExecuteUbergraph_PlayerHudMarker"));

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
