// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WaitingToSpawnSpectatingState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.EndState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWaitingToSpawnSpectatingState_C::EndState(const struct FGameplayTag& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.EndState"));

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


// Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.HandleUIStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            UIState                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWaitingToSpawnSpectatingState_C::HandleUIStateChanged(const struct FGameplayTag& UIState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.HandleUIStateChanged"));

	struct
	{
		struct FGameplayTag            UIState;
	} params = {};

	params.UIState = UIState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.BeginState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWaitingToSpawnSpectatingState_C::BeginState(const struct FGameplayTag& PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.BeginState"));

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


// Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.Stop sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaitingToSpawnSpectatingState_C::Stop_sequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.Stop sequence"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.Start sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaitingToSpawnSpectatingState_C::Start_sequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.Start sequence"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.HandlePossessedPawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWaitingToSpawnSpectatingState_C::HandlePossessedPawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.HandlePossessedPawn"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.ExecuteUbergraph_WaitingToSpawnSpectatingState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWaitingToSpawnSpectatingState_C::ExecuteUbergraph_WaitingToSpawnSpectatingState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C.ExecuteUbergraph_WaitingToSpawnSpectatingState"));

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
