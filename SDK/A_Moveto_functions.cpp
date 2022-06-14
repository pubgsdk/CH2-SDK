// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "A_Moveto_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Moveto.A_MoveTo_C.Get Location or Actor I Want To Move To
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class AActor*                  TargetActor                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 TargetLocation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAIController*           Controller                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UA_MoveTo_C::Get_Location_or_Actor_I_Want_To_Move_To(const struct FUtilityAI_Context& C, class AActor** TargetActor, struct FVector* TargetLocation, class AAIController** Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_Moveto.A_MoveTo_C.Get Location or Actor I Want To Move To"));

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


// Function A_Moveto.A_MoveTo_C.OnMoveFinished_465269984326E120B547178314624ED9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AAIController*           AIController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UA_MoveTo_C::OnMoveFinished_465269984326E120B547178314624ED9(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_Moveto.A_MoveTo_C.OnMoveFinished_465269984326E120B547178314624ED9"));

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


// Function A_Moveto.A_MoveTo_C.OnRequestFailed_465269984326E120B547178314624ED9
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UA_MoveTo_C::OnRequestFailed_465269984326E120B547178314624ED9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_Moveto.A_MoveTo_C.OnRequestFailed_465269984326E120B547178314624ED9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function A_Moveto.A_MoveTo_C.PerformAction
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UA_MoveTo_C::PerformAction(const struct FUtilityAI_Context& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_Moveto.A_MoveTo_C.PerformAction"));

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


// Function A_Moveto.A_MoveTo_C.CompleteAction
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FUtilityAI_Context      C                              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UA_MoveTo_C::CompleteAction(const struct FUtilityAI_Context& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_Moveto.A_MoveTo_C.CompleteAction"));

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


// Function A_Moveto.A_MoveTo_C.Finish the move
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UA_MoveTo_C::Finish_the_move()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_Moveto.A_MoveTo_C.Finish the move"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function A_Moveto.A_MoveTo_C.On Move is finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UA_MoveTo_C::On_Move_is_finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_Moveto.A_MoveTo_C.On Move is finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function A_Moveto.A_MoveTo_C.ExecuteUbergraph_A_MoveTo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UA_MoveTo_C::ExecuteUbergraph_A_MoveTo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function A_Moveto.A_MoveTo_C.ExecuteUbergraph_A_MoveTo"));

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
