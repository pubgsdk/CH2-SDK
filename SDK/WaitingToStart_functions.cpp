// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WaitingToStart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaitingToStart.WaitingToStart_C.On Fade Out Started
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaitingToStart_C::On_Fade_Out_Started()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToStart.WaitingToStart_C.On Fade Out Started"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WaitingToStart.WaitingToStart_C.HandleMatchStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   MatchState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWaitingToStart_C::HandleMatchStateChanged(const struct FName& MatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToStart.WaitingToStart_C.HandleMatchStateChanged"));

	struct
	{
		struct FName                   MatchState;
	} params = {};

	params.MatchState = MatchState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WaitingToStart.WaitingToStart_C.BeginState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWaitingToStart_C::BeginState(const struct FGameplayTag& PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToStart.WaitingToStart_C.BeginState"));

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


// Function WaitingToStart.WaitingToStart_C.EndState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWaitingToStart_C::EndState(const struct FGameplayTag& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToStart.WaitingToStart_C.EndState"));

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


// Function WaitingToStart.WaitingToStart_C.On Fade Out Finished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaitingToStart_C::On_Fade_Out_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToStart.WaitingToStart_C.On Fade Out Finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WaitingToStart.WaitingToStart_C.Stop The Music
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaitingToStart_C::Stop_The_Music()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToStart.WaitingToStart_C.Stop The Music"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WaitingToStart.WaitingToStart_C.ExecuteUbergraph_WaitingToStart
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWaitingToStart_C::ExecuteUbergraph_WaitingToStart(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToStart.WaitingToStart_C.ExecuteUbergraph_WaitingToStart"));

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
