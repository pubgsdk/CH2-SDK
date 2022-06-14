// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_BaseChar_Customization_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UBPA_BaseChar_Customization_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.AnimGraph"));

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


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_BlendBoneByChannel_0D63C3EC474C1C3CE55E93A113E4CF90
// (FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_BlendBoneByChannel_0D63C3EC474C1C3CE55E93A113E4CF90()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_BlendBoneByChannel_0D63C3EC474C1C3CE55E93A113E4CF90"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_RotationMultiplier_19952B4149691119AA4CA48D8F5528D9
// (FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_RotationMultiplier_19952B4149691119AA4CA48D8F5528D9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_RotationMultiplier_19952B4149691119AA4CA48D8F5528D9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_SequencePlayer_DF64BDD348F216FA2D214499D85E3173
// (FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_SequencePlayer_DF64BDD348F216FA2D214499D85E3173()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_SequencePlayer_DF64BDD348F216FA2D214499D85E3173"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_TransitionResult_8B1F72CA4B3FB5DA91E364A1B46C4916
// (FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_TransitionResult_8B1F72CA4B3FB5DA91E364A1B46C4916()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_TransitionResult_8B1F72CA4B3FB5DA91E364A1B46C4916"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_RigidBody_983A56E346564F6D9C754D9985E22E86
// (FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_RigidBody_983A56E346564F6D9C754D9985E22E86()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_RigidBody_983A56E346564F6D9C754D9985E22E86"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.PoseUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Pose                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_BaseChar_Customization_C::PoseUpdate(const struct FName& Pose)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.PoseUpdate"));

	struct
	{
		struct FName                   Pose;
	} params = {};

	params.Pose = Pose;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ItemChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::ItemChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ItemChange"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ActivateBattlecry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::ActivateBattlecry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ActivateBattlecry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ActivateTurn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::ActivateTurn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ActivateTurn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ActivateFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::ActivateFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ActivateFocus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ItemUnequipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::ItemUnequipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ItemUnequipped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.AnimNotify_FullBody_On
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::AnimNotify_FullBody_On()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.AnimNotify_FullBody_On"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.AnimNotify_FullBody_Off
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::AnimNotify_FullBody_Off()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.AnimNotify_FullBody_Off"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.Deactivate Focus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::Deactivate_Focus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.Deactivate Focus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.BlueprintBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.BlueprintBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.OnCustomized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::OnCustomized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.OnCustomized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.AnimNotify_anim_blink_eye
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::AnimNotify_anim_blink_eye()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.AnimNotify_anim_blink_eye"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.BlueprintOnAnimationSetChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBPA_BaseChar_Customization_C::BlueprintOnAnimationSetChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.BlueprintOnAnimationSetChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ExecuteUbergraph_BPA_BaseChar_Customization
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_BaseChar_Customization_C::ExecuteUbergraph_BPA_BaseChar_Customization(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseChar_Customization.BPA_BaseChar_Customization_C.ExecuteUbergraph_BPA_BaseChar_Customization"));

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
