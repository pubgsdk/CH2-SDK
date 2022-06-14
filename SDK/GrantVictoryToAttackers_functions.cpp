// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GrantVictoryToAttackers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.CompleteStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> UGrantVictoryToAttackers_C::CompleteStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.CompleteStage"));

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


// Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.IsStageReadyToComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGrantVictoryToAttackers_C::IsStageReadyToComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.IsStageReadyToComplete"));

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


// Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.TimeoutStage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGrantVictoryToAttackers_C::TimeoutStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.TimeoutStage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.StartStage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGrantVictoryToAttackers_C::StartStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.StartStage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.ExecuteUbergraph_GrantVictoryToAttackers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGrantVictoryToAttackers_C::ExecuteUbergraph_GrantVictoryToAttackers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToAttackers.GrantVictoryToAttackers_C.ExecuteUbergraph_GrantVictoryToAttackers"));

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
