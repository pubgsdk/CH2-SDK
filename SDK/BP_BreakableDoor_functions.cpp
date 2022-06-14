// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BreakableDoor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BreakableDoor.BP_BreakableDoor_C.OnRep_DoorState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::OnRep_DoorState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.OnRep_DoorState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.GetGroundOffset
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Forward                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableDoor_C::GetGroundOffset(bool Forward, float* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.GetGroundOffset"));

	struct
	{
		bool                           Forward;
		float                          _;
	} params = {};

	params.Forward = Forward;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.KilledTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::KilledTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.KilledTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.KilledTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::KilledTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.KilledTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.KilledTimeline__NewTrack_1__EventFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::KilledTimeline__NewTrack_1__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.KilledTimeline__NewTrack_1__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.DamageTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::DamageTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.DamageTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.DamageTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::DamageTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.DamageTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.KilledFx
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BreakableDoor_C::KilledFx(const struct FDamageTakenEvent& DamageTakenEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.KilledFx"));

	struct
	{
		struct FDamageTakenEvent       DamageTakenEvent;
	} params = {};

	params.DamageTakenEvent = DamageTakenEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.DamageFx
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BreakableDoor_C::DamageFx(const struct FDamageTakenEvent& DamageTakenEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.DamageFx"));

	struct
	{
		struct FDamageTakenEvent       DamageTakenEvent;
	} params = {};

	params.DamageTakenEvent = DamageTakenEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.ForceOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGateDirection>    OpenGateDirection              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableDoor_C::ForceOpened(TEnumAsByte<EGateDirection> OpenGateDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.ForceOpened"));

	struct
	{
		TEnumAsByte<EGateDirection>    OpenGateDirection;
	} params = {};

	params.OpenGateDirection = OpenGateDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.OpenGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGateDirection>    OpenGateDirection              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableDoor_C::OpenGate(TEnumAsByte<EGateDirection> OpenGateDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.OpenGate"));

	struct
	{
		TEnumAsByte<EGateDirection>    OpenGateDirection;
	} params = {};

	params.OpenGateDirection = OpenGateDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.TriggerFall
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Forward                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BreakableDoor_C::TriggerFall(bool Forward)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.TriggerFall"));

	struct
	{
		bool                           Forward;
	} params = {};

	params.Forward = Forward;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.DestroyDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::DestroyDoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.DestroyDoor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableDoor_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature"));

	struct
	{
		class APawn*                   Pawn;
		class UInteractableComponent*  Interactable;
	} params = {};

	params.Pawn = Pawn;
	params.Interactable = Interactable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.OpenDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BreakableDoor_C::OpenDoor(bool Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.OpenDoor"));

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


// Function BP_BreakableDoor.BP_BreakableDoor_C.SetDoorOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakableDoor_C::SetDoorOpened()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.SetDoorOpened"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_KilledSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABP_BreakableDoor_C::BndEvt__Stats_K2Node_ComponentBoundEvent_1_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_KilledSignature__DelegateSignature"));

	struct
	{
		struct FDeathDamageTakenEvent  Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.ToggleDoorCollision
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BreakableDoor_C::ToggleDoorCollision(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.ToggleDoorCollision"));

	struct
	{
		bool                           Enabled;
	} params = {};

	params.Enabled = Enabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableDoor.BP_BreakableDoor_C.ExecuteUbergraph_BP_BreakableDoor
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableDoor_C::ExecuteUbergraph_BP_BreakableDoor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableDoor.BP_BreakableDoor_C.ExecuteUbergraph_BP_BreakableDoor"));

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
