// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameplayRules_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayRules.GameplayRules_C.IsAttackImmuneToActiveParry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameplayRules_C::IsAttackImmuneToActiveParry(const struct FName& AttackName, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.IsAttackImmuneToActiveParry"));

	struct
	{
		struct FName                   AttackName;
		bool                           _;
	} params = {};

	params.AttackName = AttackName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function GameplayRules.GameplayRules_C.ShouldStartProjectileCounterWindow
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldStartProjectileCounterWindow(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldStartProjectileCounterWindow"));

	struct
	{
		class ATBLCharacter*           Character;
		bool                           ReturnValue;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.ShouldProjectileAttackBeCountered
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATBLCharacter*           HitCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          AttackingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldProjectileAttackBeCountered(class ATBLCharacter* HitCharacter, class AInventoryItem* AttackingItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldProjectileAttackBeCountered"));

	struct
	{
		class ATBLCharacter*           HitCharacter;
		class AInventoryItem*          AttackingItem;
		bool                           ReturnValue;
	} params = {};

	params.HitCharacter = HitCharacter;
	params.AttackingItem = AttackingItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.ShouldStartActiveRiposteWindow
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldStartActiveRiposteWindow(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldStartActiveRiposteWindow"));

	struct
	{
		class ATBLCharacter*           Character;
		bool                           ReturnValue;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.ApplyDamageConditions
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageTakenEvent       DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ApplyDamageConditions(class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ApplyDamageConditions"));

	struct
	{
		class AActor*                  HitActor;
		struct FDamageTakenEvent       DamageEvent;
		bool                           ReturnValue;
	} params = {};

	params.HitActor = HitActor;
	params.DamageEvent = DamageEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.DisarmWhenHitDuringThrow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           HitCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EOnHitEffect                   HitEffect                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameplayRules_C::DisarmWhenHitDuringThrow(class ATBLCharacter* HitCharacter, EOnHitEffect HitEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.DisarmWhenHitDuringThrow"));

	struct
	{
		class ATBLCharacter*           HitCharacter;
		EOnHitEffect                   HitEffect;
	} params = {};

	params.HitCharacter = HitCharacter;
	params.HitEffect = HitEffect;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayRules.GameplayRules_C.ShouldBlockSameAttack
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATBLCharacter*           AttackingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           DefendingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldBlockSameAttack(class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldBlockSameAttack"));

	struct
	{
		class ATBLCharacter*           AttackingCharacter;
		class ATBLCharacter*           DefendingCharacter;
		bool                           ReturnValue;
	} params = {};

	params.AttackingCharacter = AttackingCharacter;
	params.DefendingCharacter = DefendingCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.ShouldPlayDamageTaken
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldPlayDamageTaken(const struct FDamageTakenEvent& DamageTakenEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldPlayDamageTaken"));

	struct
	{
		struct FDamageTakenEvent       DamageTakenEvent;
		bool                           ReturnValue;
	} params = {};

	params.DamageTakenEvent = DamageTakenEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.TutorialCanDamage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           InitiatorCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  TargetActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::TutorialCanDamage(class ATBLCharacter* InitiatorCharacter, class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.TutorialCanDamage"));

	struct
	{
		class ATBLCharacter*           InitiatorCharacter;
		class AActor*                  TargetActor;
		bool                           ReturnValue;
	} params = {};

	params.InitiatorCharacter = InitiatorCharacter;
	params.TargetActor = TargetActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.GetDisarmImpulse
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AInventoryItem*          AttackerItem                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 HitDirection                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UGameplayRules_C::GetDisarmImpulse(class AInventoryItem* AttackerItem, const struct FVector& HitDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.GetDisarmImpulse"));

	struct
	{
		class AInventoryItem*          AttackerItem;
		struct FVector                 HitDirection;
		struct FVector                 ReturnValue;
	} params = {};

	params.AttackerItem = AttackerItem;
	params.HitDirection = HitDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.OnProjectileHit
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EOnProjectileHitEffect         OutHitEffect                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OutBounceVelocityModifier      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          Projectile                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EOnProjectileHitEffect         InHitEffect                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              InHitResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// float                          InBounceVelocityModifier       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameplayRules_C::OnProjectileHit(class AInventoryItem* Projectile, EOnProjectileHitEffect InHitEffect, const struct FHitResult& InHitResult, float InBounceVelocityModifier, EOnProjectileHitEffect* OutHitEffect, float* OutBounceVelocityModifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.OnProjectileHit"));

	struct
	{
		EOnProjectileHitEffect         OutHitEffect;
		float                          OutBounceVelocityModifier;
		class AInventoryItem*          Projectile;
		EOnProjectileHitEffect         InHitEffect;
		struct FHitResult              InHitResult;
		float                          InBounceVelocityModifier;
	} params = {};

	params.Projectile = Projectile;
	params.InHitEffect = InHitEffect;
	params.InHitResult = InHitResult;
	params.InBounceVelocityModifier = InBounceVelocityModifier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutHitEffect != nullptr)
		*OutHitEffect = params.OutHitEffect;
	if (OutBounceVelocityModifier != nullptr)
		*OutBounceVelocityModifier = params.OutBounceVelocityModifier;
}


// Function GameplayRules.GameplayRules_C.CheckIfCounterAttackIsSuccessful
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATBLCharacter*           HitCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           AttackingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          AttackingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          DefenderItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::CheckIfCounterAttackIsSuccessful(class ATBLCharacter* HitCharacter, class ATBLCharacter* AttackingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefenderItem, const struct FName& AttackName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.CheckIfCounterAttackIsSuccessful"));

	struct
	{
		class ATBLCharacter*           HitCharacter;
		class ATBLCharacter*           AttackingCharacter;
		class AInventoryItem*          AttackingItem;
		class AInventoryItem*          DefenderItem;
		struct FName                   AttackName;
		bool                           ReturnValue;
	} params = {};

	params.HitCharacter = HitCharacter;
	params.AttackingCharacter = AttackingCharacter;
	params.AttackingItem = AttackingItem;
	params.DefenderItem = DefenderItem;
	params.AttackName = AttackName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.ShouldCounterReadyStateAttackBeCountered
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATBLCharacter*           HitCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldCounterReadyStateAttackBeCountered(class ATBLCharacter* HitCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldCounterReadyStateAttackBeCountered"));

	struct
	{
		class ATBLCharacter*           HitCharacter;
		bool                           ReturnValue;
	} params = {};

	params.HitCharacter = HitCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.ShouldNormalAttackBeCountered
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATBLCharacter*           HitCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldNormalAttackBeCountered(class ATBLCharacter* HitCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldNormalAttackBeCountered"));

	struct
	{
		class ATBLCharacter*           HitCharacter;
		bool                           ReturnValue;
	} params = {};

	params.HitCharacter = HitCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.DidSuccessfulCounter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsCounter                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameplayRules_C::DidSuccessfulCounter(class ATBLCharacter* Character, bool* IsCounter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.DidSuccessfulCounter"));

	struct
	{
		class ATBLCharacter*           Character;
		bool                           IsCounter;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsCounter != nullptr)
		*IsCounter = params.IsCounter;
}


// Function GameplayRules.GameplayRules_C.IsProjectileArrowOrBolt
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AInventoryItem*          Projectile                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameplayRules_C::IsProjectileArrowOrBolt(class AInventoryItem* Projectile, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.IsProjectileArrowOrBolt"));

	struct
	{
		class AInventoryItem*          Projectile;
		bool                           _;
	} params = {};

	params.Projectile = Projectile;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function GameplayRules.GameplayRules_C.ShouldAttackBeCountered
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATBLCharacter*           HitCharacter                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           AttackingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          AttackingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          DefenderItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldAttackBeCountered(class ATBLCharacter* HitCharacter, class ATBLCharacter* AttackingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefenderItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldAttackBeCountered"));

	struct
	{
		class ATBLCharacter*           HitCharacter;
		class ATBLCharacter*           AttackingCharacter;
		class AInventoryItem*          AttackingItem;
		class AInventoryItem*          DefenderItem;
		bool                           ReturnValue;
	} params = {};

	params.HitCharacter = HitCharacter;
	params.AttackingCharacter = AttackingCharacter;
	params.AttackingItem = AttackingItem;
	params.DefenderItem = DefenderItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.GetGoreEventOnDamage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           bIsRagdollHit                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bShouldApplyConditions         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTBL_FGoreEvent         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor)

struct FTBL_FGoreEvent UGameplayRules_C::GetGoreEventOnDamage(const struct FDamageTakenEvent& DamageTakenEvent, bool bIsRagdollHit, bool bShouldApplyConditions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.GetGoreEventOnDamage"));

	struct
	{
		struct FDamageTakenEvent       DamageTakenEvent;
		bool                           bIsRagdollHit;
		bool                           bShouldApplyConditions;
		struct FTBL_FGoreEvent         ReturnValue;
	} params = {};

	params.DamageTakenEvent = DamageTakenEvent;
	params.bIsRagdollHit = bIsRagdollHit;
	params.bShouldApplyConditions = bShouldApplyConditions;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.GetCurrentAttack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           NonHeavy                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   AttackName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameplayRules_C::GetCurrentAttack(class ATBLCharacter* Character, bool NonHeavy, struct FName* AttackName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.GetCurrentAttack"));

	struct
	{
		class ATBLCharacter*           Character;
		bool                           NonHeavy;
		struct FName                   AttackName;
	} params = {};

	params.Character = Character;
	params.NonHeavy = NonHeavy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AttackName != nullptr)
		*AttackName = params.AttackName;
}


// Function GameplayRules.GameplayRules_C.ShouldStartCounterWindow
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldStartCounterWindow(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldStartCounterWindow"));

	struct
	{
		class ATBLCharacter*           Character;
		bool                           ReturnValue;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.ShouldLoseLimb
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageEvent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           LoseLimb                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           BleedOut                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameplayRules_C::ShouldLoseLimb(const struct FDamageTakenEvent& DamageEvent, bool* LoseLimb, bool* BleedOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldLoseLimb"));

	struct
	{
		struct FDamageTakenEvent       DamageEvent;
		bool                           LoseLimb;
		bool                           BleedOut;
	} params = {};

	params.DamageEvent = DamageEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LoseLimb != nullptr)
		*LoseLimb = params.LoseLimb;
	if (BleedOut != nullptr)
		*BleedOut = params.BleedOut;
}


// Function GameplayRules.GameplayRules_C.ShouldComboCancelQueue
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttackInfo             Attack                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldComboCancelQueue(const struct FName& CombatState, const struct FAttackInfo& Attack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldComboCancelQueue"));

	struct
	{
		struct FName                   CombatState;
		struct FAttackInfo             Attack;
		bool                           ReturnValue;
	} params = {};

	params.CombatState = CombatState;
	params.Attack = Attack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.GetComboTimingPolicy
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EComboTimingPolicy             InComboTimingPolicy            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAttackInfo             PrevAttack                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// struct FAttackInfo             NextAttack                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// EComboTimingPolicy             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EComboTimingPolicy UGameplayRules_C::GetComboTimingPolicy(EComboTimingPolicy InComboTimingPolicy, class ATBLCharacter* Character, const struct FName& CombatState, const struct FAttackInfo& PrevAttack, const struct FAttackInfo& NextAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.GetComboTimingPolicy"));

	struct
	{
		EComboTimingPolicy             InComboTimingPolicy;
		class ATBLCharacter*           Character;
		struct FName                   CombatState;
		struct FAttackInfo             PrevAttack;
		struct FAttackInfo             NextAttack;
		EComboTimingPolicy             ReturnValue;
	} params = {};

	params.InComboTimingPolicy = InComboTimingPolicy;
	params.Character = Character;
	params.CombatState = CombatState;
	params.PrevAttack = PrevAttack;
	params.NextAttack = NextAttack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.DidHitLimb
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class USkinnedMeshComponent*   Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   BoneName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ParentBoneName                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::DidHitLimb(class USkinnedMeshComponent* Target, const struct FName& BoneName, const struct FName& ParentBoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.DidHitLimb"));

	struct
	{
		class USkinnedMeshComponent*   Target;
		struct FName                   BoneName;
		struct FName                   ParentBoneName;
		bool                           ReturnValue;
	} params = {};

	params.Target = Target;
	params.BoneName = BoneName;
	params.ParentBoneName = ParentBoneName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.ShouldScoreKill
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             Killed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDeathDamageTakenEvent  DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldScoreKill(class AController* Killer, class AController* Killed, const struct FDeathDamageTakenEvent& DamageEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldScoreKill"));

	struct
	{
		class AController*             Killer;
		class AController*             Killed;
		struct FDeathDamageTakenEvent  DamageEvent;
		bool                           ReturnValue;
	} params = {};

	params.Killer = Killer;
	params.Killed = Killed;
	params.DamageEvent = DamageEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.IsStandardAttack
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameplayRules_C::IsStandardAttack(class ATBLCharacter* Character, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.IsStandardAttack"));

	struct
	{
		class ATBLCharacter*           Character;
		bool                           _;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function GameplayRules.GameplayRules_C.OnDamageTaken
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EOnHitEffect                   OutHitEffect                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ECrowdControlVariant           OutCrowdControlVariant         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EOnHitEffect                   InHitEffect                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ECrowdControlVariant           InCrowdControlVariant          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  HitActor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageTakenEvent       DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          AttackingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAttackType*             AttackType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameplayRules_C::OnDamageTaken(EOnHitEffect InHitEffect, ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent, const struct FName& AttackName, class AInventoryItem* AttackingItem, class UAttackType* AttackType, EOnHitEffect* OutHitEffect, ECrowdControlVariant* OutCrowdControlVariant)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.OnDamageTaken"));

	struct
	{
		EOnHitEffect                   OutHitEffect;
		ECrowdControlVariant           OutCrowdControlVariant;
		EOnHitEffect                   InHitEffect;
		ECrowdControlVariant           InCrowdControlVariant;
		class AActor*                  HitActor;
		struct FDamageTakenEvent       DamageEvent;
		struct FName                   AttackName;
		class AInventoryItem*          AttackingItem;
		class UAttackType*             AttackType;
	} params = {};

	params.InHitEffect = InHitEffect;
	params.InCrowdControlVariant = InCrowdControlVariant;
	params.HitActor = HitActor;
	params.DamageEvent = DamageEvent;
	params.AttackName = AttackName;
	params.AttackingItem = AttackingItem;
	params.AttackType = AttackType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutHitEffect != nullptr)
		*OutHitEffect = params.OutHitEffect;
	if (OutCrowdControlVariant != nullptr)
		*OutCrowdControlVariant = params.OutCrowdControlVariant;
}


// Function GameplayRules.GameplayRules_C.WasItemDestroyed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameplayRules_C::WasItemDestroyed(class AInventoryItem* Item, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.WasItemDestroyed"));

	struct
	{
		class AInventoryItem*          Item;
		bool                           _;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function GameplayRules.GameplayRules_C.GetCrowdControlVariant
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECrowdControlVariant           InCrowdControlVariant          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  HitActor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ InventoryItemClass             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// struct FName                   AbilityName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAttackType*             AttackType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsOnHorse                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ECrowdControlVariant           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ECrowdControlVariant UGameplayRules_C::GetCrowdControlVariant(ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FName& CombatState, class UClass* /*AInventoryItem*/ InventoryItemClass, const struct FName& AbilityName, class UAttackType* AttackType, bool IsOnHorse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.GetCrowdControlVariant"));

	struct
	{
		ECrowdControlVariant           InCrowdControlVariant;
		class AActor*                  HitActor;
		struct FName                   CombatState;
		class UClass* /*AInventoryItem*/ InventoryItemClass;
		struct FName                   AbilityName;
		class UAttackType*             AttackType;
		bool                           IsOnHorse;
		ECrowdControlVariant           ReturnValue;
	} params = {};

	params.InCrowdControlVariant = InCrowdControlVariant;
	params.HitActor = HitActor;
	params.CombatState = CombatState;
	params.InventoryItemClass = InventoryItemClass;
	params.AbilityName = AbilityName;
	params.AttackType = AttackType;
	params.IsOnHorse = IsOnHorse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.IsShieldEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameplayRules_C::IsShieldEquipped(class ATBLCharacter* Character, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.IsShieldEquipped"));

	struct
	{
		class ATBLCharacter*           Character;
		bool                           _;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function GameplayRules.GameplayRules_C.IsHeavyAttack
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameplayRules_C::IsHeavyAttack(class ATBLCharacter* Character, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.IsHeavyAttack"));

	struct
	{
		class ATBLCharacter*           Character;
		bool                           _;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function GameplayRules.GameplayRules_C.IsSprintAttack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameplayRules_C::IsSprintAttack(class ATBLCharacter* Character, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.IsSprintAttack"));

	struct
	{
		class ATBLCharacter*           Character;
		bool                           _;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function GameplayRules.GameplayRules_C.OnParryBreak
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           AttackingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           DefendingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          AttackingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          DefendingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::OnParryBreak(class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.OnParryBreak"));

	struct
	{
		class ATBLCharacter*           AttackingCharacter;
		class ATBLCharacter*           DefendingCharacter;
		class AInventoryItem*          AttackingItem;
		class AInventoryItem*          DefendingItem;
		bool                           ReturnValue;
	} params = {};

	params.AttackingCharacter = AttackingCharacter;
	params.DefendingCharacter = DefendingCharacter;
	params.AttackingItem = AttackingItem;
	params.DefendingItem = DefendingItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.GetAttackerBlockedPolicy
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EAttackerBlockedPolicy         InAttackerBlockedPolicy        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           AttackingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           DefendingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          AttackingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          DefendingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSameAttackClash               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EAttackerBlockedPolicy         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EAttackerBlockedPolicy UGameplayRules_C::GetAttackerBlockedPolicy(EAttackerBlockedPolicy InAttackerBlockedPolicy, class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem, bool bSameAttackClash)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.GetAttackerBlockedPolicy"));

	struct
	{
		EAttackerBlockedPolicy         InAttackerBlockedPolicy;
		class ATBLCharacter*           AttackingCharacter;
		class ATBLCharacter*           DefendingCharacter;
		class AInventoryItem*          AttackingItem;
		class AInventoryItem*          DefendingItem;
		bool                           bSameAttackClash;
		EAttackerBlockedPolicy         ReturnValue;
	} params = {};

	params.InAttackerBlockedPolicy = InAttackerBlockedPolicy;
	params.AttackingCharacter = AttackingCharacter;
	params.DefendingCharacter = DefendingCharacter;
	params.AttackingItem = AttackingItem;
	params.DefendingItem = DefendingItem;
	params.bSameAttackClash = bSameAttackClash;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.GetDefenderBlockedPolicy
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldDisarm                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EDefenderBlockedPolicy         InDefenderBlockedPolicy        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           AttackingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           DefendingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          AttackingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          DefendingItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bProjectileAttack              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bSameAttackClash               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bWasBlockedWithParryForgivenessWindow (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EDefenderBlockedPolicy         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EDefenderBlockedPolicy UGameplayRules_C::GetDefenderBlockedPolicy(EDefenderBlockedPolicy InDefenderBlockedPolicy, class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem, bool bProjectileAttack, bool bSameAttackClash, bool bWasBlockedWithParryForgivenessWindow, bool* bShouldDisarm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.GetDefenderBlockedPolicy"));

	struct
	{
		bool                           bShouldDisarm;
		EDefenderBlockedPolicy         InDefenderBlockedPolicy;
		class ATBLCharacter*           AttackingCharacter;
		class ATBLCharacter*           DefendingCharacter;
		class AInventoryItem*          AttackingItem;
		class AInventoryItem*          DefendingItem;
		bool                           bProjectileAttack;
		bool                           bSameAttackClash;
		bool                           bWasBlockedWithParryForgivenessWindow;
		EDefenderBlockedPolicy         ReturnValue;
	} params = {};

	params.InDefenderBlockedPolicy = InDefenderBlockedPolicy;
	params.AttackingCharacter = AttackingCharacter;
	params.DefendingCharacter = DefendingCharacter;
	params.AttackingItem = AttackingItem;
	params.DefendingItem = DefendingItem;
	params.bProjectileAttack = bProjectileAttack;
	params.bSameAttackClash = bSameAttackClash;
	params.bWasBlockedWithParryForgivenessWindow = bWasBlockedWithParryForgivenessWindow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShouldDisarm != nullptr)
		*bShouldDisarm = params.bShouldDisarm;

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.Disarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AInventoryItem*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           DuringParryEvent               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameplayRules_C::Disarm(class AInventoryItem* Item, bool DuringParryEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.Disarm"));

	struct
	{
		class AInventoryItem*          Item;
		bool                           DuringParryEvent;
	} params = {};

	params.Item = Item;
	params.DuringParryEvent = DuringParryEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayRules.GameplayRules_C.IsBlocking
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   CombatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLCharacter*           AttackingCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::IsBlocking(class ATBLCharacter* Character, const struct FName& AttackName, const struct FName& CombatState, class ATBLCharacter* AttackingCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.IsBlocking"));

	struct
	{
		class ATBLCharacter*           Character;
		struct FName                   AttackName;
		struct FName                   CombatState;
		class ATBLCharacter*           AttackingCharacter;
		bool                           ReturnValue;
	} params = {};

	params.Character = Character;
	params.AttackName = AttackName;
	params.CombatState = CombatState;
	params.AttackingCharacter = AttackingCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayRules.GameplayRules_C.ShouldGotoDowned
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Initiator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   AbilityName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageSource*           DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGameplayRules_C::ShouldGotoDowned(class AActor* Target, class AActor* Initiator, const struct FName& AbilityName, class AInventoryItem* InventoryItem, class UDamageSource* DamageType, const struct FDamageTakenEvent& DamageTakenEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayRules.GameplayRules_C.ShouldGotoDowned"));

	struct
	{
		class AActor*                  Target;
		class AActor*                  Initiator;
		struct FName                   AbilityName;
		class AInventoryItem*          InventoryItem;
		class UDamageSource*           DamageType;
		struct FDamageTakenEvent       DamageTakenEvent;
		bool                           ReturnValue;
	} params = {};

	params.Target = Target;
	params.Initiator = Initiator;
	params.AbilityName = AbilityName;
	params.InventoryItem = InventoryItem;
	params.DamageType = DamageType;
	params.DamageTakenEvent = DamageTakenEvent;

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
