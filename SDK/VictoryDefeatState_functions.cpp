// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VictoryDefeatState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VictoryDefeatState.VictoryDefeatState_C.On Fade Out Started
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVictoryDefeatState_C::On_Fade_Out_Started()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatState.VictoryDefeatState_C.On Fade Out Started"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VictoryDefeatState.VictoryDefeatState_C.BeginState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVictoryDefeatState_C::BeginState(const struct FGameplayTag& PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatState.VictoryDefeatState_C.BeginState"));

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


// Function VictoryDefeatState.VictoryDefeatState_C.EndState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVictoryDefeatState_C::EndState(const struct FGameplayTag& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatState.VictoryDefeatState_C.EndState"));

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


// Function VictoryDefeatState.VictoryDefeatState_C.On Fade Out Finished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVictoryDefeatState_C::On_Fade_Out_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatState.VictoryDefeatState_C.On Fade Out Finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VictoryDefeatState.VictoryDefeatState_C.Query victor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVictoryDefeatState_C::Query_victor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatState.VictoryDefeatState_C.Query victor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VictoryDefeatState.VictoryDefeatState_C.OnPostMatchEndTimeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVictoryDefeatState_C::OnPostMatchEndTimeChanged(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatState.VictoryDefeatState_C.OnPostMatchEndTimeChanged"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VictoryDefeatState.VictoryDefeatState_C.ExecuteUbergraph_VictoryDefeatState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVictoryDefeatState_C::ExecuteUbergraph_VictoryDefeatState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VictoryDefeatState.VictoryDefeatState_C.ExecuteUbergraph_VictoryDefeatState"));

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
