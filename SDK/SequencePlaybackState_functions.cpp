// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SequencePlaybackState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SequencePlaybackState.SequencePlaybackState_C.ShouldRequestCinematicMode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USequencePlaybackState_C::ShouldRequestCinematicMode(bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SequencePlaybackState.SequencePlaybackState_C.ShouldRequestCinematicMode"));

	struct
	{
		bool                           Return_Value;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function SequencePlaybackState.SequencePlaybackState_C.BeginState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USequencePlaybackState_C::BeginState(const struct FGameplayTag& PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SequencePlaybackState.SequencePlaybackState_C.BeginState"));

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


// Function SequencePlaybackState.SequencePlaybackState_C.HandleGameCinematicStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECinematicGameState            GameStateCinematicState        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USequencePlaybackState_C::HandleGameCinematicStateChanged(ECinematicGameState GameStateCinematicState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SequencePlaybackState.SequencePlaybackState_C.HandleGameCinematicStateChanged"));

	struct
	{
		ECinematicGameState            GameStateCinematicState;
	} params = {};

	params.GameStateCinematicState = GameStateCinematicState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SequencePlaybackState.SequencePlaybackState_C.Start sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USequencePlaybackState_C::Start_sequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SequencePlaybackState.SequencePlaybackState_C.Start sequence"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SequencePlaybackState.SequencePlaybackState_C.Stop sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USequencePlaybackState_C::Stop_sequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SequencePlaybackState.SequencePlaybackState_C.Stop sequence"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SequencePlaybackState.SequencePlaybackState_C.EndState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USequencePlaybackState_C::EndState(const struct FGameplayTag& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SequencePlaybackState.SequencePlaybackState_C.EndState"));

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


// Function SequencePlaybackState.SequencePlaybackState_C.HandleCharacterAllowControl
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USequencePlaybackState_C::HandleCharacterAllowControl()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SequencePlaybackState.SequencePlaybackState_C.HandleCharacterAllowControl"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SequencePlaybackState.SequencePlaybackState_C.ExecuteUbergraph_SequencePlaybackState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USequencePlaybackState_C::ExecuteUbergraph_SequencePlaybackState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SequencePlaybackState.SequencePlaybackState_C.ExecuteUbergraph_SequencePlaybackState"));

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
