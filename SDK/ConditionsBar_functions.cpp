// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ConditionsBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConditionsBar.ConditionsBar_C.GetFreeConditionsWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UConditionsBarEntry_C*   Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBar_C::GetFreeConditionsWidget(bool* Success, class UConditionsBarEntry_C** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.GetFreeConditionsWidget"));

	struct
	{
		bool                           Success;
		class UConditionsBarEntry_C*   Widget;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function ConditionsBar.ConditionsBar_C.RemoveCondition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EConditionType                 RemovedCondition               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBar_C::RemoveCondition(EConditionType RemovedCondition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.RemoveCondition"));

	struct
	{
		EConditionType                 RemovedCondition;
	} params = {};

	params.RemovedCondition = RemovedCondition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBar.ConditionsBar_C.AddCondition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EConditionType                 NewCondition                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBar_C::AddCondition(EConditionType NewCondition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.AddCondition"));

	struct
	{
		EConditionType                 NewCondition;
	} params = {};

	params.NewCondition = NewCondition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBar.ConditionsBar_C.GetConditionWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UConditionsBarEntry_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UConditionsBar_C::GetConditionWidgets(TArray<class UConditionsBarEntry_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.GetConditionWidgets"));

	struct
	{
		TArray<class UConditionsBarEntry_C*> Array;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function ConditionsBar.ConditionsBar_C.ClearConditionsBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConditionsBar_C::ClearConditionsBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.ClearConditionsBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBar.ConditionsBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConditionsBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBar.ConditionsBar_C.OnApplyCondition_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBar_C::OnApplyCondition_Event_1(class AActor* Actor, EConditionType Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.OnApplyCondition_Event_1"));

	struct
	{
		class AActor*                  Actor;
		EConditionType                 Condition;
	} params = {};

	params.Actor = Actor;
	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBar.ConditionsBar_C.OnRemoveCondition_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EConditionType                 Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  ConditionRemover               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBar_C::OnRemoveCondition_Event_1(class AActor* Actor, EConditionType Condition, class AActor* ConditionRemover)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.OnRemoveCondition_Event_1"));

	struct
	{
		class AActor*                  Actor;
		EConditionType                 Condition;
		class AActor*                  ConditionRemover;
	} params = {};

	params.Actor = Actor;
	params.Condition = Condition;
	params.ConditionRemover = ConditionRemover;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBar.ConditionsBar_C.OnPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBar_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.OnPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBar.ConditionsBar_C.OnClientPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBar_C::OnClientPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.OnClientPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBar.ConditionsBar_C.BindOnUpdatedEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UConditionsComponent*    Comp                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBar_C::BindOnUpdatedEvents(class UConditionsComponent* Comp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.BindOnUpdatedEvents"));

	struct
	{
		class UConditionsComponent*    Comp;
	} params = {};

	params.Comp = Comp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ConditionsBar.ConditionsBar_C.ExecuteUbergraph_ConditionsBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UConditionsBar_C::ExecuteUbergraph_ConditionsBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.ExecuteUbergraph_ConditionsBar"));

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


// Function ConditionsBar.ConditionsBar_C.IsShowingCondition__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConditionsBar_C::IsShowingCondition__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ConditionsBar.ConditionsBar_C.IsShowingCondition__DelegateSignature"));

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
