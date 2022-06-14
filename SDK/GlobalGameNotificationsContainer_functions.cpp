// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GlobalGameNotificationsContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.CanShowHint
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanShowHint                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGlobalGameNotificationsContainer_C::CanShowHint(bool* CanShowHint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.CanShowHint"));

	struct
	{
		bool                           CanShowHint;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanShowHint != nullptr)
		*CanShowHint = params.CanShowHint;
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.GetRandomHint
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EHintType>         Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHintInputType>    Hint_Input_Type                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   RandomKey                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::GetRandomHint(TEnumAsByte<EHintType> Category, TEnumAsByte<EHintInputType> Hint_Input_Type, struct FName* RandomKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.GetRandomHint"));

	struct
	{
		TEnumAsByte<EHintType>         Category;
		TEnumAsByte<EHintInputType>    Hint_Input_Type;
		struct FName                   RandomKey;
	} params = {};

	params.Category = Category;
	params.Hint_Input_Type = Hint_Input_Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomKey != nullptr)
		*RandomKey = params.RandomKey;
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ProcessLevelUpEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLevelUpResult          LevelUpResult                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UGlobalGameNotificationsContainer_C::ProcessLevelUpEvent(const struct FLevelUpResult& LevelUpResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ProcessLevelUpEvent"));

	struct
	{
		struct FLevelUpResult          LevelUpResult;
	} params = {};

	params.LevelUpResult = LevelUpResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnLoaded_0C2677EC44803511BE7821B9553BFDBE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UObject*/      Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnLoaded_0C2677EC44803511BE7821B9553BFDBE(class UClass* /*UObject*/ Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnLoaded_0C2677EC44803511BE7821B9553BFDBE"));

	struct
	{
		class UClass* /*UObject*/      Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RecievedInvite
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InviteeId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 InviteeName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::RecievedInvite(const struct FString& InviteeId, const struct FString& InviteeName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RecievedInvite"));

	struct
	{
		struct FString                 InviteeId;
		struct FString                 InviteeName;
	} params = {};

	params.InviteeId = InviteeId;
	params.InviteeName = InviteeName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ProcessRankUpMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRankUpMessage          Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::ProcessRankUpMessage(const struct FRankUpMessage& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ProcessRankUpMessage"));

	struct
	{
		struct FRankUpMessage          Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyInviteReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnPartyInviteReceived(const struct FString& UserId, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyInviteReceived"));

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


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnReceivedGlobalGameNotification_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGlobalGameNotificationCategory Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Body                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FName                   Subcategory                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnReceivedGlobalGameNotification_Event_1(EGlobalGameNotificationCategory Category, const struct FText& Title, const struct FText& Body, const struct FName& Subcategory, class UObject* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnReceivedGlobalGameNotification_Event_1"));

	struct
	{
		EGlobalGameNotificationCategory Category;
		struct FText                   Title;
		struct FText                   Body;
		struct FName                   Subcategory;
		class UObject*                 Data;
	} params = {};

	params.Category = Category;
	params.Title = Title;
	params.Body = Body;
	params.Subcategory = Subcategory;
	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.AsyncLoadInventoryItem
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLevelUpResult          LevelUpResult                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGlobalGameNotificationsContainer_C::AsyncLoadInventoryItem(const struct FLevelUpResult& LevelUpResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.AsyncLoadInventoryItem"));

	struct
	{
		struct FLevelUpResult          LevelUpResult;
	} params = {};

	params.LevelUpResult = LevelUpResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.SendLoadedRankUpMessages
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalGameNotificationsContainer_C::SendLoadedRankUpMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.SendLoadedRankUpMessages"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnMessagedFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalGameNotificationsContainer_C::OnMessagedFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnMessagedFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Level Up Event
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FLevelUpResult>  LevelUpEvents                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::On_Level_Up_Event(TArray<struct FLevelUpResult> LevelUpEvents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Level Up Event"));

	struct
	{
		TArray<struct FLevelUpResult>  LevelUpEvents;
	} params = {};

	params.LevelUpEvents = LevelUpEvents;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberJoin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnPartyMemberJoin(const struct FString& UserId, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberJoin"));

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


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnPartyMemberLeft(const struct FString& UserId, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberLeft"));

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


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnPartyMemberRemoved(const struct FString& UserId, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberRemoved"));

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


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyLeaderChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 DisplayName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnPartyLeaderChanged(const struct FString& UserId, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyLeaderChanged"));

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


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyDisbanded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalGameNotificationsContainer_C::OnPartyDisbanded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyDisbanded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RequestRandomHint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          HintChance                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHintType>         HintCategory                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHintInputType>    Hint_Input_Type                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::RequestRandomHint(float HintChance, TEnumAsByte<EHintType> HintCategory, TEnumAsByte<EHintInputType> Hint_Input_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RequestRandomHint"));

	struct
	{
		float                          HintChance;
		TEnumAsByte<EHintType>         HintCategory;
		TEnumAsByte<EHintInputType>    Hint_Input_Type;
	} params = {};

	params.HintChance = HintChance;
	params.HintCategory = HintCategory;
	params.Hint_Input_Type = Hint_Input_Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.HintCooldownFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalGameNotificationsContainer_C::HintCooldownFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.HintCooldownFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnTitleBroadcastReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnTitleBroadcastReceived(const struct FString& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnTitleBroadcastReceived"));

	struct
	{
		struct FString                 Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGlobalGameNotificationsContainer_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPlayerStateReplicated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPlayerStateReplicated_Event_1"));

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


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.VotingStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UVotingInstance*         VotingInstance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::VotingStarted(class UVotingInstance* VotingInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.VotingStarted"));

	struct
	{
		class UVotingInstance*         VotingInstance;
	} params = {};

	params.VotingInstance = VotingInstance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyInviteResponseReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 SenderName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// unsigned char                  Response                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnPartyInviteResponseReceived(const struct FString& UserId, const struct FString& SenderName, unsigned char Response)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyInviteResponseReceived"));

	struct
	{
		struct FString                 UserId;
		struct FString                 SenderName;
		unsigned char                  Response;
	} params = {};

	params.UserId = UserId;
	params.SenderName = SenderName;
	params.Response = Response;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGlobalGameNotificationsContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RequestSpecificHint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   HintKey                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::RequestSpecificHint(const struct FName& HintKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RequestSpecificHint"));

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


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnCreatePartyResult
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 PartyId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnCreatePartyResult(bool Result, const struct FString& PartyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnCreatePartyResult"));

	struct
	{
		bool                           Result;
		struct FString                 PartyId;
	} params = {};

	params.Result = Result;
	params.PartyId = PartyId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ClearInvites
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGlobalGameNotificationsContainer_C::ClearInvites()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ClearInvites"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnBroadcastSpecialSpawnEventCreated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EeSpecialSpawnType> Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::OnBroadcastSpecialSpawnEventCreated_Event_1(TEnumAsByte<EeSpecialSpawnType> Type, class UObject* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnBroadcastSpecialSpawnEventCreated_Event_1"));

	struct
	{
		TEnumAsByte<EeSpecialSpawnType> Type;
		class UObject*                 Event;
	} params = {};

	params.Type = Type;
	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.SpawnWaveReadyToSpawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorseSpecialSpawnStates> NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AHorseSpecialSpawnEvent_C* SpawnEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::SpawnWaveReadyToSpawn_Event_1(TEnumAsByte<EHorseSpecialSpawnStates> NewState, class AHorseSpecialSpawnEvent_C* SpawnEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.SpawnWaveReadyToSpawn_Event_1"));

	struct
	{
		TEnumAsByte<EHorseSpecialSpawnStates> NewState;
		class AHorseSpecialSpawnEvent_C* SpawnEvent;
	} params = {};

	params.NewState = NewState;
	params.SpawnEvent = SpawnEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ExecuteUbergraph_GlobalGameNotificationsContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::ExecuteUbergraph_GlobalGameNotificationsContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ExecuteUbergraph_GlobalGameNotificationsContainer"));

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


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Ended Wave Hover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::On_Ended_Wave_Hover__DelegateSignature(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Ended Wave Hover__DelegateSignature"));

	struct
	{
		class ASpawnWave*              Wave;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Started Wave Hover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGlobalGameNotificationsContainer_C::On_Started_Wave_Hover__DelegateSignature(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Started Wave Hover__DelegateSignature"));

	struct
	{
		class ASpawnWave*              Wave;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
