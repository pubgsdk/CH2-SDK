// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TournamentCrowd_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TournamentCrowd.TournamentCrowd_C.IsNotTeamKill
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATournamentCrowd_C::IsNotTeamKill(class ATBLPlayerState* Killed, bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TournamentCrowd.TournamentCrowd_C.IsNotTeamKill"));

	struct
	{
		class ATBLPlayerState*         Killed;
		bool                           Return_Value;
	} params = {};

	params.Killed = Killed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function TournamentCrowd.TournamentCrowd_C.PlaySound
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATournamentCrowd_C::PlaySound(class UAkAudioEvent* Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TournamentCrowd.TournamentCrowd_C.PlaySound"));

	struct
	{
		class UAkAudioEvent*           Sound;
	} params = {};

	params.Sound = Sound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TournamentCrowd.TournamentCrowd_C.UpdateCrowdExcitementRTPC
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATournamentCrowd_C::UpdateCrowdExcitementRTPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TournamentCrowd.TournamentCrowd_C.UpdateCrowdExcitementRTPC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TournamentCrowd.TournamentCrowd_C.AddCrowdExcitement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATournamentCrowd_C::AddCrowdExcitement(int Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TournamentCrowd.TournamentCrowd_C.AddCrowdExcitement"));

	struct
	{
		int                            Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TournamentCrowd.TournamentCrowd_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATournamentCrowd_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TournamentCrowd.TournamentCrowd_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TournamentCrowd.TournamentCrowd_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATournamentCrowd_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TournamentCrowd.TournamentCrowd_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TournamentCrowd.TournamentCrowd_C.OnPlayerKilled_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ATournamentCrowd_C::OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TournamentCrowd.TournamentCrowd_C.OnPlayerKilled_Event_1"));

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


// Function TournamentCrowd.TournamentCrowd_C.ExecuteUbergraph_TournamentCrowd
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATournamentCrowd_C::ExecuteUbergraph_TournamentCrowd(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TournamentCrowd.TournamentCrowd_C.ExecuteUbergraph_TournamentCrowd"));

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
