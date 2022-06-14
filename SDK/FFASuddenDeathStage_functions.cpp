// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FFASuddenDeathStage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FFASuddenDeathStage.FFASuddenDeathStage_C.GetVictor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         Player                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsTie                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AFFASuddenDeathStage_C::GetVictor(class ATBLPlayerState** Player, bool* IsTie)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFASuddenDeathStage.FFASuddenDeathStage_C.GetVictor"));

	struct
	{
		class ATBLPlayerState*         Player;
		bool                           IsTie;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Player != nullptr)
		*Player = params.Player;
	if (IsTie != nullptr)
		*IsTie = params.IsTie;
}


// Function FFASuddenDeathStage.FFASuddenDeathStage_C.IsStageReadyToComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AFFASuddenDeathStage_C::IsStageReadyToComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFASuddenDeathStage.FFASuddenDeathStage_C.IsStageReadyToComplete"));

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


// Function FFASuddenDeathStage.FFASuddenDeathStage_C.CompleteStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> AFFASuddenDeathStage_C::CompleteStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFASuddenDeathStage.FFASuddenDeathStage_C.CompleteStage"));

	struct
	{
		TScriptInterface<class UStageInterface> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FFASuddenDeathStage.FFASuddenDeathStage_C.StartStage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFFASuddenDeathStage_C::StartStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFASuddenDeathStage.FFASuddenDeathStage_C.StartStage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FFASuddenDeathStage.FFASuddenDeathStage_C.OnPlayerKilled_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageSource*           DamageSource                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDeathEvent             DeathEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FDeathDamageTakenEvent  DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AFFASuddenDeathStage_C::OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFASuddenDeathStage.FFASuddenDeathStage_C.OnPlayerKilled_Event_1"));

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


// Function FFASuddenDeathStage.FFASuddenDeathStage_C.ExecuteUbergraph_FFASuddenDeathStage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFFASuddenDeathStage_C::ExecuteUbergraph_FFASuddenDeathStage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FFASuddenDeathStage.FFASuddenDeathStage_C.ExecuteUbergraph_FFASuddenDeathStage"));

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
