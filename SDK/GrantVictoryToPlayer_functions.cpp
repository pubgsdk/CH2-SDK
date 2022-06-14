// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GrantVictoryToPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetTimeRemaining
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UGrantVictoryToPlayer_C::GetTimeRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetTimeRemaining"));

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


// Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetTimeRemainingPercent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UGrantVictoryToPlayer_C::GetTimeRemainingPercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetTimeRemainingPercent"));

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


// Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetStageCommander
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AActor* UGrantVictoryToPlayer_C::GetStageCommander(EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetStageCommander"));

	struct
	{
		EFaction                       Faction;
		class AActor*                  ReturnValue;
	} params = {};

	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetStageIdNum
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UGrantVictoryToPlayer_C::GetStageIdNum()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.GetStageIdNum"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.CompleteStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> UGrantVictoryToPlayer_C::CompleteStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.CompleteStage"));

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


// Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.IsStageReadyToComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGrantVictoryToPlayer_C::IsStageReadyToComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.IsStageReadyToComplete"));

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


// Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.StartStage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGrantVictoryToPlayer_C::StartStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.StartStage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.ExecuteUbergraph_GrantVictoryToPlayer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGrantVictoryToPlayer_C::ExecuteUbergraph_GrantVictoryToPlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToPlayer.GrantVictoryToPlayer_C.ExecuteUbergraph_GrantVictoryToPlayer"));

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
