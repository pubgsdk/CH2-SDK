// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BaseBreakableGate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ThwackOnHit
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BaseBreakableGate_C::ThwackOnHit(const struct FDamageTakenEvent& DamageTakenEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ThwackOnHit"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.Destroy Constructable
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BaseBreakableGate_C::Destroy_Constructable(class AActor* DamageCauser, const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.Destroy Constructable"));

	struct
	{
		class AActor*                  DamageCauser;
		struct FHitResult              HitResult;
	} params = {};

	params.DamageCauser = DamageCauser;
	params.HitResult = HitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.Trigger On Gate Broken delegate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Destroyer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::Trigger_On_Gate_Broken_delegate(class ATBLCharacter* Destroyer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.Trigger On Gate Broken delegate"));

	struct
	{
		class ATBLCharacter*           Destroyer;
	} params = {};

	params.Destroyer = Destroyer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.IsValidDamagingFaction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_BaseBreakableGate_C::IsValidDamagingFaction(class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.IsValidDamagingFaction"));

	struct
	{
		class AActor*                  DamageCauser;
		bool                           ReturnValue;
	} params = {};

	params.DamageCauser = DamageCauser;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.Get Owner Faction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Output_Get                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::Get_Owner_Faction(EFaction* Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.Get Owner Faction"));

	struct
	{
		EFaction                       Output_Get;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.SetGateState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BaseBreakableGate_C::SetGateState(const struct FDamageTakenEvent& DamageTakenEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.SetGateState"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ToggleDoorCollision
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BaseBreakableGate_C::ToggleDoorCollision(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ToggleDoorCollision"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateBreakableState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EBreakableState>   Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::UpdateBreakableState(TEnumAsByte<EBreakableState> Selection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateBreakableState"));

	struct
	{
		TEnumAsByte<EBreakableState>   Selection;
	} params = {};

	params.Selection = Selection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.EnableChildComponents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BaseBreakableGate_C::EnableChildComponents(class USceneComponent* ParentComponent, bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.EnableChildComponents"));

	struct
	{
		class USceneComponent*         ParentComponent;
		bool                           Enable;
	} params = {};

	params.ParentComponent = ParentComponent;
	params.Enable = Enable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bForce                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BaseBreakableGate_C::OnGateStateChanged(bool bForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateStateChanged"));

	struct
	{
		bool                           bForce;
	} params = {};

	params.bForce = bForce;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnRep_GateState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BaseBreakableGate_C::OnRep_GateState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnRep_GateState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnRep_BreakableState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BaseBreakableGate_C::OnRep_BreakableState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnRep_BreakableState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::UpdateMesh(class UStaticMesh* NewMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateMesh"));

	struct
	{
		class UStaticMesh*             NewMesh;
	} params = {};

	params.NewMesh = NewMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BaseBreakableGate_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BaseBreakableGate_C::BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature(const struct FDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature"));

	struct
	{
		struct FDamageTakenEvent       Event;
	} params = {};

	params.Event = Event;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.DamageFx
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BaseBreakableGate_C::DamageFx(const struct FDamageTakenEvent& DamageTakenEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.DamageFx"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.KilledFx
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BaseBreakableGate_C::KilledFx(const struct FDamageTakenEvent& DamageTakenEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.KilledFx"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::UpdateState(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateState"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_5_StatHealthChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Initiator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::BndEvt__Stats_K2Node_ComponentBoundEvent_5_StatHealthChangedSignature__DelegateSignature(float Amount, class AActor* Initiator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_5_StatHealthChangedSignature__DelegateSignature"));

	struct
	{
		float                          Amount;
		class AActor*                  Initiator;
	} params = {};

	params.Amount = Amount;
	params.Initiator = Initiator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.InitializeState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::InitializeState(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.InitializeState"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ForceOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGateDirection>    OpenGateDirection              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::ForceOpened(TEnumAsByte<EGateDirection> OpenGateDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ForceOpened"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ManuallyOpenGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGateDirection>    Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::ManuallyOpenGate(TEnumAsByte<EGateDirection> Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ManuallyOpenGate"));

	struct
	{
		TEnumAsByte<EGateDirection>    Direction;
	} params = {};

	params.Direction = Direction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OpenGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGateDirection>    OpenGateDirection              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::OpenGate(TEnumAsByte<EGateDirection> OpenGateDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OpenGate"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.RemoveCollisionOnMeshes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BaseBreakableGate_C::RemoveCollisionOnMeshes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.RemoveCollisionOnMeshes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_BaseBreakableGate_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ForceBrokenState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BaseBreakableGate_C::ForceBrokenState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ForceBrokenState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABP_BaseBreakableGate_C::BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BreakableStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EBreakableState>   BreakableState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::BreakableStateChanged(TEnumAsByte<EBreakableState> BreakableState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BreakableStateChanged"));

	struct
	{
		TEnumAsByte<EBreakableState>   BreakableState;
	} params = {};

	params.BreakableState = BreakableState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.SetActorInvulnerable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BaseBreakableGate_C::SetActorInvulnerable(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.SetActorInvulnerable"));

	struct
	{
		bool                           Enable;
	} params = {};

	params.Enable = Enable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ChangeCanBeDamaged
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanBeDamaged                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BaseBreakableGate_C::ChangeCanBeDamaged(bool CanBeDamaged)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ChangeCanBeDamaged"));

	struct
	{
		bool                           CanBeDamaged;
	} params = {};

	params.CanBeDamaged = CanBeDamaged;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnPushableBeginOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UPushableComponent*      Pushable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::OnPushableBeginOverlap(class UPushableComponent* Pushable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnPushableBeginOverlap"));

	struct
	{
		class UPushableComponent*      Pushable;
	} params = {};

	params.Pushable = Pushable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ManuallyCloseGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BaseBreakableGate_C::ManuallyCloseGate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ManuallyCloseGate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ExecuteUbergraph_BP_BaseBreakableGate
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::ExecuteUbergraph_BP_BaseBreakableGate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ExecuteUbergraph_BP_BaseBreakableGate"));

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


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateBroken__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ABP_BaseBreakableGate_C* Gate                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::OnGateBroken__DelegateSignature(class ATBLCharacter* Player, class ABP_BaseBreakableGate_C* Gate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateBroken__DelegateSignature"));

	struct
	{
		class ATBLCharacter*           Player;
		class ABP_BaseBreakableGate_C* Gate;
	} params = {};

	params.Player = Player;
	params.Gate = Gate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateDestroyed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Destroyer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::OnGateDestroyed__DelegateSignature(class ATBLCharacter* Destroyer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateDestroyed__DelegateSignature"));

	struct
	{
		class ATBLCharacter*           Destroyer;
	} params = {};

	params.Destroyer = Destroyer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateOpened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BaseBreakableGate_C::OnGateOpened__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateOpened__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateDamaged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BaseBreakableGate_C::OnGateDamaged__DelegateSignature(float Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateDamaged__DelegateSignature"));

	struct
	{
		float                          Damage;
	} params = {};

	params.Damage = Damage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
