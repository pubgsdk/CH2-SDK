// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TransitionStage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TransitionStage.TransitionStage_C.TryFastForwardServerWarmup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATransitionStage_C::TryFastForwardServerWarmup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.TryFastForwardServerWarmup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TransitionStage.TransitionStage_C.InitializeTransitionStage With Bindings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UStageInterface> NextStage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransitionStageSettings Settings                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TMap<class ASpawner*, struct FString> Spawner_Binding_Prefixes       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATransitionStage_C::InitializeTransitionStage_With_Bindings(const TScriptInterface<class UStageInterface>& NextStage, const struct FTransitionStageSettings& Settings, TMap<class ASpawner*, struct FString> Spawner_Binding_Prefixes, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.InitializeTransitionStage With Bindings"));

	struct
	{
		TScriptInterface<class UStageInterface> NextStage;
		struct FTransitionStageSettings Settings;
		TMap<class ASpawner*, struct FString> Spawner_Binding_Prefixes;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.NextStage = NextStage;
	params.Settings = Settings;
	params.Spawner_Binding_Prefixes = Spawner_Binding_Prefixes;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function TransitionStage.TransitionStage_C.CompleteStage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UStageInterface> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

TScriptInterface<class UStageInterface> ATransitionStage_C::CompleteStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.CompleteStage"));

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


// Function TransitionStage.TransitionStage_C.InitializeTransitionStage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UStageInterface> NextStage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransitionStageSettings Settings                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TScriptInterface<class UStageInterface> Stage                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATransitionStage_C::InitializeTransitionStage(const TScriptInterface<class UStageInterface>& NextStage, const struct FTransitionStageSettings& Settings, TScriptInterface<class UStageInterface>* Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.InitializeTransitionStage"));

	struct
	{
		TScriptInterface<class UStageInterface> NextStage;
		struct FTransitionStageSettings Settings;
		TScriptInterface<class UStageInterface> Stage;
	} params = {};

	params.NextStage = NextStage;
	params.Settings = Settings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function TransitionStage.TransitionStage_C.IsStageReadyToComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATransitionStage_C::IsStageReadyToComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.IsStageReadyToComplete"));

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


// Function TransitionStage.TransitionStage_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATransitionStage_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TransitionStage.TransitionStage_C.StartStage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATransitionStage_C::StartStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.StartStage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TransitionStage.TransitionStage_C.OnMatchStateChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATransitionStage_C::OnMatchStateChanged_Event_1(const struct FName& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.OnMatchStateChanged_Event_1"));

	struct
	{
		struct FName                   State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TransitionStage.TransitionStage_C.Conditional Start Stage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATransitionStage_C::Conditional_Start_Stage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.Conditional Start Stage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TransitionStage.TransitionStage_C.ExecuteUbergraph_TransitionStage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATransitionStage_C::ExecuteUbergraph_TransitionStage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.ExecuteUbergraph_TransitionStage"));

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


// Function TransitionStage.TransitionStage_C.On Transition Stage Started__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATransitionStage_C::On_Transition_Stage_Started__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.On Transition Stage Started__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TransitionStage.TransitionStage_C.On Transition Stage Ended__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATransitionStage_C::On_Transition_Stage_Ended__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TransitionStage.TransitionStage_C.On Transition Stage Ended__DelegateSignature"));

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
