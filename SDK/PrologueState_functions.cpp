// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PrologueState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrologueState.PrologueState_C.On Fade Out Started
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueState_C::On_Fade_Out_Started()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueState.PrologueState_C.On Fade Out Started"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueState.PrologueState_C.BeginState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPrologueState_C::BeginState(const struct FGameplayTag& PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueState.PrologueState_C.BeginState"));

	struct
	{
		struct FGameplayTag            PreviousState;
	} params = {};

	params.PreviousState = PreviousState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueState.PrologueState_C.Stop Prologue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueState_C::Stop_Prologue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueState.PrologueState_C.Stop Prologue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueState.PrologueState_C.EndState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPrologueState_C::EndState(const struct FGameplayTag& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueState.PrologueState_C.EndState"));

	struct
	{
		struct FGameplayTag            NextState;
	} params = {};

	params.NextState = NextState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueState.PrologueState_C.Check for Screen Manager
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueState_C::Check_for_Screen_Manager()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueState.PrologueState_C.Check for Screen Manager"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueState.PrologueState_C.Actually start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueState_C::Actually_start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueState.PrologueState_C.Actually start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueState.PrologueState_C.FadeOutPrologue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueState_C::FadeOutPrologue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueState.PrologueState_C.FadeOutPrologue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueState.PrologueState_C.On Fade Out Finished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueState_C::On_Fade_Out_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueState.PrologueState_C.On Fade Out Finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueState.PrologueState_C.ForceEndState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrologueState_C::ForceEndState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueState.PrologueState_C.ForceEndState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PrologueState.PrologueState_C.ExecuteUbergraph_PrologueState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPrologueState_C::ExecuteUbergraph_PrologueState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PrologueState.PrologueState_C.ExecuteUbergraph_PrologueState"));

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
