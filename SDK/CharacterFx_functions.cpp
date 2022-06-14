// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CharacterFx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterFx.CharacterFx_C.UnequipState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterFx_C::UnequipState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.UnequipState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.Spawn Blood Decal
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHitResult              bpp__Hit__pf__const            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsDeathDecal__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Causer__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsRagdollHit__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilitySpec*            bpp__AbilityRef__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::Spawn_Blood_Decal(const struct FHitResult& bpp__Hit__pf__const, bool bpp__IsDeathDecal__pf, class AActor* bpp__Causer__pf, bool bpp__IsRagdollHit__pf, class UAbilitySpec* bpp__AbilityRef__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.Spawn Blood Decal"));

	struct
	{
		struct FHitResult              bpp__Hit__pf__const;
		bool                           bpp__IsDeathDecal__pf;
		class AActor*                  bpp__Causer__pf;
		bool                           bpp__IsRagdollHit__pf;
		class UAbilitySpec*            bpp__AbilityRef__pf;
	} params = {};

	params.bpp__Hit__pf__const = bpp__Hit__pf__const;
	params.bpp__IsDeathDecal__pf = bpp__IsDeathDecal__pf;
	params.bpp__Causer__pf = bpp__Causer__pf;
	params.bpp__IsRagdollHit__pf = bpp__IsRagdollHit__pf;
	params.bpp__AbilityRef__pf = bpp__AbilityRef__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.SpawnHeadExplosionEffect
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class ATBLCharacter*           bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLCharacter*           bpp__Causer__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__HitLocation__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::SpawnHeadExplosionEffect(class ATBLCharacter* bpp__Character__pf, class ATBLCharacter* bpp__Causer__pf, const struct FVector& bpp__HitLocation__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.SpawnHeadExplosionEffect"));

	struct
	{
		class ATBLCharacter*           bpp__Character__pf;
		class ATBLCharacter*           bpp__Causer__pf;
		struct FVector                 bpp__HitLocation__pf;
	} params = {};

	params.bpp__Character__pf = bpp__Character__pf;
	params.bpp__Causer__pf = bpp__Causer__pf;
	params.bpp__HitLocation__pf = bpp__HitLocation__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.SpawnGoreFx
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EGorePiece                     bpp__Piece__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__Bone__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Location__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ACharacter*              bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EHeadGoreAction                bpp__HeadGoreAction__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ELimbGoreAction                bpp__LimbGoreAction__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::SpawnGoreFx(EGorePiece bpp__Piece__pf, const struct FName& bpp__Bone__pf, const struct FVector& bpp__Location__pf, class ACharacter* bpp__Character__pf, EHeadGoreAction bpp__HeadGoreAction__pf, ELimbGoreAction bpp__LimbGoreAction__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.SpawnGoreFx"));

	struct
	{
		EGorePiece                     bpp__Piece__pf;
		struct FName                   bpp__Bone__pf;
		struct FVector                 bpp__Location__pf;
		class ACharacter*              bpp__Character__pf;
		EHeadGoreAction                bpp__HeadGoreAction__pf;
		ELimbGoreAction                bpp__LimbGoreAction__pf;
	} params = {};

	params.bpp__Piece__pf = bpp__Piece__pf;
	params.bpp__Bone__pf = bpp__Bone__pf;
	params.bpp__Location__pf = bpp__Location__pf;
	params.bpp__Character__pf = bpp__Character__pf;
	params.bpp__HeadGoreAction__pf = bpp__HeadGoreAction__pf;
	params.bpp__LimbGoreAction__pf = bpp__LimbGoreAction__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.SpawnBloodDecalParticle
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 bpp__Location__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UMaterialInstanceConstant* bpp__DecalMaterial__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::SpawnBloodDecalParticle(const struct FVector& bpp__Location__pf, class UMaterialInstanceConstant* bpp__DecalMaterial__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.SpawnBloodDecalParticle"));

	struct
	{
		struct FVector                 bpp__Location__pf;
		class UMaterialInstanceConstant* bpp__DecalMaterial__pf;
	} params = {};

	params.bpp__Location__pf = bpp__Location__pf;
	params.bpp__DecalMaterial__pf = bpp__DecalMaterial__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.Should Ragdoll
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Causer__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__HitLocaton__pf__const     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Impulse__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__HitBone__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__DamageTakerCombatState__pf (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__AttachParent__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGorePiece                     bpp__GorePiece__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDamageTakenEvent       bpp__DamageEvent__pf           (CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__AttachedToBallistaBolt__pf (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Ragdoll__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::Should_Ragdoll(class AActor* bpp__Actor__pf, class AActor* bpp__Causer__pf, const struct FVector& bpp__HitLocaton__pf__const, const struct FVector& bpp__Impulse__pf, const struct FName& bpp__HitBone__pf, const struct FName& bpp__DamageTakerCombatState__pf, class AActor* bpp__AttachParent__pf, EGorePiece bpp__GorePiece__pf, const struct FDamageTakenEvent& bpp__DamageEvent__pf, bool bpp__AttachedToBallistaBolt__pf, bool* bpp__Ragdoll__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.Should Ragdoll"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		class AActor*                  bpp__Causer__pf;
		struct FVector                 bpp__HitLocaton__pf__const;
		struct FVector                 bpp__Impulse__pf;
		struct FName                   bpp__HitBone__pf;
		struct FName                   bpp__DamageTakerCombatState__pf;
		class AActor*                  bpp__AttachParent__pf;
		EGorePiece                     bpp__GorePiece__pf;
		struct FDamageTakenEvent       bpp__DamageEvent__pf;
		bool                           bpp__AttachedToBallistaBolt__pf;
		bool                           bpp__Ragdoll__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Causer__pf = bpp__Causer__pf;
	params.bpp__HitLocaton__pf__const = bpp__HitLocaton__pf__const;
	params.bpp__Impulse__pf = bpp__Impulse__pf;
	params.bpp__HitBone__pf = bpp__HitBone__pf;
	params.bpp__DamageTakerCombatState__pf = bpp__DamageTakerCombatState__pf;
	params.bpp__AttachParent__pf = bpp__AttachParent__pf;
	params.bpp__GorePiece__pf = bpp__GorePiece__pf;
	params.bpp__DamageEvent__pf = bpp__DamageEvent__pf;
	params.bpp__AttachedToBallistaBolt__pf = bpp__AttachedToBallistaBolt__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Ragdoll__pf != nullptr)
		*bpp__Ragdoll__pf = params.bpp__Ragdoll__pf;
}


// Function CharacterFx.CharacterFx_C.SetWeaponBloodLevel
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 bpp__Object__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::SetWeaponBloodLevel(class UObject* bpp__Object__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.SetWeaponBloodLevel"));

	struct
	{
		class UObject*                 bpp__Object__pf;
	} params = {};

	params.bpp__Object__pf = bpp__Object__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.SetPhysicsVelocityToZero
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     bpp__Mesh__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::SetPhysicsVelocityToZero(class UPrimitiveComponent* bpp__Mesh__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.SetPhysicsVelocityToZero"));

	struct
	{
		class UPrimitiveComponent*     bpp__Mesh__pf;
	} params = {};

	params.bpp__Mesh__pf = bpp__Mesh__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.SetCutMaterialEffects
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__HitBone__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__x__pfT                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::SetCutMaterialEffects(const struct FName& bpp__HitBone__pf, class AActor* bpp__x__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.SetCutMaterialEffects"));

	struct
	{
		struct FName                   bpp__HitBone__pf;
		class AActor*                  bpp__x__pfT;
	} params = {};

	params.bpp__HitBone__pf = bpp__HitBone__pf;
	params.bpp__x__pfT = bpp__x__pfT;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.RemoveLocalFxStack
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UParticleSystem*         bpp__Particle__pf__const       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__Value__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::RemoveLocalFxStack(class UParticleSystem* bpp__Particle__pf__const, int bpp__Value__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.RemoveLocalFxStack"));

	struct
	{
		class UParticleSystem*         bpp__Particle__pf__const;
		int                            bpp__Value__pf;
	} params = {};

	params.bpp__Particle__pf__const = bpp__Particle__pf__const;
	params.bpp__Value__pf = bpp__Value__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.RemoveLocalFx
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UParticleSystem*         bpp__Particle__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__Intensity__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::RemoveLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.RemoveLocalFx"));

	struct
	{
		class UParticleSystem*         bpp__Particle__pf;
		int                            bpp__Intensity__pf;
	} params = {};

	params.bpp__Particle__pf = bpp__Particle__pf;
	params.bpp__Intensity__pf = bpp__Intensity__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.RemoveHelmeet
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 bpp__Direction__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Attacker__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::RemoveHelmeet(const struct FVector& bpp__Direction__pf, class AActor* bpp__Attacker__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.RemoveHelmeet"));

	struct
	{
		struct FVector                 bpp__Direction__pf;
		class AActor*                  bpp__Attacker__pf;
	} params = {};

	params.bpp__Direction__pf = bpp__Direction__pf;
	params.bpp__Attacker__pf = bpp__Attacker__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.RemoveDrunkEffect
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterFx_C::RemoveDrunkEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.RemoveDrunkEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.RangedCombatEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__NewState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__PrevState__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAttackInfo             bpp__AttackInfo__pf            (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UCombatState*            bpp__combatState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::RangedCombatEvent(const struct FName& bpp__NewState__pf, const struct FName& bpp__PrevState__pf, const struct FAttackInfo& bpp__AttackInfo__pf, class UCombatState* bpp__combatState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.RangedCombatEvent"));

	struct
	{
		struct FName                   bpp__NewState__pf;
		struct FName                   bpp__PrevState__pf;
		struct FAttackInfo             bpp__AttackInfo__pf;
		class UCombatState*            bpp__combatState__pf;
	} params = {};

	params.bpp__NewState__pf = bpp__NewState__pf;
	params.bpp__PrevState__pf = bpp__PrevState__pf;
	params.bpp__AttackInfo__pf = bpp__AttackInfo__pf;
	params.bpp__combatState__pf = bpp__combatState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.QueueBloodParticlePlacement
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 bpp__CharMeshLocation__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__HitLocation__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__CauserLocation__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__HitActorlocation__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsRagdollHit__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::QueueBloodParticlePlacement(const struct FVector& bpp__CharMeshLocation__pf, const struct FVector& bpp__HitLocation__pf, const struct FVector& bpp__CauserLocation__pf, const struct FVector& bpp__HitActorlocation__pf, bool bpp__IsRagdollHit__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.QueueBloodParticlePlacement"));

	struct
	{
		struct FVector                 bpp__CharMeshLocation__pf;
		struct FVector                 bpp__HitLocation__pf;
		struct FVector                 bpp__CauserLocation__pf;
		struct FVector                 bpp__HitActorlocation__pf;
		bool                           bpp__IsRagdollHit__pf;
	} params = {};

	params.bpp__CharMeshLocation__pf = bpp__CharMeshLocation__pf;
	params.bpp__HitLocation__pf = bpp__HitLocation__pf;
	params.bpp__CauserLocation__pf = bpp__CauserLocation__pf;
	params.bpp__HitActorlocation__pf = bpp__HitActorlocation__pf;
	params.bpp__IsRagdollHit__pf = bpp__IsRagdollHit__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.PlayWwiseForceFeedback
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           bpp__AKxEvent__pfT             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::PlayWwiseForceFeedback(class UAkAudioEvent* bpp__AKxEvent__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.PlayWwiseForceFeedback"));

	struct
	{
		class UAkAudioEvent*           bpp__AKxEvent__pfT;
	} params = {};

	params.bpp__AKxEvent__pfT = bpp__AKxEvent__pfT;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.PlayParrySparkParticle
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FParryEventState        bpp__ParryEventState__pf__const (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class ATBLCharacter*           bpp__BlockingCharacter__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLCharacter*           bpp__BlockedCharacter__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::PlayParrySparkParticle(const struct FParryEventState& bpp__ParryEventState__pf__const, class ATBLCharacter* bpp__BlockingCharacter__pf, class ATBLCharacter* bpp__BlockedCharacter__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.PlayParrySparkParticle"));

	struct
	{
		struct FParryEventState        bpp__ParryEventState__pf__const;
		class ATBLCharacter*           bpp__BlockingCharacter__pf;
		class ATBLCharacter*           bpp__BlockedCharacter__pf;
	} params = {};

	params.bpp__ParryEventState__pf__const = bpp__ParryEventState__pf__const;
	params.bpp__BlockingCharacter__pf = bpp__BlockingCharacter__pf;
	params.bpp__BlockedCharacter__pf = bpp__BlockedCharacter__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.PlayDeathSound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGorePiece                     bpp__Selection__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EHeadGoreAction                bpp__HeadGoreAction__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ELimbGoreAction                bpp__LimbGoreAction__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::PlayDeathSound(EGorePiece bpp__Selection__pf, EHeadGoreAction bpp__HeadGoreAction__pf, ELimbGoreAction bpp__LimbGoreAction__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.PlayDeathSound"));

	struct
	{
		EGorePiece                     bpp__Selection__pf;
		EHeadGoreAction                bpp__HeadGoreAction__pf;
		ELimbGoreAction                bpp__LimbGoreAction__pf;
	} params = {};

	params.bpp__Selection__pf = bpp__Selection__pf;
	params.bpp__HeadGoreAction__pf = bpp__HeadGoreAction__pf;
	params.bpp__LimbGoreAction__pf = bpp__LimbGoreAction__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.PlayDeathAnimation
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__xx__pfTT                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::PlayDeathAnimation(bool* bpp__xx__pfTT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.PlayDeathAnimation"));

	struct
	{
		bool                           bpp__xx__pfTT;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__xx__pfTT != nullptr)
		*bpp__xx__pfTT = params.bpp__xx__pfTT;
}


// Function CharacterFx.CharacterFx_C.PerformLineTraceForFoot
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class ATBLCharacter*           bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 bpp__PhysMatString__pf         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::PerformLineTraceForFoot(class ATBLCharacter* bpp__Character__pf, struct FString* bpp__PhysMatString__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.PerformLineTraceForFoot"));

	struct
	{
		class ATBLCharacter*           bpp__Character__pf;
		struct FString                 bpp__PhysMatString__pf;
	} params = {};

	params.bpp__Character__pf = bpp__Character__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__PhysMatString__pf != nullptr)
		*bpp__PhysMatString__pf = params.bpp__PhysMatString__pf;
}


// Function CharacterFx.CharacterFx_C.OnWorldHit
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Location__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPhysicalMaterial*       bpp__PhysMaterial__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnWorldHit(class AActor* bpp__Actor__pf, const struct FVector& bpp__Location__pf, class UPhysicalMaterial* bpp__PhysMaterial__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnWorldHit"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		struct FVector                 bpp__Location__pf;
		class UPhysicalMaterial*       bpp__PhysMaterial__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Location__pf = bpp__Location__pf;
	params.bpp__PhysMaterial__pf = bpp__PhysMaterial__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnWasParried
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class ATBLCharacter*           bpp__ThisCharacter__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLCharacter*           bpp__OtherCharacter__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FParryEventState        bpp__ParryEventState__pf       (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnWasParried(class ATBLCharacter* bpp__ThisCharacter__pf, class ATBLCharacter* bpp__OtherCharacter__pf, const struct FParryEventState& bpp__ParryEventState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnWasParried"));

	struct
	{
		class ATBLCharacter*           bpp__ThisCharacter__pf;
		class ATBLCharacter*           bpp__OtherCharacter__pf;
		struct FParryEventState        bpp__ParryEventState__pf;
	} params = {};

	params.bpp__ThisCharacter__pf = bpp__ThisCharacter__pf;
	params.bpp__OtherCharacter__pf = bpp__OtherCharacter__pf;
	params.bpp__ParryEventState__pf = bpp__ParryEventState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnWasHitEarly_Event_1
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FEarlyHitResult         bpp__EarlyHit__pf__const       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnWasHitEarly_Event_1(const struct FEarlyHitResult& bpp__EarlyHit__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnWasHitEarly_Event_1"));

	struct
	{
		struct FEarlyHitResult         bpp__EarlyHit__pf__const;
	} params = {};

	params.bpp__EarlyHit__pf__const = bpp__EarlyHit__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnTeamChanged_Event_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATBLTeam*                bpp__NewTeam__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnTeamChanged_Event_1(class ATBLTeam* bpp__NewTeam__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnTeamChanged_Event_1"));

	struct
	{
		class ATBLTeam*                bpp__NewTeam__pf;
	} params = {};

	params.bpp__NewTeam__pf = bpp__NewTeam__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnStaminaCostFailed
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   bpp__Event__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnStaminaCostFailed(const struct FName& bpp__Event__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnStaminaCostFailed"));

	struct
	{
		struct FName                   bpp__Event__pf;
	} params = {};

	params.bpp__Event__pf = bpp__Event__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnRagdollHit
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class AActor*                  bpp__HitTaker__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__HitCauser__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AInventoryItem*          bpp__Weapon__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              bpp__HitResult__pf__const      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__HitDirection__pf__const   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Damage__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDamageSource*           bpp__DamageSource__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Projectile__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__AttackName__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnRagdollHit(class AActor* bpp__HitTaker__pf, class AActor* bpp__HitCauser__pf, class AInventoryItem* bpp__Weapon__pf, const struct FHitResult& bpp__HitResult__pf__const, const struct FVector& bpp__HitDirection__pf__const, float bpp__Damage__pf, class UDamageSource* bpp__DamageSource__pf, class AActor* bpp__Projectile__pf, const struct FName& bpp__AttackName__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnRagdollHit"));

	struct
	{
		class AActor*                  bpp__HitTaker__pf;
		class AActor*                  bpp__HitCauser__pf;
		class AInventoryItem*          bpp__Weapon__pf;
		struct FHitResult              bpp__HitResult__pf__const;
		struct FVector                 bpp__HitDirection__pf__const;
		float                          bpp__Damage__pf;
		class UDamageSource*           bpp__DamageSource__pf;
		class AActor*                  bpp__Projectile__pf;
		struct FName                   bpp__AttackName__pf;
	} params = {};

	params.bpp__HitTaker__pf = bpp__HitTaker__pf;
	params.bpp__HitCauser__pf = bpp__HitCauser__pf;
	params.bpp__Weapon__pf = bpp__Weapon__pf;
	params.bpp__HitResult__pf__const = bpp__HitResult__pf__const;
	params.bpp__HitDirection__pf__const = bpp__HitDirection__pf__const;
	params.bpp__Damage__pf = bpp__Damage__pf;
	params.bpp__DamageSource__pf = bpp__DamageSource__pf;
	params.bpp__Projectile__pf = bpp__Projectile__pf;
	params.bpp__AttackName__pf = bpp__AttackName__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnParrySuccess
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class ATBLCharacter*           bpp__ThisCharacter__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLCharacter*           bpp__OtherCharacter__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FParryEventState        bpp__ParryEventState__pf       (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnParrySuccess(class ATBLCharacter* bpp__ThisCharacter__pf, class ATBLCharacter* bpp__OtherCharacter__pf, const struct FParryEventState& bpp__ParryEventState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnParrySuccess"));

	struct
	{
		class ATBLCharacter*           bpp__ThisCharacter__pf;
		class ATBLCharacter*           bpp__OtherCharacter__pf;
		struct FParryEventState        bpp__ParryEventState__pf;
	} params = {};

	params.bpp__ThisCharacter__pf = bpp__ThisCharacter__pf;
	params.bpp__OtherCharacter__pf = bpp__OtherCharacter__pf;
	params.bpp__ParryEventState__pf = bpp__ParryEventState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnMountSiegeEngine
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class ASiegeEngine*            bpp__SiegeEngine__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnMountSiegeEngine(class ASiegeEngine* bpp__SiegeEngine__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnMountSiegeEngine"));

	struct
	{
		class ASiegeEngine*            bpp__SiegeEngine__pf;
	} params = {};

	params.bpp__SiegeEngine__pf = bpp__SiegeEngine__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnMatchEnded_Event_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterFx_C::OnMatchEnded_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnMatchEnded_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnInventoryProjectileHitPassiveShield
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AInventoryItem*          bpp__Shield__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AInventoryItem*          bpp__Projectile__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnInventoryProjectileHitPassiveShield(class AInventoryItem* bpp__Shield__pf, class AInventoryItem* bpp__Projectile__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnInventoryProjectileHitPassiveShield"));

	struct
	{
		class AInventoryItem*          bpp__Shield__pf;
		class AInventoryItem*          bpp__Projectile__pf;
	} params = {};

	params.bpp__Shield__pf = bpp__Shield__pf;
	params.bpp__Projectile__pf = bpp__Projectile__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnInventoryItemDamageStateChanged
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AInventoryItem*          bpp__Item__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EInventoryItemDamagedState     bpp__DamagedState__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnInventoryItemDamageStateChanged(class AInventoryItem* bpp__Item__pf, EInventoryItemDamagedState bpp__DamagedState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnInventoryItemDamageStateChanged"));

	struct
	{
		class AInventoryItem*          bpp__Item__pf;
		EInventoryItemDamagedState     bpp__DamagedState__pf;
	} params = {};

	params.bpp__Item__pf = bpp__Item__pf;
	params.bpp__DamagedState__pf = bpp__DamagedState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnInventoryItemDamaged
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AInventoryItem*          bpp__Item__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FInventoryItemDamagedParams bpp__Params__pf                (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnInventoryItemDamaged(class AInventoryItem* bpp__Item__pf, const struct FInventoryItemDamagedParams& bpp__Params__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnInventoryItemDamaged"));

	struct
	{
		class AInventoryItem*          bpp__Item__pf;
		struct FInventoryItemDamagedParams bpp__Params__pf;
	} params = {};

	params.bpp__Item__pf = bpp__Item__pf;
	params.bpp__Params__pf = bpp__Params__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnInventoryActionFailed
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// EFailedInventoryAction         bpp__Action__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnInventoryActionFailed(EFailedInventoryAction bpp__Action__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnInventoryActionFailed"));

	struct
	{
		EFailedInventoryAction         bpp__Action__pf;
	} params = {};

	params.bpp__Action__pf = bpp__Action__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnHorseSpeedRequirementFailed
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__Event__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnHorseSpeedRequirementFailed(const struct FName& bpp__Event__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnHorseSpeedRequirementFailed"));

	struct
	{
		struct FName                   bpp__Event__pf;
	} params = {};

	params.bpp__Event__pf = bpp__Event__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnHealOverTimeStart
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// EHealingSource                 bpp__HealingSource__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLPlayerState*         bpp__InstigatingPlayerState__pf__const (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnHealOverTimeStart(EHealingSource bpp__HealingSource__pf, class ATBLPlayerState* bpp__InstigatingPlayerState__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnHealOverTimeStart"));

	struct
	{
		EHealingSource                 bpp__HealingSource__pf;
		class ATBLPlayerState*         bpp__InstigatingPlayerState__pf__const;
	} params = {};

	params.bpp__HealingSource__pf = bpp__HealingSource__pf;
	params.bpp__InstigatingPlayerState__pf__const = bpp__InstigatingPlayerState__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnHealOverTimeEnd
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UCharacterFx_C::OnHealOverTimeEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnHealOverTimeEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnHealOverTimeAdded
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// EHealingSource                 bpp__HealingSource__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLPlayerState*         bpp__InstigatingPlayerState__pf__const (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnHealOverTimeAdded(EHealingSource bpp__HealingSource__pf, class ATBLPlayerState* bpp__InstigatingPlayerState__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnHealOverTimeAdded"));

	struct
	{
		EHealingSource                 bpp__HealingSource__pf;
		class ATBLPlayerState*         bpp__InstigatingPlayerState__pf__const;
	} params = {};

	params.bpp__HealingSource__pf = bpp__HealingSource__pf;
	params.bpp__InstigatingPlayerState__pf__const = bpp__InstigatingPlayerState__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnGamepadInputModeChanged_Event_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGamepadInputMode              bpp__GamepadInputMode__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnGamepadInputModeChanged_Event_1(EGamepadInputMode bpp__GamepadInputMode__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnGamepadInputModeChanged_Event_1"));

	struct
	{
		EGamepadInputMode              bpp__GamepadInputMode__pf;
	} params = {};

	params.bpp__GamepadInputMode__pf = bpp__GamepadInputMode__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnDismountSiegeEngine
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class ASiegeEngine*            bpp__SiegeEngine__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Forced__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnDismountSiegeEngine(class ASiegeEngine* bpp__SiegeEngine__pf, bool bpp__Forced__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnDismountSiegeEngine"));

	struct
	{
		class ASiegeEngine*            bpp__SiegeEngine__pf;
		bool                           bpp__Forced__pf;
	} params = {};

	params.bpp__SiegeEngine__pf = bpp__SiegeEngine__pf;
	params.bpp__Forced__pf = bpp__Forced__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnDamageTaken
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageEvent__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnDamageTaken(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnDamageTaken"));

	struct
	{
		struct FDamageTakenEvent       bpp__DamageEvent__pf__const;
	} params = {};

	params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnDamageCaused
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageEvent__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnDamageCaused(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnDamageCaused"));

	struct
	{
		struct FDamageTakenEvent       bpp__DamageEvent__pf__const;
	} params = {};

	params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnCrowdControlNoDamage
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  bpp__OwningActor__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__combatState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCrowdControlParams     bpp__CrowdControlParams__pf    (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnCrowdControlNoDamage(class AActor* bpp__OwningActor__pf, const struct FName& bpp__combatState__pf, const struct FCrowdControlParams& bpp__CrowdControlParams__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnCrowdControlNoDamage"));

	struct
	{
		class AActor*                  bpp__OwningActor__pf;
		struct FName                   bpp__combatState__pf;
		struct FCrowdControlParams     bpp__CrowdControlParams__pf;
	} params = {};

	params.bpp__OwningActor__pf = bpp__OwningActor__pf;
	params.bpp__combatState__pf = bpp__combatState__pf;
	params.bpp__CrowdControlParams__pf = bpp__CrowdControlParams__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnConstruct
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnConstruct(class AActor* bpp__Actor__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnConstruct"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnCombatStateChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__PreviousState__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__NewState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAttackInfo             bpp__EventAttackInfo__pf__const (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UCombatState*            bpp__InCombatState__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnCombatStateChanged(class AActor* bpp__Actor__pf, const struct FName& bpp__PreviousState__pf, const struct FName& bpp__NewState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf__const, class UCombatState* bpp__InCombatState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnCombatStateChanged"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		struct FName                   bpp__PreviousState__pf;
		struct FName                   bpp__NewState__pf;
		struct FAttackInfo             bpp__EventAttackInfo__pf__const;
		class UCombatState*            bpp__InCombatState__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__PreviousState__pf = bpp__PreviousState__pf;
	params.bpp__NewState__pf = bpp__NewState__pf;
	params.bpp__EventAttackInfo__pf__const = bpp__EventAttackInfo__pf__const;
	params.bpp__InCombatState__pf = bpp__InCombatState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnClash
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class ATBLCharacter*           bpp__InitiatorCharacter__pf    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLCharacter*           bpp__TargetCharacter__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FClashEventState        bpp__ClashEventState__pf       (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnClash(class ATBLCharacter* bpp__InitiatorCharacter__pf, class ATBLCharacter* bpp__TargetCharacter__pf, const struct FClashEventState& bpp__ClashEventState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnClash"));

	struct
	{
		class ATBLCharacter*           bpp__InitiatorCharacter__pf;
		class ATBLCharacter*           bpp__TargetCharacter__pf;
		struct FClashEventState        bpp__ClashEventState__pf;
	} params = {};

	params.bpp__InitiatorCharacter__pf = bpp__InitiatorCharacter__pf;
	params.bpp__TargetCharacter__pf = bpp__TargetCharacter__pf;
	params.bpp__ClashEventState__pf = bpp__ClashEventState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnCharacterLanded
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FLandedResult           bpp__LandedResult__pf__const   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnCharacterLanded(const struct FLandedResult& bpp__LandedResult__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnCharacterLanded"));

	struct
	{
		struct FLandedResult           bpp__LandedResult__pf__const;
	} params = {};

	params.bpp__LandedResult__pf__const = bpp__LandedResult__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnBlocked
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnBlocked(class AActor* bpp__Actor__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnBlocked"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnAssemble_CharacterFx
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterFx_C::OnAssemble_CharacterFx()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnAssemble_CharacterFx"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnAnimNotifyStepEvent
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UCharacterFx_C::OnAnimNotifyStepEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnAnimNotifyStepEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.OnAbilityError
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  bpp__Initiator__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EResultCode>       bpp__Code__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AAbilityInvocation*      bpp__Invocation__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__AttackName__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*AInventoryItem*/ bpp__ItemClass__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnAbilityError(class AActor* bpp__Initiator__pf, TEnumAsByte<EResultCode> bpp__Code__pf, class AAbilityInvocation* bpp__Invocation__pf, const struct FName& bpp__AttackName__pf, class UClass* /*AInventoryItem*/ bpp__ItemClass__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.OnAbilityError"));

	struct
	{
		class AActor*                  bpp__Initiator__pf;
		TEnumAsByte<EResultCode>       bpp__Code__pf;
		class AAbilityInvocation*      bpp__Invocation__pf;
		struct FName                   bpp__AttackName__pf;
		class UClass* /*AInventoryItem*/ bpp__ItemClass__pf;
	} params = {};

	params.bpp__Initiator__pf = bpp__Initiator__pf;
	params.bpp__Code__pf = bpp__Code__pf;
	params.bpp__Invocation__pf = bpp__Invocation__pf;
	params.bpp__AttackName__pf = bpp__AttackName__pf;
	params.bpp__ItemClass__pf = bpp__ItemClass__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.IsAttackKick
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   bpp__AttackName__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsDash__pf                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::IsAttackKick(const struct FName& bpp__AttackName__pf, bool* bpp__IsDash__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.IsAttackKick"));

	struct
	{
		struct FName                   bpp__AttackName__pf;
		bool                           bpp__IsDash__pf;
	} params = {};

	params.bpp__AttackName__pf = bpp__AttackName__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__IsDash__pf != nullptr)
		*bpp__IsDash__pf = params.bpp__IsDash__pf;
}


// Function CharacterFx.CharacterFx_C.IsAttackDash
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   bpp__AttackName__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsDash__pf                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::IsAttackDash(const struct FName& bpp__AttackName__pf, bool* bpp__IsDash__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.IsAttackDash"));

	struct
	{
		struct FName                   bpp__AttackName__pf;
		bool                           bpp__IsDash__pf;
	} params = {};

	params.bpp__AttackName__pf = bpp__AttackName__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__IsDash__pf != nullptr)
		*bpp__IsDash__pf = params.bpp__IsDash__pf;
}


// Function CharacterFx.CharacterFx_C.HasHorse
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AHorse*                  bpp__Horse__pf                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::HasHorse(class UObject* bpp__Actor__pf, class AHorse** bpp__Horse__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.HasHorse"));

	struct
	{
		class UObject*                 bpp__Actor__pf;
		class AHorse*                  bpp__Horse__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Horse__pf != nullptr)
		*bpp__Horse__pf = params.bpp__Horse__pf;
}


// Function CharacterFx.CharacterFx_C.GotoRagdoll
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATBLCharacter*           bpp__x__pfT                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::GotoRagdoll(class ATBLCharacter* bpp__x__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.GotoRagdoll"));

	struct
	{
		class ATBLCharacter*           bpp__x__pfT;
	} params = {};

	params.bpp__x__pfT = bpp__x__pfT;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.GoreEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageTakenEvent__pf      (CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::GoreEvent(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.GoreEvent"));

	struct
	{
		struct FDamageTakenEvent       bpp__DamageTakenEvent__pf;
	} params = {};

	params.bpp__DamageTakenEvent__pf = bpp__DamageTakenEvent__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.Get This Actor Health Percent
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__Health__pf                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::Get_This_Actor_Health_Percent(float* bpp__Health__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.Get This Actor Health Percent"));

	struct
	{
		float                          bpp__Health__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Health__pf != nullptr)
		*bpp__Health__pf = params.bpp__Health__pf;
}


// Function CharacterFx.CharacterFx_C.GetWeaponRagdollImpulseStrength (Body)
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  bpp__Attacker__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Force__pf                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::GetWeaponRagdollImpulseStrength__Body_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.GetWeaponRagdollImpulseStrength (Body)"));

	struct
	{
		class AActor*                  bpp__Attacker__pf;
		float                          bpp__Force__pf;
	} params = {};

	params.bpp__Attacker__pf = bpp__Attacker__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Force__pf != nullptr)
		*bpp__Force__pf = params.bpp__Force__pf;
}


// Function CharacterFx.CharacterFx_C.GetRangedRagdollImpulseStrength (Limb)
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  bpp__Attacker__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Force__pf                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::GetRangedRagdollImpulseStrength__Limb_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.GetRangedRagdollImpulseStrength (Limb)"));

	struct
	{
		class AActor*                  bpp__Attacker__pf;
		float                          bpp__Force__pf;
	} params = {};

	params.bpp__Attacker__pf = bpp__Attacker__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Force__pf != nullptr)
		*bpp__Force__pf = params.bpp__Force__pf;
}


// Function CharacterFx.CharacterFx_C.GetRangedRagdollImpulseStrength (Body)
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  bpp__Attacker__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Force__pf                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::GetRangedRagdollImpulseStrength__Body_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.GetRangedRagdollImpulseStrength (Body)"));

	struct
	{
		class AActor*                  bpp__Attacker__pf;
		float                          bpp__Force__pf;
	} params = {};

	params.bpp__Attacker__pf = bpp__Attacker__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Force__pf != nullptr)
		*bpp__Force__pf = params.bpp__Force__pf;
}


// Function CharacterFx.CharacterFx_C.GetRagdollImpulseStrength (Limb)
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  bpp__Attacker__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Force__pf                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::GetRagdollImpulseStrength__Limb_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.GetRagdollImpulseStrength (Limb)"));

	struct
	{
		class AActor*                  bpp__Attacker__pf;
		float                          bpp__Force__pf;
	} params = {};

	params.bpp__Attacker__pf = bpp__Attacker__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Force__pf != nullptr)
		*bpp__Force__pf = params.bpp__Force__pf;
}


// Function CharacterFx.CharacterFx_C.GetPlayerCameraManager
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerCameraManager*    bpp__PlayerCameraManager__pf   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Success__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::GetPlayerCameraManager(class APlayerCameraManager** bpp__PlayerCameraManager__pf, bool* bpp__Success__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.GetPlayerCameraManager"));

	struct
	{
		class APlayerCameraManager*    bpp__PlayerCameraManager__pf;
		bool                           bpp__Success__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__PlayerCameraManager__pf != nullptr)
		*bpp__PlayerCameraManager__pf = params.bpp__PlayerCameraManager__pf;
	if (bpp__Success__pf != nullptr)
		*bpp__Success__pf = params.bpp__Success__pf;
}


// Function CharacterFx.CharacterFx_C.GetLocalPlayerState
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class ATBLPlayerState*         bpp__AsTBLPlayerxState__pfT    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::GetLocalPlayerState(class ATBLPlayerState** bpp__AsTBLPlayerxState__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.GetLocalPlayerState"));

	struct
	{
		class ATBLPlayerState*         bpp__AsTBLPlayerxState__pfT;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__AsTBLPlayerxState__pfT != nullptr)
		*bpp__AsTBLPlayerxState__pfT = params.bpp__AsTBLPlayerxState__pfT;
}


// Function CharacterFx.CharacterFx_C.GetHitDirection
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Causer__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Taker__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__HitDirection__pf          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::GetHitDirection(class AActor* bpp__Causer__pf, class AActor* bpp__Taker__pf, float* bpp__HitDirection__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.GetHitDirection"));

	struct
	{
		class AActor*                  bpp__Causer__pf;
		class AActor*                  bpp__Taker__pf;
		float                          bpp__HitDirection__pf;
	} params = {};

	params.bpp__Causer__pf = bpp__Causer__pf;
	params.bpp__Taker__pf = bpp__Taker__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__HitDirection__pf != nullptr)
		*bpp__HitDirection__pf = params.bpp__HitDirection__pf;
}


// Function CharacterFx.CharacterFx_C.GetBloodParticle
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__Ability__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AInventoryItem*          bpp__Item__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UParticleSystem*         bpp__Particle__pf              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsValid__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::GetBloodParticle(const struct FName& bpp__Ability__pf, class AInventoryItem* bpp__Item__pf, class UParticleSystem** bpp__Particle__pf, bool* bpp__IsValid__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.GetBloodParticle"));

	struct
	{
		struct FName                   bpp__Ability__pf;
		class AInventoryItem*          bpp__Item__pf;
		class UParticleSystem*         bpp__Particle__pf;
		bool                           bpp__IsValid__pf;
	} params = {};

	params.bpp__Ability__pf = bpp__Ability__pf;
	params.bpp__Item__pf = bpp__Item__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Particle__pf != nullptr)
		*bpp__Particle__pf = params.bpp__Particle__pf;
	if (bpp__IsValid__pf != nullptr)
		*bpp__IsValid__pf = params.bpp__IsValid__pf;
}


// Function CharacterFx.CharacterFx_C.ForceFeedback (Directional)
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UForceFeedbackEffect*    bpp__ForceFeedbackEffect__pf   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__IntensityMultiplier__pf   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Location__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                bpp__Rotation__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ForceFeedback__Directional_(class UForceFeedbackEffect* bpp__ForceFeedbackEffect__pf, float bpp__IntensityMultiplier__pf, const struct FVector& bpp__Location__pf, const struct FRotator& bpp__Rotation__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ForceFeedback (Directional)"));

	struct
	{
		class UForceFeedbackEffect*    bpp__ForceFeedbackEffect__pf;
		float                          bpp__IntensityMultiplier__pf;
		struct FVector                 bpp__Location__pf;
		struct FRotator                bpp__Rotation__pf;
	} params = {};

	params.bpp__ForceFeedbackEffect__pf = bpp__ForceFeedbackEffect__pf;
	params.bpp__IntensityMultiplier__pf = bpp__IntensityMultiplier__pf;
	params.bpp__Location__pf = bpp__Location__pf;
	params.bpp__Rotation__pf = bpp__Rotation__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ForceFeedback
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UForceFeedbackEffect*    bpp__ForceFeedbackEffect__pf   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__IntensityMultiplier__pf   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ForceFeedback(class UForceFeedbackEffect* bpp__ForceFeedbackEffect__pf, float bpp__IntensityMultiplier__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ForceFeedback"));

	struct
	{
		class UForceFeedbackEffect*    bpp__ForceFeedbackEffect__pf;
		float                          bpp__IntensityMultiplier__pf;
	} params = {};

	params.bpp__ForceFeedbackEffect__pf = bpp__ForceFeedbackEffect__pf;
	params.bpp__IntensityMultiplier__pf = bpp__IntensityMultiplier__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.FadeEmber
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterFx_C::FadeEmber()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.FadeEmber"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_10
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ExecuteUbergraph_CharacterFx_10(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_10"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_7
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ExecuteUbergraph_CharacterFx_7(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_7"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_6
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ExecuteUbergraph_CharacterFx_6(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_6"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_40
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ExecuteUbergraph_CharacterFx_40(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_40"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_4
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ExecuteUbergraph_CharacterFx_4(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_4"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_28
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ExecuteUbergraph_CharacterFx_28(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_28"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_25
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ExecuteUbergraph_CharacterFx_25(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_25"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_3
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ExecuteUbergraph_CharacterFx_3(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_3"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_2
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ExecuteUbergraph_CharacterFx_2(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_2"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params = {};

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.EquipState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterFx_C::EquipState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.EquipState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.DrunkCameraShakeTick
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterFx_C::DrunkCameraShakeTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.DrunkCameraShakeTick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.DisableClientBloodSplatter
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterFx_C::DisableClientBloodSplatter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.DisableClientBloodSplatter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.DeathGore
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageTakenEvent__pf      (CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::DeathGore(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.DeathGore"));

	struct
	{
		struct FDamageTakenEvent       bpp__DamageTakenEvent__pf;
	} params = {};

	params.bpp__DamageTakenEvent__pf = bpp__DamageTakenEvent__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.CrosshairOnCooldown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATBLCharacter*           bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__AttackName__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::CrosshairOnCooldown(class ATBLCharacter* bpp__Character__pf, const struct FName& bpp__AttackName__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.CrosshairOnCooldown"));

	struct
	{
		class ATBLCharacter*           bpp__Character__pf;
		struct FName                   bpp__AttackName__pf;
	} params = {};

	params.bpp__Character__pf = bpp__Character__pf;
	params.bpp__AttackName__pf = bpp__AttackName__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.CrosshairEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__Event__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Enable__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Scaling__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsPositive__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::CrosshairEvent(const struct FName& bpp__Event__pf, bool bpp__Enable__pf, float bpp__Scaling__pf, bool bpp__IsPositive__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.CrosshairEvent"));

	struct
	{
		struct FName                   bpp__Event__pf;
		bool                           bpp__Enable__pf;
		float                          bpp__Scaling__pf;
		bool                           bpp__IsPositive__pf;
	} params = {};

	params.bpp__Event__pf = bpp__Event__pf;
	params.bpp__Enable__pf = bpp__Enable__pf;
	params.bpp__Scaling__pf = bpp__Scaling__pf;
	params.bpp__IsPositive__pf = bpp__IsPositive__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.CrosshairDamageTakenEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__Damage__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__HitDirection__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::CrosshairDamageTakenEvent(float bpp__Damage__pf, float bpp__HitDirection__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.CrosshairDamageTakenEvent"));

	struct
	{
		float                          bpp__Damage__pf;
		float                          bpp__HitDirection__pf;
	} params = {};

	params.bpp__Damage__pf = bpp__Damage__pf;
	params.bpp__HitDirection__pf = bpp__HitDirection__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.CrosshairDamageEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__Event__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDamageTakenEvent       bpp__Damage__pf                (CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsEnemy__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::CrosshairDamageEvent(const struct FName& bpp__Event__pf, const struct FDamageTakenEvent& bpp__Damage__pf, bool bpp__IsEnemy__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.CrosshairDamageEvent"));

	struct
	{
		struct FName                   bpp__Event__pf;
		struct FDamageTakenEvent       bpp__Damage__pf;
		bool                           bpp__IsEnemy__pf;
	} params = {};

	params.bpp__Event__pf = bpp__Event__pf;
	params.bpp__Damage__pf = bpp__Damage__pf;
	params.bpp__IsEnemy__pf = bpp__IsEnemy__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.CanRemoveHelmet
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__CanRemoveHelmet__pf       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::CanRemoveHelmet(bool* bpp__CanRemoveHelmet__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.CanRemoveHelmet"));

	struct
	{
		bool                           bpp__CanRemoveHelmet__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__CanRemoveHelmet__pf != nullptr)
		*bpp__CanRemoveHelmet__pf = params.bpp__CanRemoveHelmet__pf;
}


// Function CharacterFx.CharacterFx_C.CanAddLocalFx
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__x__pfT                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::CanAddLocalFx(bool* bpp__x__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.CanAddLocalFx"));

	struct
	{
		bool                           bpp__x__pfT;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__x__pfT != nullptr)
		*bpp__x__pfT = params.bpp__x__pfT;
}


// Function CharacterFx.CharacterFx_C.BreakAtClosestBone
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Causer__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__HitLocaton__pf__const     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Impulse__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__HitBone__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsRagdollHit__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__DamageTakerCombatState__pf (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__AttachParent__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTBL_FGoreEvent         bpp__GoreEvent__pf             (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsKillingBlow__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Success__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGorePiece                     bpp__Selection__pf             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__BoneName__pf              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::BreakAtClosestBone(class AActor* bpp__Actor__pf, class AActor* bpp__Causer__pf, const struct FVector& bpp__HitLocaton__pf__const, const struct FVector& bpp__Impulse__pf, const struct FName& bpp__HitBone__pf, bool bpp__IsRagdollHit__pf, const struct FName& bpp__DamageTakerCombatState__pf, class AActor* bpp__AttachParent__pf, const struct FTBL_FGoreEvent& bpp__GoreEvent__pf, bool bpp__IsKillingBlow__pf, bool* bpp__Success__pf, EGorePiece* bpp__Selection__pf, struct FName* bpp__BoneName__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.BreakAtClosestBone"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		class AActor*                  bpp__Causer__pf;
		struct FVector                 bpp__HitLocaton__pf__const;
		struct FVector                 bpp__Impulse__pf;
		struct FName                   bpp__HitBone__pf;
		bool                           bpp__IsRagdollHit__pf;
		struct FName                   bpp__DamageTakerCombatState__pf;
		class AActor*                  bpp__AttachParent__pf;
		struct FTBL_FGoreEvent         bpp__GoreEvent__pf;
		bool                           bpp__IsKillingBlow__pf;
		bool                           bpp__Success__pf;
		EGorePiece                     bpp__Selection__pf;
		struct FName                   bpp__BoneName__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Causer__pf = bpp__Causer__pf;
	params.bpp__HitLocaton__pf__const = bpp__HitLocaton__pf__const;
	params.bpp__Impulse__pf = bpp__Impulse__pf;
	params.bpp__HitBone__pf = bpp__HitBone__pf;
	params.bpp__IsRagdollHit__pf = bpp__IsRagdollHit__pf;
	params.bpp__DamageTakerCombatState__pf = bpp__DamageTakerCombatState__pf;
	params.bpp__AttachParent__pf = bpp__AttachParent__pf;
	params.bpp__GoreEvent__pf = bpp__GoreEvent__pf;
	params.bpp__IsKillingBlow__pf = bpp__IsKillingBlow__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Success__pf != nullptr)
		*bpp__Success__pf = params.bpp__Success__pf;
	if (bpp__Selection__pf != nullptr)
		*bpp__Selection__pf = params.bpp__Selection__pf;
	if (bpp__BoneName__pf != nullptr)
		*bpp__BoneName__pf = params.bpp__BoneName__pf;
}


// Function CharacterFx.CharacterFx_C.BeakBodyPart
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              bpp__Char__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__BoneName__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Impulse__pf__const        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__HitLocation__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGorePiece                     bpp__Selection__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EHeadGoreAction                bpp__HeadGoreAction__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ELimbGoreAction                bpp__LimbGoreAction__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__SpawnedItem__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UCharacterFx_C::BeakBodyPart(class ACharacter* bpp__Char__pf, const struct FName& bpp__BoneName__pf, const struct FVector& bpp__Impulse__pf__const, const struct FVector& bpp__HitLocation__pf__const, EGorePiece bpp__Selection__pf, EHeadGoreAction bpp__HeadGoreAction__pf, ELimbGoreAction bpp__LimbGoreAction__pf, bool bpp__SpawnedItem__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.BeakBodyPart"));

	struct
	{
		class ACharacter*              bpp__Char__pf;
		struct FName                   bpp__BoneName__pf;
		struct FVector                 bpp__Impulse__pf__const;
		struct FVector                 bpp__HitLocation__pf__const;
		EGorePiece                     bpp__Selection__pf;
		EHeadGoreAction                bpp__HeadGoreAction__pf;
		ELimbGoreAction                bpp__LimbGoreAction__pf;
		bool                           bpp__SpawnedItem__pf;
		bool                           ReturnValue;
	} params = {};

	params.bpp__Char__pf = bpp__Char__pf;
	params.bpp__BoneName__pf = bpp__BoneName__pf;
	params.bpp__Impulse__pf__const = bpp__Impulse__pf__const;
	params.bpp__HitLocation__pf__const = bpp__HitLocation__pf__const;
	params.bpp__Selection__pf = bpp__Selection__pf;
	params.bpp__HeadGoreAction__pf = bpp__HeadGoreAction__pf;
	params.bpp__LimbGoreAction__pf = bpp__LimbGoreAction__pf;
	params.bpp__SpawnedItem__pf = bpp__SpawnedItem__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function CharacterFx.CharacterFx_C.AttachToBallistaBolt
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Projectile__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Attached__pf              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::AttachToBallistaBolt(class AActor* bpp__Actor__pf, class AActor* bpp__Projectile__pf, bool* bpp__Attached__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.AttachToBallistaBolt"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		class AActor*                  bpp__Projectile__pf;
		bool                           bpp__Attached__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Projectile__pf = bpp__Projectile__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Attached__pf != nullptr)
		*bpp__Attached__pf = params.bpp__Attached__pf;
}


// Function CharacterFx.CharacterFx_C.ApplyRagdollImpactImpulse
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FHitResult              bpp__Hit__pf__const            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Attacker__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 bpp__Projectile__pf__const     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__HitDirection__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Scaling__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__AbilitiesTableRow__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDamageSource*           bpp__DamageSource__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ApplyRagdollImpactImpulse(const struct FHitResult& bpp__Hit__pf__const, class AActor* bpp__Attacker__pf, class UObject* bpp__Projectile__pf__const, const struct FVector& bpp__HitDirection__pf, float bpp__Scaling__pf, const struct FName& bpp__AbilitiesTableRow__pf, class UDamageSource* bpp__DamageSource__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ApplyRagdollImpactImpulse"));

	struct
	{
		struct FHitResult              bpp__Hit__pf__const;
		class AActor*                  bpp__Attacker__pf;
		class UObject*                 bpp__Projectile__pf__const;
		struct FVector                 bpp__HitDirection__pf;
		float                          bpp__Scaling__pf;
		struct FName                   bpp__AbilitiesTableRow__pf;
		class UDamageSource*           bpp__DamageSource__pf;
	} params = {};

	params.bpp__Hit__pf__const = bpp__Hit__pf__const;
	params.bpp__Attacker__pf = bpp__Attacker__pf;
	params.bpp__Projectile__pf__const = bpp__Projectile__pf__const;
	params.bpp__HitDirection__pf = bpp__HitDirection__pf;
	params.bpp__Scaling__pf = bpp__Scaling__pf;
	params.bpp__AbilitiesTableRow__pf = bpp__AbilitiesTableRow__pf;
	params.bpp__DamageSource__pf = bpp__DamageSource__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.ApplyDrunkEffect
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__Enable__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::ApplyDrunkEffect(bool bpp__Enable__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.ApplyDrunkEffect"));

	struct
	{
		bool                           bpp__Enable__pf;
	} params = {};

	params.bpp__Enable__pf = bpp__Enable__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.AddLocalFxStack
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UParticleSystem*         bpp__Particle__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__Value__pf__const          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::AddLocalFxStack(class UParticleSystem* bpp__Particle__pf, int bpp__Value__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.AddLocalFxStack"));

	struct
	{
		class UParticleSystem*         bpp__Particle__pf;
		int                            bpp__Value__pf__const;
	} params = {};

	params.bpp__Particle__pf = bpp__Particle__pf;
	params.bpp__Value__pf__const = bpp__Value__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.AddLocalFx
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UParticleSystem*         bpp__Particle__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__Intensity__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::AddLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.AddLocalFx"));

	struct
	{
		class UParticleSystem*         bpp__Particle__pf;
		int                            bpp__Intensity__pf;
	} params = {};

	params.bpp__Particle__pf = bpp__Particle__pf;
	params.bpp__Intensity__pf = bpp__Intensity__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.AddKill
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::AddKill(class AActor* bpp__Actor__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.AddKill"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterFx.CharacterFx_C.AddHelmetForce
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterFx_C::AddHelmetForce()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterFx.CharacterFx_C.AddHelmetForce"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction CharacterFx.CharacterFx_C.TeamChangedSignature__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class ATBLTeam*                bpp__NewTeam__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::TeamChangedSignature__DelegateSignature(class ATBLTeam* bpp__NewTeam__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction CharacterFx.CharacterFx_C.TeamChangedSignature__DelegateSignature"));

	struct
	{
		class ATBLTeam*                bpp__NewTeam__pf;
	} params = {};

	params.bpp__NewTeam__pf = bpp__NewTeam__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction CharacterFx.CharacterFx_C.OnWasHitEarly__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FEarlyHitResult         bpp__EarlyHit__pf              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnWasHitEarly__DelegateSignature(const struct FEarlyHitResult& bpp__EarlyHit__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction CharacterFx.CharacterFx_C.OnWasHitEarly__DelegateSignature"));

	struct
	{
		struct FEarlyHitResult         bpp__EarlyHit__pf;
	} params = {};

	params.bpp__EarlyHit__pf = bpp__EarlyHit__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction CharacterFx.CharacterFx_C.OnHorseSpeedRequirementFailed__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   bpp__Event__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnHorseSpeedRequirementFailed__DelegateSignature(const struct FName& bpp__Event__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction CharacterFx.CharacterFx_C.OnHorseSpeedRequirementFailed__DelegateSignature"));

	struct
	{
		struct FName                   bpp__Event__pf;
	} params = {};

	params.bpp__Event__pf = bpp__Event__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction CharacterFx.CharacterFx_C.OnGamepadInputModeSwitchEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// EGamepadInputMode              bpp__GamepadInputMode__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterFx_C::OnGamepadInputModeSwitchEvent__DelegateSignature(EGamepadInputMode bpp__GamepadInputMode__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction CharacterFx.CharacterFx_C.OnGamepadInputModeSwitchEvent__DelegateSignature"));

	struct
	{
		EGamepadInputMode              bpp__GamepadInputMode__pf;
	} params = {};

	params.bpp__GamepadInputMode__pf = bpp__GamepadInputMode__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction CharacterFx.CharacterFx_C.MatchEndedSignature__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void UCharacterFx_C::MatchEndedSignature__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction CharacterFx.CharacterFx_C.MatchEndedSignature__DelegateSignature"));

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
