// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FenceSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FenceSpawner.FenceSpawner_C.GetSpawnLocationAndComponent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              OutTransform                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          SpawnRadius                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SpawnHalfHeight                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USceneComponent* AFenceSpawner_C::GetSpawnLocationAndComponent(int Index, struct FTransform* OutTransform, float* SpawnRadius, float* SpawnHalfHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FenceSpawner.FenceSpawner_C.GetSpawnLocationAndComponent"));

	struct
	{
		int                            Index;
		struct FTransform              OutTransform;
		float                          SpawnRadius;
		float                          SpawnHalfHeight;
		class USceneComponent*         ReturnValue;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
	if (SpawnRadius != nullptr)
		*SpawnRadius = params.SpawnRadius;
	if (SpawnHalfHeight != nullptr)
		*SpawnHalfHeight = params.SpawnHalfHeight;

	return params.ReturnValue;
}


// Function FenceSpawner.FenceSpawner_C.GetMaxPlayerCount
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int AFenceSpawner_C::GetMaxPlayerCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FenceSpawner.FenceSpawner_C.GetMaxPlayerCount"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FenceSpawner.FenceSpawner_C.DoSpawnAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFenceSpawner_C::DoSpawnAnimation(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FenceSpawner.FenceSpawner_C.DoSpawnAnimation"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FenceSpawner.FenceSpawner_C.Cinematics_StartAllowingControl
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFenceSpawner_C::Cinematics_StartAllowingControl(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FenceSpawner.FenceSpawner_C.Cinematics_StartAllowingControl"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FenceSpawner.FenceSpawner_C.OnMovementStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   MovementState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFenceSpawner_C::OnMovementStateChanged(const struct FName& MovementState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FenceSpawner.FenceSpawner_C.OnMovementStateChanged"));

	struct
	{
		struct FName                   MovementState;
	} params = {};

	params.MovementState = MovementState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FenceSpawner.FenceSpawner_C.ExecuteUbergraph_FenceSpawner
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFenceSpawner_C::ExecuteUbergraph_FenceSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FenceSpawner.FenceSpawner_C.ExecuteUbergraph_FenceSpawner"));

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
