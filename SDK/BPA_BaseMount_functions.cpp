// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_BaseMount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_BaseMount.BPA_BaseMount_C.UpdateFootStepSounds
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__bHidden__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::UpdateFootStepSounds(float bpp__DeltaSeconds__pf, bool bpp__bHidden__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.UpdateFootStepSounds"));

	struct
	{
		float                          bpp__DeltaSeconds__pf;
		bool                           bpp__bHidden__pf;
	} params = {};

	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	params.bpp__bHidden__pf = bpp__bHidden__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.UpdateBPFootsteps
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__footstepsxdeltaxseconds__pfTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::UpdateBPFootsteps(float bpp__footstepsxdeltaxseconds__pfTT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.UpdateBPFootsteps"));

	struct
	{
		float                          bpp__footstepsxdeltaxseconds__pfTT;
	} params = {};

	params.bpp__footstepsxdeltaxseconds__pfTT = bpp__footstepsxdeltaxseconds__pfTT;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.StirrupDebug
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::StirrupDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.StirrupDebug"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.ExecuteUbergraph_BPA_BaseMount_21
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::ExecuteUbergraph_BPA_BaseMount_21(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.ExecuteUbergraph_BPA_BaseMount_21"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.ExecuteUbergraph_BPA_BaseMount_1
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::ExecuteUbergraph_BPA_BaseMount_1(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.ExecuteUbergraph_BPA_BaseMount_1"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EventOnWantsToGallop
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bpp__bWantsToGallop__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::EventOnWantsToGallop(bool bpp__bWantsToGallop__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EventOnWantsToGallop"));

	struct
	{
		bool                           bpp__bWantsToGallop__pf;
	} params = {};

	params.bpp__bWantsToGallop__pf = bpp__bWantsToGallop__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EventOnStartDismount
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   bpp__Direction__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::EventOnStartDismount(const struct FName& bpp__Direction__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EventOnStartDismount"));

	struct
	{
		struct FName                   bpp__Direction__pf;
	} params = {};

	params.bpp__Direction__pf = bpp__Direction__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EventOnMovementStateChanged
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   bpp__InMovementState__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__InPreviousMovementState__pf (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::EventOnMovementStateChanged(const struct FName& bpp__InMovementState__pf, const struct FName& bpp__InPreviousMovementState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EventOnMovementStateChanged"));

	struct
	{
		struct FName                   bpp__InMovementState__pf;
		struct FName                   bpp__InPreviousMovementState__pf;
	} params = {};

	params.bpp__InMovementState__pf = bpp__InMovementState__pf;
	params.bpp__InPreviousMovementState__pf = bpp__InPreviousMovementState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EventOnMovementDirectionChanged
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UBPA_BaseMount_C::EventOnMovementDirectionChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EventOnMovementDirectionChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EventOnMounted
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   bpp__Direction__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::EventOnMounted(const struct FName& bpp__Direction__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EventOnMounted"));

	struct
	{
		struct FName                   bpp__Direction__pf;
	} params = {};

	params.bpp__Direction__pf = bpp__Direction__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EventOnInterrupt
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FAnimDamageParams       bpp__DamageEvent__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::EventOnInterrupt(const struct FAnimDamageParams& bpp__DamageEvent__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EventOnInterrupt"));

	struct
	{
		struct FAnimDamageParams       bpp__DamageEvent__pf__const;
	} params = {};

	params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EventOnHorseBump
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  bpp__OtherActor__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__Direction__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Angle__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__BumpVelocity__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__bRearImpact__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::EventOnHorseBump(class AActor* bpp__OtherActor__pf, const struct FName& bpp__Direction__pf, float bpp__Angle__pf, float bpp__BumpVelocity__pf, bool bpp__bRearImpact__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EventOnHorseBump"));

	struct
	{
		class AActor*                  bpp__OtherActor__pf;
		struct FName                   bpp__Direction__pf;
		float                          bpp__Angle__pf;
		float                          bpp__BumpVelocity__pf;
		bool                           bpp__bRearImpact__pf;
	} params = {};

	params.bpp__OtherActor__pf = bpp__OtherActor__pf;
	params.bpp__Direction__pf = bpp__Direction__pf;
	params.bpp__Angle__pf = bpp__Angle__pf;
	params.bpp__BumpVelocity__pf = bpp__BumpVelocity__pf;
	params.bpp__bRearImpact__pf = bpp__bRearImpact__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EventOnCombatStateChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__PreviousState__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__NewState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAttackInfo             bpp__EventAttackInfo__pf__const (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UCombatState*            bpp__InCombatState__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::EventOnCombatStateChanged(class AActor* bpp__Actor__pf, const struct FName& bpp__PreviousState__pf, const struct FName& bpp__NewState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf__const, class UCombatState* bpp__InCombatState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EventOnCombatStateChanged"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		struct FName                   bpp__PreviousState__pf;
		struct FName                   bpp__NewState__pf;
		struct FAttackInfo             bpp__EventAttackInfo__pf__const;
		class UCombatState*            bpp__InCombatState__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__PreviousState__pf = bpp__PreviousState__pf;
	params.bpp__NewState__pf = bpp__NewState__pf;
	params.bpp__EventAttackInfo__pf__const = bpp__EventAttackInfo__pf__const;
	params.bpp__InCombatState__pf = bpp__InCombatState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EventDamageNoInterrupt
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FAnimDamageParams       bpp__DamageEvent__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::EventDamageNoInterrupt(const struct FAnimDamageParams& bpp__DamageEvent__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EventDamageNoInterrupt"));

	struct
	{
		struct FAnimDamageParams       bpp__DamageEvent__pf__const;
	} params = {};

	params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_F61637ED4F7F0B7239646C90D7ECF35D
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_F61637ED4F7F0B7239646C90D7ECF35D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_F61637ED4F7F0B7239646C90D7ECF35D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_F137321E4E09FA498FD8B0812105DDF4
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_F137321E4E09FA498FD8B0812105DDF4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_F137321E4E09FA498FD8B0812105DDF4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_EDCBA8ED4BF4E67E26D2ACBF7EF8D127
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_EDCBA8ED4BF4E67E26D2ACBF7EF8D127()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_EDCBA8ED4BF4E67E26D2ACBF7EF8D127"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_E3D3958145FF339831B96BA5B1031F11
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_E3D3958145FF339831B96BA5B1031F11()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_E3D3958145FF339831B96BA5B1031F11"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_E1008A6946C0B1B1C389CD873537CBBA
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_E1008A6946C0B1B1C389CD873537CBBA()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_E1008A6946C0B1B1C389CD873537CBBA"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_DD58E13B4C86E4A26BD83392B432FD0A
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_DD58E13B4C86E4A26BD83392B432FD0A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_DD58E13B4C86E4A26BD83392B432FD0A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_D42BFC634ECC67C7E7E398883259B809
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_D42BFC634ECC67C7E7E398883259B809()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_D42BFC634ECC67C7E7E398883259B809"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_D37ACA76489402A07110B2A5E98FCAC3
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_D37ACA76489402A07110B2A5E98FCAC3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_D37ACA76489402A07110B2A5E98FCAC3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_BC1DFE884D492E06C5F38DBD6220A62A
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_BC1DFE884D492E06C5F38DBD6220A62A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_BC1DFE884D492E06C5F38DBD6220A62A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_A15F36754728FEAF8E0313BE71231F50
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_A15F36754728FEAF8E0313BE71231F50()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_A15F36754728FEAF8E0313BE71231F50"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_96115B0D41C446A34C34D69A5793CAD9
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_96115B0D41C446A34C34D69A5793CAD9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_96115B0D41C446A34C34D69A5793CAD9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_8DE421344EF19B7D0D4939A011ECDD6A
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_8DE421344EF19B7D0D4939A011ECDD6A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_8DE421344EF19B7D0D4939A011ECDD6A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_7E527E8B49C1F7B22929DAAF02800A2A
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_7E527E8B49C1F7B22929DAAF02800A2A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_7E527E8B49C1F7B22929DAAF02800A2A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_740C61E14FDED17BD21E419D3BD54CC2
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_740C61E14FDED17BD21E419D3BD54CC2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_740C61E14FDED17BD21E419D3BD54CC2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_6C06C9C441628997309C11BD46D30376
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_6C06C9C441628997309C11BD46D30376()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_6C06C9C441628997309C11BD46D30376"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_6B9AF92B4E31172CC80A8095E1821A82
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_6B9AF92B4E31172CC80A8095E1821A82()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_6B9AF92B4E31172CC80A8095E1821A82"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_5FED3113470F9BB7993814A31CB27B08
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_5FED3113470F9BB7993814A31CB27B08()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_5FED3113470F9BB7993814A31CB27B08"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_5E7216DA4E80D1E3CECE629788ED477C
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_5E7216DA4E80D1E3CECE629788ED477C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_5E7216DA4E80D1E3CECE629788ED477C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_56B547AD409B662DBF930691CB6A7AD7
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_56B547AD409B662DBF930691CB6A7AD7()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_56B547AD409B662DBF930691CB6A7AD7"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_501932774FBB0433A8369BB1AD30BA8A
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_501932774FBB0433A8369BB1AD30BA8A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_501932774FBB0433A8369BB1AD30BA8A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_440470F6438AE6DF2AD2EC80A4A48885
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_440470F6438AE6DF2AD2EC80A4A48885()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_440470F6438AE6DF2AD2EC80A4A48885"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_41F98D85481BF4D7F0E04B8C19A4FD81
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_41F98D85481BF4D7F0E04B8C19A4FD81()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_41F98D85481BF4D7F0E04B8C19A4FD81"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_3B5D085D4D7F519F4B311D81C80684D0
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_3B5D085D4D7F519F4B311D81C80684D0()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_3B5D085D4D7F519F4B311D81C80684D0"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_37E3F51045482DC80DFB37860C20D0A1
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_37E3F51045482DC80DFB37860C20D0A1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_37E3F51045482DC80DFB37860C20D0A1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_367FFB4249F6EDC8F91AB3AF0E056A77
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_367FFB4249F6EDC8F91AB3AF0E056A77()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_367FFB4249F6EDC8F91AB3AF0E056A77"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2D32EADF4A6C9485832753AA7C38BAD1
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2D32EADF4A6C9485832753AA7C38BAD1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2D32EADF4A6C9485832753AA7C38BAD1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2CAF8587492C32A016A62EB10282398E
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2CAF8587492C32A016A62EB10282398E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2CAF8587492C32A016A62EB10282398E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2C6303F84B3EA451410BF48649C9E9B6
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2C6303F84B3EA451410BF48649C9E9B6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_2C6303F84B3EA451410BF48649C9E9B6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_28F1ED3246694A864AFC06A79FCA18B7
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_28F1ED3246694A864AFC06A79FCA18B7()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_28F1ED3246694A864AFC06A79FCA18B7"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_270CF3EF4E8B6D27E33C80BA43669A6F
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_270CF3EF4E8B6D27E33C80BA43669A6F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_270CF3EF4E8B6D27E33C80BA43669A6F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1C8AD5F440B6E3EA2E833A8FCD5148E8
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1C8AD5F440B6E3EA2E833A8FCD5148E8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1C8AD5F440B6E3EA2E833A8FCD5148E8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1C271179447B639349AF9EB27A401660
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1C271179447B639349AF9EB27A401660()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1C271179447B639349AF9EB27A401660"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1A0AE994409B6F609301B79D38F0E42F
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1A0AE994409B6F609301B79D38F0E42F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_TransitionResult_1A0AE994409B6F609301B79D38F0E42F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FC6E6BAF4385FFD331D5ACA8254329E6
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FC6E6BAF4385FFD331D5ACA8254329E6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FC6E6BAF4385FFD331D5ACA8254329E6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FA3E9AF4442395773E74B6A1B38391CF
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FA3E9AF4442395773E74B6A1B38391CF()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FA3E9AF4442395773E74B6A1B38391CF"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D91FC0AF40002B244A6EF68A6CD55426
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D91FC0AF40002B244A6EF68A6CD55426()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D91FC0AF40002B244A6EF68A6CD55426"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D82A91924FB17653E78A86969FB6E982
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D82A91924FB17653E78A86969FB6E982()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D82A91924FB17653E78A86969FB6E982"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_7347FC7B413E45C5D7E04BAEAFCE8AF8
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_7347FC7B413E45C5D7E04BAEAFCE8AF8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_7347FC7B413E45C5D7E04BAEAFCE8AF8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_05AB1AFF4C252067604B1083122AA9E0
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_05AB1AFF4C252067604B1083122AA9E0()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_05AB1AFF4C252067604B1083122AA9E0"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_DFC697A94868FEB9CBBF008EBC0D31AD
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_DFC697A94868FEB9CBBF008EBC0D31AD()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_DFC697A94868FEB9CBBF008EBC0D31AD"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D14126864B46202BC1C454B2B88AE262
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D14126864B46202BC1C454B2B88AE262()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D14126864B46202BC1C454B2B88AE262"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D026EA1B49BE5142AA208D9E2652D5EF
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D026EA1B49BE5142AA208D9E2652D5EF()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D026EA1B49BE5142AA208D9E2652D5EF"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B4925C1F4BB594BFED01928F520D5F1B
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B4925C1F4BB594BFED01928F520D5F1B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B4925C1F4BB594BFED01928F520D5F1B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B112986B421E57A801067389601D4E6C
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B112986B421E57A801067389601D4E6C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B112986B421E57A801067389601D4E6C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A98AE2B540DEE4E50279EEB2E019BD6D
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A98AE2B540DEE4E50279EEB2E019BD6D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A98AE2B540DEE4E50279EEB2E019BD6D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A677D1F849DE6EEA5B94D885CEFE5F28
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A677D1F849DE6EEA5B94D885CEFE5F28()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A677D1F849DE6EEA5B94D885CEFE5F28"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_8632096B410FB8EEBF12E48764C56D55
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_8632096B410FB8EEBF12E48764C56D55()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_8632096B410FB8EEBF12E48764C56D55"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7CCCB0A149F2A971E20DC3B4678CE270
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7CCCB0A149F2A971E20DC3B4678CE270()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7CCCB0A149F2A971E20DC3B4678CE270"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_754F9E194852E4B6366D55B617AA82F7
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_754F9E194852E4B6366D55B617AA82F7()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_754F9E194852E4B6366D55B617AA82F7"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7236FF614CC01F0DA7C0E2B182AA4939
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7236FF614CC01F0DA7C0E2B182AA4939()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7236FF614CC01F0DA7C0E2B182AA4939"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_65DD35AD42235328042B9E8D0B69FA1A
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_65DD35AD42235328042B9E8D0B69FA1A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_65DD35AD42235328042B9E8D0B69FA1A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_47FEFBB04CE9A8FC7A3EE9849A642CA4
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_47FEFBB04CE9A8FC7A3EE9849A642CA4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_47FEFBB04CE9A8FC7A3EE9849A642CA4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_211D4F9A44F688F9BCDCB58D5992FE85
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_211D4F9A44F688F9BCDCB58D5992FE85()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_211D4F9A44F688F9BCDCB58D5992FE85"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_0EACC12C4CFD0D6AB0C287894DF52A21
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_0EACC12C4CFD0D6AB0C287894DF52A21()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_0EACC12C4CFD0D6AB0C287894DF52A21"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_E245939D479B5C9EAC1DB98632C055BC
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_E245939D479B5C9EAC1DB98632C055BC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_E245939D479B5C9EAC1DB98632C055BC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_84A9957A4FBCD05622F85B8BC4199029
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_84A9957A4FBCD05622F85B8BC4199029()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_84A9957A4FBCD05622F85B8BC4199029"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_8059DD964A87D7A0C63912A7F3B2C1BA
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_8059DD964A87D7A0C63912A7F3B2C1BA()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_8059DD964A87D7A0C63912A7F3B2C1BA"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_7D12EADD48363F95B6605A94D42AED23
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_7D12EADD48363F95B6605A94D42AED23()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_7D12EADD48363F95B6605A94D42AED23"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_08475E704CD94B885FAD409FA935ED55
// (FUNC_Native, FUNC_Public)

void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_08475E704CD94B885FAD409FA935ED55()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_08475E704CD94B885FAD409FA935ED55"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.BlueprintUpdateAnimation
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// float                          bpp__DeltaTimeX__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          bpp__DeltaTimeX__pf;
	} params = {};

	params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.BlueprintBeginPlay
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UBPA_BaseMount_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.BlueprintBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_Trot_StartStop_Finished
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_Trot_StartStop_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_Trot_StartStop_Finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_strafeStart_End
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_strafeStart_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_strafeStart_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_hitDamage_End
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_hitDamage_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_hitDamage_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_GallopStart_End
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_GallopStart_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_GallopStart_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_fully_Strafe_Stop
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_fully_Strafe_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_fully_Strafe_Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_fully_Idle
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_fully_Idle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_fully_Idle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_enter_WalkStrafe
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_enter_WalkStrafe()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_enter_WalkStrafe"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_enter_TrotStrafe
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_enter_TrotStrafe()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_enter_TrotStrafe"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_enter_Strafe_Stop
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_enter_Strafe_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_enter_Strafe_Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_enter_idle
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_enter_idle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_enter_idle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_Brake_End
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBPA_BaseMount_C::AnimNotify_Brake_End()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_Brake_End"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_BaseMount.BPA_BaseMount_C.AnimGraph
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPoseLink               bpp__AnimGraph__pf             (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UBPA_BaseMount_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_BaseMount.BPA_BaseMount_C.AnimGraph"));

	struct
	{
		struct FPoseLink               bpp__AnimGraph__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
