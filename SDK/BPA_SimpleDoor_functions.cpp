// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPA_SimpleDoor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPA_SimpleDoor.BPA_SimpleDoor_C.PlaySound
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AKEvent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           StopLastPlayingSound           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABPA_SimpleDoor_C::PlaySound(class UAkAudioEvent* AKEvent, bool StopLastPlayingSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.PlaySound"));

	struct
	{
		class UAkAudioEvent*           AKEvent;
		bool                           StopLastPlayingSound;
	} params = {};

	params.AKEvent = AKEvent;
	params.StopLastPlayingSound = StopLastPlayingSound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__Gate_K2Node_ComponentBoundEvent_0_GateOpened__DelegateSignature
// (FUNC_BlueprintEvent)

void ABPA_SimpleDoor_C::BndEvt__Gate_K2Node_ComponentBoundEvent_0_GateOpened__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__Gate_K2Node_ComponentBoundEvent_0_GateOpened__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.OnGateOpenedEvent_SimpleDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_SimpleDoor_C::OnGateOpenedEvent_SimpleDoor(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.OnGateOpenedEvent_SimpleDoor"));

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


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__Gate_K2Node_ComponentBoundEvent_1_GateClosed__DelegateSignature
// (FUNC_BlueprintEvent)

void ABPA_SimpleDoor_C::BndEvt__Gate_K2Node_ComponentBoundEvent_1_GateClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__Gate_K2Node_ComponentBoundEvent_1_GateClosed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.OnGateClosedEvent_SimpleDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_SimpleDoor_C::OnGateClosedEvent_SimpleDoor(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.OnGateClosedEvent_SimpleDoor"));

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


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableThresholdReached__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          NewHealthPercentThreshold      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 GenericObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_SimpleDoor_C::BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableThresholdReached__DelegateSignature(float NewHealthPercentThreshold, class UObject* GenericObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableThresholdReached__DelegateSignature"));

	struct
	{
		float                          NewHealthPercentThreshold;
		class UObject*                 GenericObject;
	} params = {};

	params.NewHealthPercentThreshold = NewHealthPercentThreshold;
	params.GenericObject = GenericObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.OnStatHealthChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Initiator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_SimpleDoor_C::OnStatHealthChanged_Event_1(float Amount, class AActor* Initiator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.OnStatHealthChanged_Event_1"));

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


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableOnKilledSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABPA_SimpleDoor_C::BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableOnKilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableOnKilledSignature__DelegateSignature"));

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


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.DoorRepaired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABPA_SimpleDoor_C::DoorRepaired()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.DoorRepaired"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.ConfigureSimpleDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       FriendlyTeam                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       EnemyTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsDestroyable                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsDoorOpen                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          RepairTime                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RepairHealthAmount             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_SimpleDoor_C::ConfigureSimpleDoor(EFaction FriendlyTeam, EFaction EnemyTeam, float Health, bool IsDestroyable, bool IsDoorOpen, float RepairTime, float RepairHealthAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.ConfigureSimpleDoor"));

	struct
	{
		EFaction                       FriendlyTeam;
		EFaction                       EnemyTeam;
		float                          Health;
		bool                           IsDestroyable;
		bool                           IsDoorOpen;
		float                          RepairTime;
		float                          RepairHealthAmount;
	} params = {};

	params.FriendlyTeam = FriendlyTeam;
	params.EnemyTeam = EnemyTeam;
	params.Health = Health;
	params.IsDestroyable = IsDestroyable;
	params.IsDoorOpen = IsDoorOpen;
	params.RepairTime = RepairTime;
	params.RepairHealthAmount = RepairHealthAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABPA_SimpleDoor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__OpenClose_InteractableComponent_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_SimpleDoor_C::BndEvt__OpenClose_InteractableComponent_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__OpenClose_InteractableComponent_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature"));

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


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.PlayDoorOpenSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABPA_SimpleDoor_C::PlayDoorOpenSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.PlayDoorOpenSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.PlayDoorCloseSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABPA_SimpleDoor_C::PlayDoorCloseSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.PlayDoorCloseSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathDamageTakenEvent  Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ABPA_SimpleDoor_C::BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature"));

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


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.ExecuteUbergraph_BPA_SimpleDoor
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABPA_SimpleDoor_C::ExecuteUbergraph_BPA_SimpleDoor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.ExecuteUbergraph_BPA_SimpleDoor"));

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


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.OnGateDestroyed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABPA_SimpleDoor_C::OnGateDestroyed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.OnGateDestroyed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPA_SimpleDoor.BPA_SimpleDoor_C.DoorFullyHealed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABPA_SimpleDoor_C::DoorFullyHealed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPA_SimpleDoor.BPA_SimpleDoor_C.DoorFullyHealed__DelegateSignature"));

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
