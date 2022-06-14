// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ControlRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlRig.ControlRigComponent.OnPreInitialize
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UControlRigComponent::OnPreInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.OnPreInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.OnPreEvaluate
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UControlRigComponent::OnPreEvaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.OnPreEvaluate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UControlRigComponent::OnPostInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.OnPostInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.OnPostEvaluate
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UControlRigComponent::OnPostEvaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.OnPostEvaluate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.BP_GetControlRig
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UControlRig*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UControlRig* UControlRigComponent::BP_GetControlRig()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.BP_GetControlRig"));

	struct
	{
		class UControlRig*             ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
