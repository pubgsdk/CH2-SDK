// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AmbientCorpseManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.CleanupCorpses
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AmbientCorpseManager_C::CleanupCorpses()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.CleanupCorpses"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.OnRep_AllActiveGroups
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AmbientCorpseManager_C::OnRep_AllActiveGroups()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.OnRep_AllActiveGroups"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.debug string
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InString                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpseManager_C::debug_string(const struct FString& InString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.debug string"));

	struct
	{
		struct FString                 InString;
	} params = {};

	params.InString = InString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.IsAmbientCorpsesEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_AmbientCorpseManager_C::IsAmbientCorpsesEnabled(bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.IsAmbientCorpsesEnabled"));

	struct
	{
		bool                           _;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.RemoveCorpse
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_AmbientCorpsePile_C* _AmbiantCorpsePile             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_AmbientCorpseManager_C::RemoveCorpse(class ABP_AmbientCorpsePile_C* _AmbiantCorpsePile, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.RemoveCorpse"));

	struct
	{
		class ABP_AmbientCorpsePile_C* _AmbiantCorpsePile;
		bool                           Success;
	} params = {};

	params._AmbiantCorpsePile = _AmbiantCorpsePile;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.UpdateCorpse Actors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AmbientCorpseManager_C::UpdateCorpse_Actors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.UpdateCorpse Actors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.UpdateAmbientCorpseActorsMap
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AmbientCorpseManager_C::UpdateAmbientCorpseActorsMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.UpdateAmbientCorpseActorsMap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_AmbientCorpseManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.OnPlayerKilled_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageSource*           DamageSource                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FDeathDamageTakenEvent  DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABP_AmbientCorpseManager_C::OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.OnPlayerKilled_Event_1"));

	struct
	{
		class AController*             Killer;
		class AController*             Killed;
		class UDamageSource*           DamageSource;
		struct FDeathEvent             DeathEvent;
		struct FDeathDamageTakenEvent  DamageEvent;
	} params = {};

	params.Killer = Killer;
	params.Killed = Killed;
	params.DamageSource = DamageSource;
	params.DeathEvent = DeathEvent;
	params.DamageEvent = DamageEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.Death
// (FUNC_Net, FUNC_NetMulticast, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_AmbientCorpseManager_C::Death(const struct FDeathEvent& DeathEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.Death"));

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


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.SpawnCorpse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AmbientCorpseManager_C::SpawnCorpse()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.SpawnCorpse"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.DeactivateGroup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Group_Name_                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpseManager_C::DeactivateGroup(const struct FName& Group_Name_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.DeactivateGroup"));

	struct
	{
		struct FName                   Group_Name_;
	} params = {};

	params.Group_Name_ = Group_Name_;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.ActivateGroup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   GroupName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpseManager_C::ActivateGroup(const struct FName& GroupName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.ActivateGroup"));

	struct
	{
		struct FName                   GroupName;
	} params = {};

	params.GroupName = GroupName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.ExecuteUbergraph_BP_AmbientCorpseManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpseManager_C::ExecuteUbergraph_BP_AmbientCorpseManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpseManager.BP_AmbientCorpseManager_C.ExecuteUbergraph_BP_AmbientCorpseManager"));

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
