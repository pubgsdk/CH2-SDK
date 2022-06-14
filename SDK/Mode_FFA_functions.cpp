// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Mode_FFA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mode_FFA.Mode_FFA_C.GetScorePercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float AMode_FFA_C::GetScorePercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Mode_FFA.Mode_FFA_C.GetScorePercent"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Mode_FFA.Mode_FFA_C.ConfigureFFATimeoutStage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFFATimeoutStage_C*      Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMode_FFA_C::ConfigureFFATimeoutStage(class AFFATimeoutStage_C* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Mode_FFA.Mode_FFA_C.ConfigureFFATimeoutStage"));

	struct
	{
		class AFFATimeoutStage_C*      Stage;
	} params = {};

	params.Stage = Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Mode_FFA.Mode_FFA_C.Get First Stage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> First_stage                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AMode_FFA_C::Get_First_Stage(TScriptInterface<class UStageInterface>* First_stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Mode_FFA.Mode_FFA_C.Get First Stage"));

	struct
	{
		TScriptInterface<class UStageInterface> First_stage;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (First_stage != nullptr)
		*First_stage = params.First_stage;
}


// Function Mode_FFA.Mode_FFA_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMode_FFA_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Mode_FFA.Mode_FFA_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Mode_FFA.Mode_FFA_C.OnPlayerKilled_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageSource*           DamageSource                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FDeathDamageTakenEvent  DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AMode_FFA_C::OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Mode_FFA.Mode_FFA_C.OnPlayerKilled_Event_1"));

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


// Function Mode_FFA.Mode_FFA_C.K2_HandleMatchHasStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AMode_FFA_C::K2_HandleMatchHasStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Mode_FFA.Mode_FFA_C.K2_HandleMatchHasStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Mode_FFA.Mode_FFA_C.UpdateDynamicMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMode_FFA_C::UpdateDynamicMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Mode_FFA.Mode_FFA_C.UpdateDynamicMusic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Mode_FFA.Mode_FFA_C.ExecuteUbergraph_Mode_FFA
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMode_FFA_C::ExecuteUbergraph_Mode_FFA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Mode_FFA.Mode_FFA_C.ExecuteUbergraph_Mode_FFA"));

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


// Function Mode_FFA.Mode_FFA_C.VictoryAwarded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMode_FFA_C::VictoryAwarded__DelegateSignature(class ATBLPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Mode_FFA.Mode_FFA_C.VictoryAwarded__DelegateSignature"));

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


// Function Mode_FFA.Mode_FFA_C.KillLeaderUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Kills                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxScore                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMode_FFA_C::KillLeaderUpdated__DelegateSignature(class ATBLPlayerState* PlayerState, int Kills, int MaxScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Mode_FFA.Mode_FFA_C.KillLeaderUpdated__DelegateSignature"));

	struct
	{
		class ATBLPlayerState*         PlayerState;
		int                            Kills;
		int                            MaxScore;
	} params = {};

	params.PlayerState = PlayerState;
	params.Kills = Kills;
	params.MaxScore = MaxScore;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
