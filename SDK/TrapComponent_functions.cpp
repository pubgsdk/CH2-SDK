// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TrapComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TrapComponent.TrapComponent_C.TrackDamageDealt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrapComponent_C::TrackDamageDealt(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.TrackDamageDealt"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.AttemptDamageActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTrapComponent_C::AttemptDamageActor(class AActor* Actor, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.AttemptDamageActor"));

	struct
	{
		class AActor*                  Actor;
		bool                           Success;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TrapComponent.TrapComponent_C.GetTimeSinceActivation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UTrapComponent_C::GetTimeSinceActivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.GetTimeSinceActivation"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TrapComponent.TrapComponent_C.AttemptResetTrap
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTrapComponent_C::AttemptResetTrap(bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.AttemptResetTrap"));

	struct
	{
		bool                           Success;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TrapComponent.TrapComponent_C.AttemptActivateTrap
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTrapComponent_C::AttemptActivateTrap(bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.AttemptActivateTrap"));

	struct
	{
		bool                           Success;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TrapComponent.TrapComponent_C.AttemptInitiateTrap
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTrapComponent_C::AttemptInitiateTrap(bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.AttemptInitiateTrap"));

	struct
	{
		bool                           Success;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TrapComponent.TrapComponent_C.InitiateTrap
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::InitiateTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.InitiateTrap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.ActivateTrap
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::ActivateTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.ActivateTrap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.StartResetTrap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::StartResetTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.StartResetTrap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.EndActivation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::EndActivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.EndActivation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.TrapEndActivated
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::TrapEndActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.TrapEndActivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.ReplicateResetTrap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::ReplicateResetTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.ReplicateResetTrap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.TrapReset
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::TrapReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.TrapReset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.TrapResetStarted
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::TrapResetStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.TrapResetStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrapComponent_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.ExecuteUbergraph_TrapComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrapComponent_C::ExecuteUbergraph_TrapComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.ExecuteUbergraph_TrapComponent"));

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


// Function TrapComponent.TrapComponent_C.OnTrapResetStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::OnTrapResetStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.OnTrapResetStarted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.OnTrapEndActivated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::OnTrapEndActivated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.OnTrapEndActivated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.OnTrapReset__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::OnTrapReset__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.OnTrapReset__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.OnTrapActivated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::OnTrapActivated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.OnTrapActivated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapComponent.TrapComponent_C.OnTrapInitiated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapComponent_C::OnTrapInitiated__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapComponent.TrapComponent_C.OnTrapInitiated__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
