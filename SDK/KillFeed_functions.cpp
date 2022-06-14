// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KillFeed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KillFeed.KillFeed_C.IsFallDeath
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsFallDeath                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillFeed_C::IsFallDeath(const struct FDeathEvent& DeathEvent, bool* IsFallDeath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.IsFallDeath"));

	struct
	{
		struct FDeathEvent             DeathEvent;
		bool                           IsFallDeath;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsFallDeath != nullptr)
		*IsFallDeath = params.IsFallDeath;
}


// Function KillFeed.KillFeed_C.ShouldDisplayObjectiveMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Display                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillFeed_C::ShouldDisplayObjectiveMessage(bool* Display)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.ShouldDisplayObjectiveMessage"));

	struct
	{
		bool                           Display;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Display != nullptr)
		*Display = params.Display;
}


// Function KillFeed.KillFeed_C.ShouldDisplayDeathEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Display                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillFeed_C::ShouldDisplayDeathEvent(const struct FDeathEvent& DeathEvent, bool* Display)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.ShouldDisplayDeathEvent"));

	struct
	{
		struct FDeathEvent             DeathEvent;
		bool                           Display;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Display != nullptr)
		*Display = params.Display;
}


// Function KillFeed.KillFeed_C.IsSiegeWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsWeapon                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillFeed_C::IsSiegeWeapon(class AInventoryItem* Weapon, bool* IsWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.IsSiegeWeapon"));

	struct
	{
		class AInventoryItem*          Weapon;
		bool                           IsWeapon;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsWeapon != nullptr)
		*IsWeapon = params.IsWeapon;
}


// Function KillFeed.KillFeed_C.GetKillFeedModifiers
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<TEnumAsByte<EKillfeedModifiers>> Modifiers                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UKillFeed_C::GetKillFeedModifiers(const struct FDeathEvent& DeathEvent, TArray<TEnumAsByte<EKillfeedModifiers>>* Modifiers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.GetKillFeedModifiers"));

	struct
	{
		struct FDeathEvent             DeathEvent;
		TArray<TEnumAsByte<EKillfeedModifiers>> Modifiers;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Modifiers != nullptr)
		*Modifiers = params.Modifiers;
}


// Function KillFeed.KillFeed_C.IsMyDeath
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsMyDeath                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillFeed_C::IsMyDeath(const struct FDeathEvent& DeathEvent, bool* IsMyDeath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.IsMyDeath"));

	struct
	{
		struct FDeathEvent             DeathEvent;
		bool                           IsMyDeath;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsMyDeath != nullptr)
		*IsMyDeath = params.IsMyDeath;
}


// Function KillFeed.KillFeed_C.IsMyKill
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsMyKill                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillFeed_C::IsMyKill(const struct FDeathEvent& DeathEvent, bool* IsMyKill)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.IsMyKill"));

	struct
	{
		struct FDeathEvent             DeathEvent;
		bool                           IsMyKill;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsMyKill != nullptr)
		*IsMyKill = params.IsMyKill;
}


// Function KillFeed.KillFeed_C.IsTeamKill
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           TeamKill                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillFeed_C::IsTeamKill(const struct FDeathEvent& DeathEvent, bool* TeamKill)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.IsTeamKill"));

	struct
	{
		struct FDeathEvent             DeathEvent;
		bool                           TeamKill;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TeamKill != nullptr)
		*TeamKill = params.TeamKill;
}


// Function KillFeed.KillFeed_C.GetKilledFaction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EFaction                       Faction                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillFeed_C::GetKilledFaction(const struct FDeathEvent& DeathEvent, EFaction* Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.GetKilledFaction"));

	struct
	{
		struct FDeathEvent             DeathEvent;
		EFaction                       Faction;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Faction != nullptr)
		*Faction = params.Faction;
}


// Function KillFeed.KillFeed_C.GetKillFeedType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<EKillfeedEntryType> NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillFeed_C::GetKillFeedType(const struct FDeathEvent& DeathEvent, TEnumAsByte<EKillfeedEntryType>* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.GetKillFeedType"));

	struct
	{
		struct FDeathEvent             DeathEvent;
		TEnumAsByte<EKillfeedEntryType> NewParam;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function KillFeed.KillFeed_C.IsSuicide
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           IsSuicide                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillFeed_C::IsSuicide(const struct FDeathEvent& DeathEvent, bool* IsSuicide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.IsSuicide"));

	struct
	{
		struct FDeathEvent             DeathEvent;
		bool                           IsSuicide;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsSuicide != nullptr)
		*IsSuicide = params.IsSuicide;
}


// Function KillFeed.KillFeed_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKillFeed_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeed.KillFeed_C.GameModeMessageReceived_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameModeMessage        Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UKillFeed_C::GameModeMessageReceived_Event_1(const struct FGameModeMessage& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.GameModeMessageReceived_Event_1"));

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


// Function KillFeed.KillFeed_C.CheckForCleanup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillFeed_C::CheckForCleanup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.CheckForCleanup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeed.KillFeed_C.OnPlayerKilled_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UKillFeed_C::OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.OnPlayerKilled_Event_1"));

	struct
	{
		struct FDeathEvent             DeathEvent;
	} params = {};

	params.DeathEvent = DeathEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeed.KillFeed_C.ExecuteUbergraph_KillFeed
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillFeed_C::ExecuteUbergraph_KillFeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed.KillFeed_C.ExecuteUbergraph_KillFeed"));

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
