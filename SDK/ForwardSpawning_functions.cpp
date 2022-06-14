// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ForwardSpawning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForwardSpawning.ForwardSpawning_C.BeginState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawning_C::BeginState(const struct FGameplayTag& PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawning.ForwardSpawning_C.BeginState"));

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


// Function ForwardSpawning.ForwardSpawning_C.EndState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawning_C::EndState(const struct FGameplayTag& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawning.ForwardSpawning_C.EndState"));

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


// Function ForwardSpawning.ForwardSpawning_C.HandleNextSpawnWaveChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawning_C::HandleNextSpawnWaveChanged(class ASpawnWave* SpawnWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawning.ForwardSpawning_C.HandleNextSpawnWaveChanged"));

	struct
	{
		class ASpawnWave*              SpawnWave;
	} params = {};

	params.SpawnWave = SpawnWave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawning.ForwardSpawning_C.HandlePossessedPawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawning_C::HandlePossessedPawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawning.ForwardSpawning_C.HandlePossessedPawn"));

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


// Function ForwardSpawning.ForwardSpawning_C.CleanupPostProcessEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawning_C::CleanupPostProcessEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawning.ForwardSpawning_C.CleanupPostProcessEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawning.ForwardSpawning_C.ExecuteUbergraph_ForwardSpawning
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawning_C::ExecuteUbergraph_ForwardSpawning(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawning.ForwardSpawning_C.ExecuteUbergraph_ForwardSpawning"));

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
