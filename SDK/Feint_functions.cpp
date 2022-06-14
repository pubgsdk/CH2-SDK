// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Feint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Feint.Feint_C.CanAttackBeHeavy
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFeint_C::CanAttackBeHeavy(bool* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.CanAttackBeHeavy"));

	struct
	{
		bool                           Output;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Feint.Feint_C.CrosshairAborted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsStateEnd                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFeint_C::CrosshairAborted(bool IsStateEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.CrosshairAborted"));

	struct
	{
		bool                           IsStateEnd;
	} params = {};

	params.IsStateEnd = IsStateEnd;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Feint.Feint_C.CrosshairCompleted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeint_C::CrosshairCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.CrosshairCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Feint.Feint_C.CrosshairInitiated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeint_C::CrosshairInitiated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.CrosshairInitiated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Feint.Feint_C.CrosshairProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeint_C::CrosshairProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.CrosshairProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Feint.Feint_C.OnAssemble_Feint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeint_C::OnAssemble_Feint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.OnAssemble_Feint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Feint.Feint_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFeint_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Feint.Feint_C.StartHoldAttack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFeint_C::StartHoldAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.StartHoldAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Feint.Feint_C.StartHolding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFeint_C::StartHolding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.StartHolding"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Feint.Feint_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFeint_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.EventBeginState"));

	struct
	{
		struct FName                   PreviousState;
		float                          PreviousStateTime;
		float                          AnimationLength;
	} params = {};

	params.PreviousState = PreviousState;
	params.PreviousStateTime = PreviousStateTime;
	params.AnimationLength = AnimationLength;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Feint.Feint_C.EventTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFeint_C::EventTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.EventTick"));

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


// Function Feint.Feint_C.ExecuteUbergraph_Feint
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFeint_C::ExecuteUbergraph_Feint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Feint.Feint_C.ExecuteUbergraph_Feint"));

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
