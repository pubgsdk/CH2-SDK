// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CombatZone_Warning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CombatZone_Warning.CombatZone_Warning_C.GetTimeUntilDeath
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UCombatZone_Warning_C::GetTimeUntilDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.GetTimeUntilDeath"));

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


// Function CombatZone_Warning.CombatZone_Warning_C.Set Owning HUD Component
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHUDComponent_C*         New_Owner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatZone_Warning_C::Set_Owning_HUD_Component(class UHUDComponent_C* New_Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.Set Owning HUD Component"));

	struct
	{
		class UHUDComponent_C*         New_Owner;
	} params = {};

	params.New_Owner = New_Owner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CombatZone_Warning.CombatZone_Warning_C.HideWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          StartTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatZone_Warning_C::HideWarning(float StartTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.HideWarning"));

	struct
	{
		float                          StartTime;
	} params = {};

	params.StartTime = StartTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CombatZone_Warning.CombatZone_Warning_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCombatZone_Warning_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CombatZone_Warning.CombatZone_Warning_C.OnClientPossessedPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatZone_Warning_C::OnClientPossessedPawn(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.OnClientPossessedPawn"));

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


// Function CombatZone_Warning.CombatZone_Warning_C.ShowWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatZone_Warning_C::ShowWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.ShowWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CombatZone_Warning.CombatZone_Warning_C.OnApplyCondition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatZone_Warning_C::OnApplyCondition(class AActor* Actor, EConditionType Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.OnApplyCondition"));

	struct
	{
		class AActor*                  Actor;
		EConditionType                 Condition;
	} params = {};

	params.Actor = Actor;
	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CombatZone_Warning.CombatZone_Warning_C.OnRemoveCondition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ConditionRemover               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatZone_Warning_C::OnRemoveCondition(class AActor* Actor, EConditionType Condition, class AActor* ConditionRemover)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.OnRemoveCondition"));

	struct
	{
		class AActor*                  Actor;
		EConditionType                 Condition;
		class AActor*                  ConditionRemover;
	} params = {};

	params.Actor = Actor;
	params.Condition = Condition;
	params.ConditionRemover = ConditionRemover;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CombatZone_Warning.CombatZone_Warning_C.OnSuicide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKillReason                    Reason                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatZone_Warning_C::OnSuicide(EKillReason Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.OnSuicide"));

	struct
	{
		EKillReason                    Reason;
	} params = {};

	params.Reason = Reason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CombatZone_Warning.CombatZone_Warning_C.OnMatchEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCombatZone_Warning_C::OnMatchEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.OnMatchEnded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CombatZone_Warning.CombatZone_Warning_C.OnKilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKillReason                    Reason                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatZone_Warning_C::OnKilled(EKillReason Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.OnKilled"));

	struct
	{
		EKillReason                    Reason;
	} params = {};

	params.Reason = Reason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CombatZone_Warning.CombatZone_Warning_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatZone_Warning_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.Tick"));

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


// Function CombatZone_Warning.CombatZone_Warning_C.NextSpawnWaveReplicated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatZone_Warning_C::NextSpawnWaveReplicated(class ASpawnWave* SpawnWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.NextSpawnWaveReplicated"));

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


// Function CombatZone_Warning.CombatZone_Warning_C.ExecuteUbergraph_CombatZone_Warning
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCombatZone_Warning_C::ExecuteUbergraph_CombatZone_Warning(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CombatZone_Warning.CombatZone_Warning_C.ExecuteUbergraph_CombatZone_Warning"));

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
