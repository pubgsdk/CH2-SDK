// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StagedGameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StagedGameMode.StagedGameMode_C.IsAutoBalanceBlocked
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AStagedGameMode_C::IsAutoBalanceBlocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.IsAutoBalanceBlocked"));

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


// Function StagedGameMode.StagedGameMode_C.K2_GetCurrentStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UObject* AStagedGameMode_C::K2_GetCurrentStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.K2_GetCurrentStage"));

	struct
	{
		class UObject*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function StagedGameMode.StagedGameMode_C.Get First Stage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> First_stage                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AStagedGameMode_C::Get_First_Stage(TScriptInterface<class UStageInterface>* First_stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.Get First Stage"));

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


// Function StagedGameMode.StagedGameMode_C.Get First Stage With Warmup
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> First_stage                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AStagedGameMode_C::Get_First_Stage_With_Warmup(TScriptInterface<class UStageInterface>* First_stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.Get First Stage With Warmup"));

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


// Function StagedGameMode.StagedGameMode_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStagedGameMode_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StagedGameMode.StagedGameMode_C.K2_HandleMatchHasStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AStagedGameMode_C::K2_HandleMatchHasStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.K2_HandleMatchHasStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StagedGameMode.StagedGameMode_C.K2_OnSetMatchState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStagedGameMode_C::K2_OnSetMatchState(const struct FName& NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.K2_OnSetMatchState"));

	struct
	{
		struct FName                   NewState;
	} params = {};

	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StagedGameMode.StagedGameMode_C.K2_HandleSkipStage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AStagedGameMode_C::K2_HandleSkipStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.K2_HandleSkipStage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StagedGameMode.StagedGameMode_C.K2_HandleMatchIsWaitingToStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AStagedGameMode_C::K2_HandleMatchIsWaitingToStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.K2_HandleMatchIsWaitingToStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StagedGameMode.StagedGameMode_C.ExecuteUbergraph_StagedGameMode
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStagedGameMode_C::ExecuteUbergraph_StagedGameMode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.ExecuteUbergraph_StagedGameMode"));

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


// Function StagedGameMode.StagedGameMode_C.Started New Stage__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> Stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TScriptInterface<class UStageInterface> Previous_Stage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AStagedGameMode_C::Started_New_Stage__DelegateSignature(const TScriptInterface<class UStageInterface>& Stage, const TScriptInterface<class UStageInterface>& Previous_Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StagedGameMode.StagedGameMode_C.Started New Stage__DelegateSignature"));

	struct
	{
		TScriptInterface<class UStageInterface> Stage;
		TScriptInterface<class UStageInterface> Previous_Stage;
	} params = {};

	params.Stage = Stage;
	params.Previous_Stage = Previous_Stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
