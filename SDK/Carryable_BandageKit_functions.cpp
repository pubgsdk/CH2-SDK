// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_BandageKit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carryable_BandageKit.Carryable_BandageKit_C.SendHealAnalyticsEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_BandageKit_C::SendHealAnalyticsEvent(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.SendHealAnalyticsEvent"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.GetHealAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          HealAmount                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_BandageKit_C::GetHealAmount(class ATBLCharacter* Character, float* HealAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.GetHealAmount"));

	struct
	{
		class ATBLCharacter*           Character;
		float                          HealAmount;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HealAmount != nullptr)
		*HealAmount = params.HealAmount;
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.GetTeamProjectileCollision
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UShapeComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UShapeComponent* ACarryable_BandageKit_C::GetTeamProjectileCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.GetTeamProjectileCollision"));

	struct
	{
		class UShapeComponent*         ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.CanUseBandageKit
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanUse                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ACarryable_BandageKit_C::CanUseBandageKit(class APawn* Pawn, bool* CanUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.CanUseBandageKit"));

	struct
	{
		class APawn*                   Pawn;
		bool                           CanUse;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.CannotAutoPickup
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ACarryable_BandageKit_C::CannotAutoPickup(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.CannotAutoPickup"));

	struct
	{
		class APawn*                   Pawn;
		bool                           ReturnValue;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.OnRep_LastOwner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_BandageKit_C::OnRep_LastOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.OnRep_LastOwner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.OnRep_Faction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_BandageKit_C::OnRep_Faction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.OnRep_Faction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.CanPickup
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ACarryable_BandageKit_C::CanPickup(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.CanPickup"));

	struct
	{
		class APawn*                   Pawn;
		bool                           ReturnValue;
	} params = {};

	params.Pawn = Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.OverridePickupEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bGiveWeapon                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsAutoPickup                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ACarryable_BandageKit_C::OverridePickupEvent(class ATBLCharacter* Character, bool bGiveWeapon, bool bIsAutoPickup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.OverridePickupEvent"));

	struct
	{
		class ATBLCharacter*           Character;
		bool                           bGiveWeapon;
		bool                           bIsAutoPickup;
		bool                           ReturnValue;
	} params = {};

	params.Character = Character;
	params.bGiveWeapon = bGiveWeapon;
	params.bIsAutoPickup = bIsAutoPickup;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.CanUseItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ACarryable_BandageKit_C::CanUseItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.CanUseItem"));

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


// Function Carryable_BandageKit.Carryable_BandageKit_C.HealCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_BandageKit_C::HealCharacter(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.HealCharacter"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ACarryable_BandageKit_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.OnThrown_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void ACarryable_BandageKit_C::OnThrown_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.OnThrown_Event_1"));

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


// Function Carryable_BandageKit.Carryable_BandageKit_C.OnPossessedPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_BandageKit_C::OnPossessedPawn(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.OnPossessedPawn"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.OnHealOverTimeStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EHealingSource                 HealingSource                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLPlayerState*         InstigatorPlayerState          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_BandageKit_C::OnHealOverTimeStart(EHealingSource HealingSource, class ATBLPlayerState* InstigatorPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.OnHealOverTimeStart"));

	struct
	{
		EHealingSource                 HealingSource;
		class ATBLPlayerState*         InstigatorPlayerState;
	} params = {};

	params.HealingSource = HealingSource;
	params.InstigatorPlayerState = InstigatorPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.OnHealOverTimeEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_BandageKit_C::OnHealOverTimeEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.OnHealOverTimeEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.UpdateHealHUDMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_BandageKit_C::UpdateHealHUDMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.UpdateHealHUDMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.OnDamageTaken
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       Event                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ACarryable_BandageKit_C::OnDamageTaken(const struct FDamageTakenEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.OnDamageTaken"));

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


// Function Carryable_BandageKit.Carryable_BandageKit_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_MovementFinishedSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void ACarryable_BandageKit_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_MovementFinishedSignature__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_MovementFinishedSignature__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_BandageKit_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature"));

	struct
	{
		struct FHitResult              ImpactResult;
		struct FVector                 ImpactVelocity;
	} params = {};

	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.OnSetAttached_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bAttached                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ACarryable_BandageKit_C::OnSetAttached_Event_1(bool bAttached)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.OnSetAttached_Event_1"));

	struct
	{
		bool                           bAttached;
	} params = {};

	params.bAttached = bAttached;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.SetTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_BandageKit_C::SetTeam(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.SetTeam"));

	struct
	{
		class AActor*                  OwnerActor;
	} params = {};

	params.OwnerActor = OwnerActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.SetTeamMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACarryable_BandageKit_C::SetTeamMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.SetTeamMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.OnProjectileHitTarget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ACarryable_BandageKit_C::OnProjectileHitTarget(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.OnProjectileHitTarget"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Carryable_BandageKit.Carryable_BandageKit_C.ExecuteUbergraph_Carryable_BandageKit
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACarryable_BandageKit_C::ExecuteUbergraph_Carryable_BandageKit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Carryable_BandageKit.Carryable_BandageKit_C.ExecuteUbergraph_Carryable_BandageKit"));

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
