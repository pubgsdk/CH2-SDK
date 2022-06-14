// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_Chicken_V2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UBPA_Chicken_V2_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_8EE7A0484F17BF85B9433CBCF9E763FD
// (FUNC_BlueprintEvent)

void UBPA_Chicken_V2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_8EE7A0484F17BF85B9433CBCF9E763FD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_8EE7A0484F17BF85B9433CBCF9E763FD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_23E7CF5D461428EB24ABC1A58C6EB60E
// (FUNC_BlueprintEvent)

void UBPA_Chicken_V2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_23E7CF5D461428EB24ABC1A58C6EB60E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_23E7CF5D461428EB24ABC1A58C6EB60E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Chicken_V2_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params = {};

	params.DeltaTimeX = DeltaTimeX;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.Montage blending out
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInterrupted                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPA_Chicken_V2_C::Montage_blending_out(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.Montage blending out"));

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params = {};

	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.Ragdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_Chicken_V2_C::Ragdoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.Ragdoll"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_Chicken_V2_C::CustomEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.CustomEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_Chicken_V2_C::CustomEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.CustomEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBPA_Chicken_V2_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.Do Ragdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_Chicken_V2_C::Do_Ragdoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.Do Ragdoll"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimNotify_idle_end
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_Chicken_V2_C::AnimNotify_idle_end()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimNotify_idle_end"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimNotify_death_ragdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_Chicken_V2_C::AnimNotify_death_ragdoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimNotify_death_ragdoll"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Chicken_V2.BPA_Chicken_V2_C.ExecuteUbergraph_BPA_Chicken_V2
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Chicken_V2_C::ExecuteUbergraph_BPA_Chicken_V2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Chicken_V2.BPA_Chicken_V2_C.ExecuteUbergraph_BPA_Chicken_V2"));

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
