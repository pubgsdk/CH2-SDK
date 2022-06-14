// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_AutomaticSpawnDoorDouble_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.AreCharactersInOpenCloseBox
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CharactersPresent              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABPA_AutomaticSpawnDoorDouble_C::AreCharactersInOpenCloseBox(bool* CharactersPresent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.AreCharactersInOpenCloseBox"));

	struct
	{
		bool                           CharactersPresent;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CharactersPresent != nullptr)
		*CharactersPresent = params.CharactersPresent;
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABPA_AutomaticSpawnDoorDouble_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABPA_AutomaticSpawnDoorDouble_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.BndEvt__OpenClose_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABPA_AutomaticSpawnDoorDouble_C::BndEvt__OpenClose_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.BndEvt__OpenClose_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.BndEvt__OpenClose_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_AutomaticSpawnDoorDouble_C::BndEvt__OpenClose_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.BndEvt__OpenClose_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.OnGateClosedEvent_SimpleDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_AutomaticSpawnDoorDouble_C::OnGateClosedEvent_SimpleDoor(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.OnGateClosedEvent_SimpleDoor"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.OnGateOpenedEvent_SimpleDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_AutomaticSpawnDoorDouble_C::OnGateOpenedEvent_SimpleDoor(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.OnGateOpenedEvent_SimpleDoor"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.DisableGateClosing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABPA_AutomaticSpawnDoorDouble_C::DisableGateClosing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.DisableGateClosing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.BndEvt__PermanentGate_K2Node_ComponentBoundEvent_4_GateOpened__DelegateSignature
// (FUNC_BlueprintEvent)

void ABPA_AutomaticSpawnDoorDouble_C::BndEvt__PermanentGate_K2Node_ComponentBoundEvent_4_GateOpened__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.BndEvt__PermanentGate_K2Node_ComponentBoundEvent_4_GateOpened__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.BndEvt__PermanentGate_K2Node_ComponentBoundEvent_5_GateClosed__DelegateSignature
// (FUNC_BlueprintEvent)

void ABPA_AutomaticSpawnDoorDouble_C::BndEvt__PermanentGate_K2Node_ComponentBoundEvent_5_GateClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.BndEvt__PermanentGate_K2Node_ComponentBoundEvent_5_GateClosed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.PermanentlyOpenDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABPA_AutomaticSpawnDoorDouble_C::PermanentlyOpenDoor(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.PermanentlyOpenDoor"));

	struct
	{
		bool                           Open;
	} params = {};

	params.Open = Open;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.EnableGateClosing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABPA_AutomaticSpawnDoorDouble_C::EnableGateClosing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.EnableGateClosing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.ExecuteUbergraph_BPA_AutomaticSpawnDoorDouble
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_AutomaticSpawnDoorDouble_C::ExecuteUbergraph_BPA_AutomaticSpawnDoorDouble(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_AutomaticSpawnDoorDouble.BPA_AutomaticSpawnDoorDouble_C.ExecuteUbergraph_BPA_AutomaticSpawnDoorDouble"));

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
