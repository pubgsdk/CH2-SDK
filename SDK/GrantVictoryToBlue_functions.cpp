// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GrantVictoryToBlue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GrantVictoryToBlue.GrantVictoryToBlue_C.CompleteStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> UGrantVictoryToBlue_C::CompleteStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToBlue.GrantVictoryToBlue_C.CompleteStage"));

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


// Function GrantVictoryToBlue.GrantVictoryToBlue_C.IsStageReadyToComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGrantVictoryToBlue_C::IsStageReadyToComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToBlue.GrantVictoryToBlue_C.IsStageReadyToComplete"));

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


// Function GrantVictoryToBlue.GrantVictoryToBlue_C.TimeoutStage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGrantVictoryToBlue_C::TimeoutStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToBlue.GrantVictoryToBlue_C.TimeoutStage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
