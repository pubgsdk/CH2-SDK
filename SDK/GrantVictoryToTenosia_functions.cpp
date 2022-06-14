// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GrantVictoryToTenosia_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GrantVictoryToTenosia.GrantVictoryToTenosia_C.CompleteStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> UGrantVictoryToTenosia_C::CompleteStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToTenosia.GrantVictoryToTenosia_C.CompleteStage"));

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


// Function GrantVictoryToTenosia.GrantVictoryToTenosia_C.IsStageReadyToComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGrantVictoryToTenosia_C::IsStageReadyToComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToTenosia.GrantVictoryToTenosia_C.IsStageReadyToComplete"));

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


// Function GrantVictoryToTenosia.GrantVictoryToTenosia_C.TimeoutStage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGrantVictoryToTenosia_C::TimeoutStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GrantVictoryToTenosia.GrantVictoryToTenosia_C.TimeoutStage"));

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
