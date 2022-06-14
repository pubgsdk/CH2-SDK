// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseSpecialSpawnEvent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.OnRep_HorseSpecialSpawnState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AHorseSpecialSpawnEvent_C::OnRep_HorseSpecialSpawnState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.OnRep_HorseSpecialSpawnState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.IsLocalPlayerFactionRelevant
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AHorseSpecialSpawnEvent_C::IsLocalPlayerFactionRelevant(bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.IsLocalPlayerFactionRelevant"));

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


// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.GetLocalPlayerFaction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFaction                       Faction                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AHorseSpecialSpawnEvent_C::GetLocalPlayerFaction(EFaction* Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.GetLocalPlayerFaction"));

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


// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AHorseSpecialSpawnEvent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.PlaySound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AKEvent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AHorseSpecialSpawnEvent_C::PlaySound(class UAkAudioEvent* AKEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.PlaySound"));

	struct
	{
		class UAkAudioEvent*           AKEvent;
	} params = {};

	params.AKEvent = AKEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.BroadcastSpawningHasStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AHorseSpecialSpawnEvent_C::BroadcastSpawningHasStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.BroadcastSpawningHasStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.BroadcastPreSpawning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AHorseSpecialSpawnEvent_C::BroadcastPreSpawning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.BroadcastPreSpawning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.BroadcastSpawningHasFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AHorseSpecialSpawnEvent_C::BroadcastSpawningHasFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.BroadcastSpawningHasFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.HorseSpecialSpawnStateUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorseSpecialSpawnStates> NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AHorseSpecialSpawnEvent_C* SpawnEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AHorseSpecialSpawnEvent_C::HorseSpecialSpawnStateUpdated_Event_1(TEnumAsByte<EHorseSpecialSpawnStates> NewState, class AHorseSpecialSpawnEvent_C* SpawnEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.HorseSpecialSpawnStateUpdated_Event_1"));

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


// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.ExecuteUbergraph_HorseSpecialSpawnEvent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AHorseSpecialSpawnEvent_C::ExecuteUbergraph_HorseSpecialSpawnEvent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.ExecuteUbergraph_HorseSpecialSpawnEvent"));

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


// Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.HorseSpecialSpawnStateUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorseSpecialSpawnStates> NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AHorseSpecialSpawnEvent_C* SpawnEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AHorseSpecialSpawnEvent_C::HorseSpecialSpawnStateUpdated__DelegateSignature(TEnumAsByte<EHorseSpecialSpawnStates> NewState, class AHorseSpecialSpawnEvent_C* SpawnEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C.HorseSpecialSpawnStateUpdated__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
