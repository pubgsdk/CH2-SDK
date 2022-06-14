// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_Weapon.BPA_Weapon_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UBPA_Weapon_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.AnimGraph"));

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


// Function BPA_Weapon.BPA_Weapon_C.OnNotifyEnd_5F65EF304857BAD353FC03AA3A48AE87
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::OnNotifyEnd_5F65EF304857BAD353FC03AA3A48AE87(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.OnNotifyEnd_5F65EF304857BAD353FC03AA3A48AE87"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.OnNotifyBegin_5F65EF304857BAD353FC03AA3A48AE87
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::OnNotifyBegin_5F65EF304857BAD353FC03AA3A48AE87(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.OnNotifyBegin_5F65EF304857BAD353FC03AA3A48AE87"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.OnInterrupted_5F65EF304857BAD353FC03AA3A48AE87
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::OnInterrupted_5F65EF304857BAD353FC03AA3A48AE87(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.OnInterrupted_5F65EF304857BAD353FC03AA3A48AE87"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.OnBlendOut_5F65EF304857BAD353FC03AA3A48AE87
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::OnBlendOut_5F65EF304857BAD353FC03AA3A48AE87(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.OnBlendOut_5F65EF304857BAD353FC03AA3A48AE87"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.OnCompleted_5F65EF304857BAD353FC03AA3A48AE87
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::OnCompleted_5F65EF304857BAD353FC03AA3A48AE87(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.OnCompleted_5F65EF304857BAD353FC03AA3A48AE87"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.OnNotifyEnd_0D37C2FD43EE4809B08F48A3EF3BE365
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::OnNotifyEnd_0D37C2FD43EE4809B08F48A3EF3BE365(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.OnNotifyEnd_0D37C2FD43EE4809B08F48A3EF3BE365"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.OnNotifyBegin_0D37C2FD43EE4809B08F48A3EF3BE365
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::OnNotifyBegin_0D37C2FD43EE4809B08F48A3EF3BE365(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.OnNotifyBegin_0D37C2FD43EE4809B08F48A3EF3BE365"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.OnInterrupted_0D37C2FD43EE4809B08F48A3EF3BE365
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::OnInterrupted_0D37C2FD43EE4809B08F48A3EF3BE365(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.OnInterrupted_0D37C2FD43EE4809B08F48A3EF3BE365"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.OnBlendOut_0D37C2FD43EE4809B08F48A3EF3BE365
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::OnBlendOut_0D37C2FD43EE4809B08F48A3EF3BE365(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.OnBlendOut_0D37C2FD43EE4809B08F48A3EF3BE365"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.OnCompleted_0D37C2FD43EE4809B08F48A3EF3BE365
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::OnCompleted_0D37C2FD43EE4809B08F48A3EF3BE365(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.OnCompleted_0D37C2FD43EE4809B08F48A3EF3BE365"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_322C0E4248B876757229F28A45D42E2E
// (FUNC_BlueprintEvent)

void UBPA_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_322C0E4248B876757229F28A45D42E2E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_322C0E4248B876757229F28A45D42E2E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_E330FA0C4EC5291710335DB6D41528ED
// (FUNC_BlueprintEvent)

void UBPA_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_E330FA0C4EC5291710335DB6D41528ED()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_E330FA0C4EC5291710335DB6D41528ED"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.BlueprintUpdateAnimation"));

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


// Function BPA_Weapon.BPA_Weapon_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBPA_Weapon_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.EventOnCombatStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::EventOnCombatStateChanged(const struct FName& PreviousState, const struct FName& NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.EventOnCombatStateChanged"));

	struct
	{
		struct FName                   PreviousState;
		struct FName                   NewState;
	} params = {};

	params.PreviousState = PreviousState;
	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_Weapon.BPA_Weapon_C.ExecuteUbergraph_BPA_Weapon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPA_Weapon_C::ExecuteUbergraph_BPA_Weapon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_Weapon.BPA_Weapon_C.ExecuteUbergraph_BPA_Weapon"));

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
