// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseInventoryItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseInventoryItem.BaseInventoryItem_C.Get Gore Params
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FBaseInventoryItem_GoreParams Params                         (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseInventoryItem_C::Get_Gore_Params(struct FBaseInventoryItem_GoreParams* Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.Get Gore Params"));

	struct
	{
		struct FBaseInventoryItem_GoreParams Params;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Params != nullptr)
		*Params = params.Params;
}


// Function BaseInventoryItem.BaseInventoryItem_C.GetVelocityVector
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          VelocityLength                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Velocity                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseInventoryItem_C::GetVelocityVector(float* VelocityLength, struct FVector* Velocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.GetVelocityVector"));

	struct
	{
		float                          VelocityLength;
		struct FVector                 Velocity;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (VelocityLength != nullptr)
		*VelocityLength = params.VelocityLength;
	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function BaseInventoryItem.BaseInventoryItem_C.CanPlayWorldHitDropped
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseInventoryItem_C::CanPlayWorldHitDropped(bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.CanPlayWorldHitDropped"));

	struct
	{
		bool                           Return_Value;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BaseInventoryItem.BaseInventoryItem_C.StopCloseCallSound
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseInventoryItem_C::StopCloseCallSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.StopCloseCallSound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.ShouldPlayProjectileSounds
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ProjectileSounds               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           CloseCallSound                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseInventoryItem_C::ShouldPlayProjectileSounds(bool* ProjectileSounds, bool* CloseCallSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.ShouldPlayProjectileSounds"));

	struct
	{
		bool                           ProjectileSounds;
		bool                           CloseCallSound;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ProjectileSounds != nullptr)
		*ProjectileSounds = params.ProjectileSounds;
	if (CloseCallSound != nullptr)
		*CloseCallSound = params.CloseCallSound;
}


// Function BaseInventoryItem.BaseInventoryItem_C.IsClientFakeProjectile
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABaseInventoryItem_C::IsClientFakeProjectile()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.IsClientFakeProjectile"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseInventoryItem.BaseInventoryItem_C.ShouldDropOnDowned
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABaseInventoryItem_C::ShouldDropOnDowned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.ShouldDropOnDowned"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseInventoryItem.BaseInventoryItem_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseInventoryItem_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseInventoryItem_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature"));

	struct
	{
		class APawn*                   Pawn;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseInventoryItem_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature"));

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


// Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseInventoryItem_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature"));

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


// Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UInteractableComponent*  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseInventoryItem_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature"));

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


// Function BaseInventoryItem.BaseInventoryItem_C.Start_CloseCall_OverlapCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseInventoryItem_C::Start_CloseCall_OverlapCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.Start_CloseCall_OverlapCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseInventoryItem_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.Stop_CloseCall_OverlapCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseInventoryItem_C::Stop_CloseCall_OverlapCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.Stop_CloseCall_OverlapCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.BroadcastProjectileWorldBlockingHit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    ProjectileHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ABaseInventoryItem_C::BroadcastProjectileWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.BroadcastProjectileWorldBlockingHit"));

	struct
	{
		struct FProjectileHitParams    ProjectileHit;
	} params = {};

	params.ProjectileHit = ProjectileHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.OnProjectileBounce
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           bParried                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseInventoryItem_C::OnProjectileBounce(const struct FHitResult& Hit, bool bParried)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.OnProjectileBounce"));

	struct
	{
		struct FHitResult              Hit;
		bool                           bParried;
	} params = {};

	params.Hit = Hit;
	params.bParried = bParried;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.AssignProjectileMovementEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseInventoryItem_C::AssignProjectileMovementEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.AssignProjectileMovementEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.OnMovementStarted_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseInventoryItem_C::OnMovementStarted_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.OnMovementStarted_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.OnMovementFinished_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseInventoryItem_C::OnMovementFinished_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.OnMovementFinished_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.BroadcastNonWorldBlockingHit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    ProjectileHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ABaseInventoryItem_C::BroadcastNonWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.BroadcastNonWorldBlockingHit"));

	struct
	{
		struct FProjectileHitParams    ProjectileHit;
	} params = {};

	params.ProjectileHit = ProjectileHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.OnDropped_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void ABaseInventoryItem_C::OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.OnDropped_Event_1"));

	struct
	{
		class AInventoryItem*          Item;
		class ATBLCharacter*           Character;
		struct FTransform              Transform;
	} params = {};

	params.Item = Item;
	params.Character = Character;
	params.Transform = Transform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.OnOwnerChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseInventoryItem_C::OnOwnerChanged_Event_1(class AActor* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.OnOwnerChanged_Event_1"));

	struct
	{
		class AActor*                  Owner;
	} params = {};

	params.Owner = Owner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.OnPlayerStateReplicated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseInventoryItem_C::OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.OnPlayerStateReplicated_Event_1"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABaseInventoryItem_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.ListenToWeaponDrop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABaseInventoryItem_C::ListenToWeaponDrop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.ListenToWeaponDrop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.OnComponentHit_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABaseInventoryItem_C::OnComponentHit_Event_1(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.OnComponentHit_Event_1"));

	struct
	{
		class UPrimitiveComponent*     HitComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params = {};

	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.OnProjectileHitEvent_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    HitParams                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ABaseInventoryItem_C::OnProjectileHitEvent_1(const struct FProjectileHitParams& HitParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.OnProjectileHitEvent_1"));

	struct
	{
		struct FProjectileHitParams    HitParams;
	} params = {};

	params.HitParams = HitParams;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.ExecuteUbergraph_BaseInventoryItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABaseInventoryItem_C::ExecuteUbergraph_BaseInventoryItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.ExecuteUbergraph_BaseInventoryItem"));

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


// Function BaseInventoryItem.BaseInventoryItem_C.BaseProjectileBlockingHitNonWorld__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    ProjectileHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ABaseInventoryItem_C::BaseProjectileBlockingHitNonWorld__DelegateSignature(const struct FProjectileHitParams& ProjectileHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.BaseProjectileBlockingHitNonWorld__DelegateSignature"));

	struct
	{
		struct FProjectileHitParams    ProjectileHit;
	} params = {};

	params.ProjectileHit = ProjectileHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseInventoryItem.BaseInventoryItem_C.BaseProjectileBlockingHitWorld__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileHitParams    ProjectileHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ABaseInventoryItem_C::BaseProjectileBlockingHitWorld__DelegateSignature(const struct FProjectileHitParams& ProjectileHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem.BaseInventoryItem_C.BaseProjectileBlockingHitWorld__DelegateSignature"));

	struct
	{
		struct FProjectileHitParams    ProjectileHit;
	} params = {};

	params.ProjectileHit = ProjectileHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
