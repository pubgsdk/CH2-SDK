// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpawningState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawningState.SpawningState_C.GetPlayerCameraManager
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLPlayerCameraManager* CameraManager                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawningState_C::GetPlayerCameraManager(class ATBLPlayerCameraManager** CameraManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.GetPlayerCameraManager"));

	struct
	{
		class ATBLPlayerCameraManager* CameraManager;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CameraManager != nullptr)
		*CameraManager = params.CameraManager;
}


// Function SpawningState.SpawningState_C.GetActualViewTarget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AActor* USpawningState_C::GetActualViewTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.GetActualViewTarget"));

	struct
	{
		class AActor*                  ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SpawningState.SpawningState_C.BeginState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawningState_C::BeginState(const struct FGameplayTag& PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.BeginState"));

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


// Function SpawningState.SpawningState_C.EndState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawningState_C::EndState(const struct FGameplayTag& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.EndState"));

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


// Function SpawningState.SpawningState_C.HandlePossessedPawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawningState_C::HandlePossessedPawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.HandlePossessedPawn"));

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


// Function SpawningState.SpawningState_C.Tick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawningState_C::Tick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.Tick"));

	struct
	{
		float                          DeltaTime;
	} params = {};

	params.DeltaTime = DeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawningState.SpawningState_C.UpdatePlayerPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpawningState_C::UpdatePlayerPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.UpdatePlayerPawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawningState.SpawningState_C.UnlockFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpawningState_C::UnlockFade()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.UnlockFade"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawningState.SpawningState_C.CheckForInitialSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpawningState_C::CheckForInitialSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.CheckForInitialSpawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawningState.SpawningState_C.EndSpawningState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpawningState_C::EndSpawningState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.EndSpawningState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpawningState.SpawningState_C.ExecuteUbergraph_SpawningState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawningState_C::ExecuteUbergraph_SpawningState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpawningState.SpawningState_C.ExecuteUbergraph_SpawningState"));

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
