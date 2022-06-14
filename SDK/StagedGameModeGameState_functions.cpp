// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StagedGameModeGameState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StagedGameModeGameState.StagedGameModeGameState_C.GetStageTimeObjectiveComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTimeObjectiveComponent_C* TimeObjectiveComponent         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AStagedGameModeGameState_C::GetStageTimeObjectiveComponent(class UObject* Stage, class UTimeObjectiveComponent_C** TimeObjectiveComponent, bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameModeGameState.StagedGameModeGameState_C.GetStageTimeObjectiveComponent"));

	struct
	{
		class UObject*                 Stage;
		class UTimeObjectiveComponent_C* TimeObjectiveComponent;
		bool                           IsValid;
	} params = {};

	params.Stage = Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TimeObjectiveComponent != nullptr)
		*TimeObjectiveComponent = params.TimeObjectiveComponent;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function StagedGameModeGameState.StagedGameModeGameState_C.GetWinningFactionFromPreviousStage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       PreviousWinningFaction         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStagedGameModeGameState_C::GetWinningFactionFromPreviousStage(EFaction* PreviousWinningFaction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameModeGameState.StagedGameModeGameState_C.GetWinningFactionFromPreviousStage"));

	struct
	{
		EFaction                       PreviousWinningFaction;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PreviousWinningFaction != nullptr)
		*PreviousWinningFaction = params.PreviousWinningFaction;
}


// Function StagedGameModeGameState.StagedGameModeGameState_C.GetCurrentStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> AStagedGameModeGameState_C::GetCurrentStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameModeGameState.StagedGameModeGameState_C.GetCurrentStage"));

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


// Function StagedGameModeGameState.StagedGameModeGameState_C.OnRep_Stage Actor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStagedGameModeGameState_C::OnRep_Stage_Actor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameModeGameState.StagedGameModeGameState_C.OnRep_Stage Actor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StagedGameModeGameState.StagedGameModeGameState_C.OnRep_Stage Index
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStagedGameModeGameState_C::OnRep_Stage_Index()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameModeGameState.StagedGameModeGameState_C.OnRep_Stage Index"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StagedGameModeGameState.StagedGameModeGameState_C.Set New Stage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> Current_Stage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AStagedGameModeGameState_C::Set_New_Stage(const TScriptInterface<class UStageInterface>& Current_Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameModeGameState.StagedGameModeGameState_C.Set New Stage"));

	struct
	{
		TScriptInterface<class UStageInterface> Current_Stage;
	} params = {};

	params.Current_Stage = Current_Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StagedGameModeGameState.StagedGameModeGameState_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AStagedGameModeGameState_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameModeGameState.StagedGameModeGameState_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StagedGameModeGameState.StagedGameModeGameState_C.ExecuteUbergraph_StagedGameModeGameState
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStagedGameModeGameState_C::ExecuteUbergraph_StagedGameModeGameState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameModeGameState.StagedGameModeGameState_C.ExecuteUbergraph_StagedGameModeGameState"));

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


// Function StagedGameModeGameState.StagedGameModeGameState_C.Stage Index Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            New_Index                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStagedGameModeGameState_C::Stage_Index_Changed__DelegateSignature(int New_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameModeGameState.StagedGameModeGameState_C.Stage Index Changed__DelegateSignature"));

	struct
	{
		int                            New_Index;
	} params = {};

	params.New_Index = New_Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StagedGameModeGameState.StagedGameModeGameState_C.Current Stage Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Previous_Stage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 New_Stage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStagedGameModeGameState_C::Current_Stage_Changed__DelegateSignature(class UObject* Previous_Stage, class UObject* New_Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameModeGameState.StagedGameModeGameState_C.Current Stage Changed__DelegateSignature"));

	struct
	{
		class UObject*                 Previous_Stage;
		class UObject*                 New_Stage;
	} params = {};

	params.Previous_Stage = Previous_Stage;
	params.New_Stage = New_Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
