// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "A_UseInteractable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_UseInteractable.A_UseInteractable_C.Get Location or Actor I Want To Move To
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class AActor*                  TargetActor                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 TargetLocation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAIController*           Controller                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UA_UseInteractable_C::Get_Location_or_Actor_I_Want_To_Move_To(const struct FUtilityAI_Context& C, class AActor** TargetActor, struct FVector* TargetLocation, class AAIController** Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_UseInteractable.A_UseInteractable_C.Get Location or Actor I Want To Move To"));

	struct
	{
		struct FUtilityAI_Context      C;
		class AActor*                  TargetActor;
		struct FVector                 TargetLocation;
		class AAIController*           Controller;
	} params = {};

	params.C = C;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TargetActor != nullptr)
		*TargetActor = params.TargetActor;
	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function A_UseInteractable.A_UseInteractable_C.IsInRangeOfTarget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// float                          AcceptanceMultiplier           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInRange                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UA_UseInteractable_C::IsInRangeOfTarget(float AcceptanceMultiplier, bool* bInRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_UseInteractable.A_UseInteractable_C.IsInRangeOfTarget"));

	struct
	{
		float                          AcceptanceMultiplier;
		bool                           bInRange;
	} params = {};

	params.AcceptanceMultiplier = AcceptanceMultiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bInRange != nullptr)
		*bInRange = params.bInRange;
}


// Function A_UseInteractable.A_UseInteractable_C.OnMoveFinished_C60871134FF654389219A2AFBCB9B884
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAIController*           AIController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UA_UseInteractable_C::OnMoveFinished_C60871134FF654389219A2AFBCB9B884(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_UseInteractable.A_UseInteractable_C.OnMoveFinished_C60871134FF654389219A2AFBCB9B884"));

	struct
	{
		TEnumAsByte<EPathFollowingResult> Result;
		class AAIController*           AIController;
	} params = {};

	params.Result = Result;
	params.AIController = AIController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function A_UseInteractable.A_UseInteractable_C.OnRequestFailed_C60871134FF654389219A2AFBCB9B884
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UA_UseInteractable_C::OnRequestFailed_C60871134FF654389219A2AFBCB9B884()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_UseInteractable.A_UseInteractable_C.OnRequestFailed_C60871134FF654389219A2AFBCB9B884"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function A_UseInteractable.A_UseInteractable_C.On Move is finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UA_UseInteractable_C::On_Move_is_finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_UseInteractable.A_UseInteractable_C.On Move is finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function A_UseInteractable.A_UseInteractable_C.PerformAction
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UA_UseInteractable_C::PerformAction(const struct FUtilityAI_Context& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_UseInteractable.A_UseInteractable_C.PerformAction"));

	struct
	{
		struct FUtilityAI_Context      C;
	} params = {};

	params.C = C;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function A_UseInteractable.A_UseInteractable_C.CompleteAction
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UA_UseInteractable_C::CompleteAction(const struct FUtilityAI_Context& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_UseInteractable.A_UseInteractable_C.CompleteAction"));

	struct
	{
		struct FUtilityAI_Context      C;
	} params = {};

	params.C = C;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function A_UseInteractable.A_UseInteractable_C.OnInteractableStoppedBeingHeld_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInteractableComponent*  InteractableUsed               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UA_UseInteractable_C::OnInteractableStoppedBeingHeld_Event_1(class UInteractableComponent* InteractableUsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_UseInteractable.A_UseInteractable_C.OnInteractableStoppedBeingHeld_Event_1"));

	struct
	{
		class UInteractableComponent*  InteractableUsed;
	} params = {};

	params.InteractableUsed = InteractableUsed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function A_UseInteractable.A_UseInteractable_C.ExecuteUbergraph_A_UseInteractable
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UA_UseInteractable_C::ExecuteUbergraph_A_UseInteractable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_UseInteractable.A_UseInteractable_C.ExecuteUbergraph_A_UseInteractable"));

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
