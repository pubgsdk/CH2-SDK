// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseFx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseFx.HorseFx_C.SpawnGoreBlood
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EGorePiece                     bpp__Piece__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__Bone__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Location__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ACharacter*              bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::SpawnGoreBlood(EGorePiece bpp__Piece__pf, const struct FName& bpp__Bone__pf, const struct FVector& bpp__Location__pf, class ACharacter* bpp__Character__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.SpawnGoreBlood"));

	struct
	{
		EGorePiece                     bpp__Piece__pf;
		struct FName                   bpp__Bone__pf;
		struct FVector                 bpp__Location__pf;
		class ACharacter*              bpp__Character__pf;
	} params = {};

	params.bpp__Piece__pf = bpp__Piece__pf;
	params.bpp__Bone__pf = bpp__Bone__pf;
	params.bpp__Location__pf = bpp__Location__pf;
	params.bpp__Character__pf = bpp__Character__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.ResetEmergencyBreakAudio
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UHorseFx_C::ResetEmergencyBreakAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.ResetEmergencyBreakAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.ResetBreakAudio
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UHorseFx_C::ResetBreakAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.ResetBreakAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.RagdollHorse
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              bpp__Char__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__BoneName__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::RagdollHorse(class ACharacter* bpp__Char__pf, const struct FName& bpp__BoneName__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.RagdollHorse"));

	struct
	{
		class ACharacter*              bpp__Char__pf;
		struct FName                   bpp__BoneName__pf;
	} params = {};

	params.bpp__Char__pf = bpp__Char__pf;
	params.bpp__BoneName__pf = bpp__BoneName__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.PlayMediumImpactSound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__ImpactedPlayer__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__ImpactedHorse__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::PlayMediumImpactSound(bool bpp__ImpactedPlayer__pf, bool bpp__ImpactedHorse__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.PlayMediumImpactSound"));

	struct
	{
		bool                           bpp__ImpactedPlayer__pf;
		bool                           bpp__ImpactedHorse__pf;
	} params = {};

	params.bpp__ImpactedPlayer__pf = bpp__ImpactedPlayer__pf;
	params.bpp__ImpactedHorse__pf = bpp__ImpactedHorse__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.PlayLightImpactSound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__ImpactedPlayer__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__ImpactedHorse__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::PlayLightImpactSound(bool bpp__ImpactedPlayer__pf, bool bpp__ImpactedHorse__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.PlayLightImpactSound"));

	struct
	{
		bool                           bpp__ImpactedPlayer__pf;
		bool                           bpp__ImpactedHorse__pf;
	} params = {};

	params.bpp__ImpactedPlayer__pf = bpp__ImpactedPlayer__pf;
	params.bpp__ImpactedHorse__pf = bpp__ImpactedHorse__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.PlayHeavyImapctSound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__ImpactedPlayer__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__ImpactedHorse__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::PlayHeavyImapctSound(bool bpp__ImpactedPlayer__pf, bool bpp__ImpactedHorse__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.PlayHeavyImapctSound"));

	struct
	{
		bool                           bpp__ImpactedPlayer__pf;
		bool                           bpp__ImpactedHorse__pf;
	} params = {};

	params.bpp__ImpactedPlayer__pf = bpp__ImpactedPlayer__pf;
	params.bpp__ImpactedHorse__pf = bpp__ImpactedHorse__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.PlayFatalImpactSound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__ImpactedPlayer__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__ImpactedHorse__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::PlayFatalImpactSound(bool bpp__ImpactedPlayer__pf, bool bpp__ImpactedHorse__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.PlayFatalImpactSound"));

	struct
	{
		bool                           bpp__ImpactedPlayer__pf;
		bool                           bpp__ImpactedHorse__pf;
	} params = {};

	params.bpp__ImpactedPlayer__pf = bpp__ImpactedPlayer__pf;
	params.bpp__ImpactedHorse__pf = bpp__ImpactedHorse__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.PerformHorseFootTrace
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AHorse*                  bpp__Horse__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 bpp__PhysMatString__pf         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::PerformHorseFootTrace(class AHorse* bpp__Horse__pf, struct FString* bpp__PhysMatString__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.PerformHorseFootTrace"));

	struct
	{
		class AHorse*                  bpp__Horse__pf;
		struct FString                 bpp__PhysMatString__pf;
	} params = {};

	params.bpp__Horse__pf = bpp__Horse__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__PhysMatString__pf != nullptr)
		*bpp__PhysMatString__pf = params.bpp__PhysMatString__pf;
}


// Function HorseFx.HorseFx_C.OnRagdollHit
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

void UHorseFx_C::OnRagdollHit(class AActor* bpp__HitTaker__pf, class AActor* bpp__HitCauser__pf, class AInventoryItem* bpp__Weapon__pf, const struct FHitResult& bpp__HitResult__pf__const, const struct FVector& bpp__HitDirection__pf__const, float bpp__Damage__pf, class UDamageSource* bpp__DamageSource__pf, class AActor* bpp__Projectile__pf, const struct FName& bpp__AttackName__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnRagdollHit"));

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


// Function HorseFx.HorseFx_C.OnMountSiegeEngine
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class ASiegeEngine*            bpp__SiegeEngine__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::OnMountSiegeEngine(class ASiegeEngine* bpp__SiegeEngine__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnMountSiegeEngine"));

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


// Function HorseFx.HorseFx_C.OnHorseToWorldImpact
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// struct FHitResult              bpp__Hit__pf                   (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// EHorseImpactLocation           bpp__ImpactLocation__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EHorseToWorldImpactType        bpp__ImpactType__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__ImpactCombatState__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__ImpactSpeed__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::OnHorseToWorldImpact(const struct FHitResult& bpp__Hit__pf, EHorseImpactLocation bpp__ImpactLocation__pf, EHorseToWorldImpactType bpp__ImpactType__pf, const struct FName& bpp__ImpactCombatState__pf, float bpp__ImpactSpeed__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnHorseToWorldImpact"));

	struct
	{
		struct FHitResult              bpp__Hit__pf;
		EHorseImpactLocation           bpp__ImpactLocation__pf;
		EHorseToWorldImpactType        bpp__ImpactType__pf;
		struct FName                   bpp__ImpactCombatState__pf;
		float                          bpp__ImpactSpeed__pf;
	} params = {};

	params.bpp__Hit__pf = bpp__Hit__pf;
	params.bpp__ImpactLocation__pf = bpp__ImpactLocation__pf;
	params.bpp__ImpactType__pf = bpp__ImpactType__pf;
	params.bpp__ImpactCombatState__pf = bpp__ImpactCombatState__pf;
	params.bpp__ImpactSpeed__pf = bpp__ImpactSpeed__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.OnHorseToHorseImpact
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AHorse*                  bpp__TargetHorse__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EHorseImpactLocation           bpp__ImpactLocation__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EHorseToHorseImpactType        bpp__ImpactType__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__ImpactCombatState__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__ImpactSpeed__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::OnHorseToHorseImpact(class AHorse* bpp__TargetHorse__pf, EHorseImpactLocation bpp__ImpactLocation__pf, EHorseToHorseImpactType bpp__ImpactType__pf, const struct FName& bpp__ImpactCombatState__pf, float bpp__ImpactSpeed__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnHorseToHorseImpact"));

	struct
	{
		class AHorse*                  bpp__TargetHorse__pf;
		EHorseImpactLocation           bpp__ImpactLocation__pf;
		EHorseToHorseImpactType        bpp__ImpactType__pf;
		struct FName                   bpp__ImpactCombatState__pf;
		float                          bpp__ImpactSpeed__pf;
	} params = {};

	params.bpp__TargetHorse__pf = bpp__TargetHorse__pf;
	params.bpp__ImpactLocation__pf = bpp__ImpactLocation__pf;
	params.bpp__ImpactType__pf = bpp__ImpactType__pf;
	params.bpp__ImpactCombatState__pf = bpp__ImpactCombatState__pf;
	params.bpp__ImpactSpeed__pf = bpp__ImpactSpeed__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.OnHorseToCharacterImpact
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class ATBLCharacter*           bpp__TargetCharacter__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EHorseImpactLocation           bpp__ImpactLocation__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EHorseToCharacterImpactType    bpp__ImpactType__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__ImpactCombatState__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__ImpactSpeed__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::OnHorseToCharacterImpact(class ATBLCharacter* bpp__TargetCharacter__pf, EHorseImpactLocation bpp__ImpactLocation__pf, EHorseToCharacterImpactType bpp__ImpactType__pf, const struct FName& bpp__ImpactCombatState__pf, float bpp__ImpactSpeed__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnHorseToCharacterImpact"));

	struct
	{
		class ATBLCharacter*           bpp__TargetCharacter__pf;
		EHorseImpactLocation           bpp__ImpactLocation__pf;
		EHorseToCharacterImpactType    bpp__ImpactType__pf;
		struct FName                   bpp__ImpactCombatState__pf;
		float                          bpp__ImpactSpeed__pf;
	} params = {};

	params.bpp__TargetCharacter__pf = bpp__TargetCharacter__pf;
	params.bpp__ImpactLocation__pf = bpp__ImpactLocation__pf;
	params.bpp__ImpactType__pf = bpp__ImpactType__pf;
	params.bpp__ImpactCombatState__pf = bpp__ImpactCombatState__pf;
	params.bpp__ImpactSpeed__pf = bpp__ImpactSpeed__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.OnHorseFxEvent
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   bpp__EventName__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__EventScale__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FName>           bpp__EventTags__pf__const      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::OnHorseFxEvent(const struct FName& bpp__EventName__pf, float bpp__EventScale__pf, TArray<struct FName> bpp__EventTags__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnHorseFxEvent"));

	struct
	{
		struct FName                   bpp__EventName__pf;
		float                          bpp__EventScale__pf;
		TArray<struct FName>           bpp__EventTags__pf__const;
	} params = {};

	params.bpp__EventName__pf = bpp__EventName__pf;
	params.bpp__EventScale__pf = bpp__EventScale__pf;
	params.bpp__EventTags__pf__const = bpp__EventTags__pf__const;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.OnHorseBreakingEvent
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bpp__bIsBreaking__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__bIsEmergencyBreaking__pf  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__CurrentSpeed__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__PreviousState__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::OnHorseBreakingEvent(bool bpp__bIsBreaking__pf, bool bpp__bIsEmergencyBreaking__pf, float bpp__CurrentSpeed__pf, const struct FName& bpp__PreviousState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnHorseBreakingEvent"));

	struct
	{
		bool                           bpp__bIsBreaking__pf;
		bool                           bpp__bIsEmergencyBreaking__pf;
		float                          bpp__CurrentSpeed__pf;
		struct FName                   bpp__PreviousState__pf;
	} params = {};

	params.bpp__bIsBreaking__pf = bpp__bIsBreaking__pf;
	params.bpp__bIsEmergencyBreaking__pf = bpp__bIsEmergencyBreaking__pf;
	params.bpp__CurrentSpeed__pf = bpp__CurrentSpeed__pf;
	params.bpp__PreviousState__pf = bpp__PreviousState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.OnDismountSiegeEngine
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class ASiegeEngine*            bpp__SiegeEngine__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Forced__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::OnDismountSiegeEngine(class ASiegeEngine* bpp__SiegeEngine__pf, bool bpp__Forced__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnDismountSiegeEngine"));

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


// Function HorseFx.HorseFx_C.OnDamageTaken
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageEvent__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::OnDamageTaken(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnDamageTaken"));

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


// Function HorseFx.HorseFx_C.OnDamageCaused
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageEvent__pf__const    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::OnDamageCaused(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnDamageCaused"));

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


// Function HorseFx.HorseFx_C.OnCombatStateChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__PreviousState__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__NewState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAttackInfo             bpp__EventAttackInfo__pf__const (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UCombatState*            bpp__InCombatState__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::OnCombatStateChanged(class AActor* bpp__Actor__pf, const struct FName& bpp__PreviousState__pf, const struct FName& bpp__NewState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf__const, class UCombatState* bpp__InCombatState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnCombatStateChanged"));

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


// Function HorseFx.HorseFx_C.OnAssemble_HorseFx
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UHorseFx_C::OnAssemble_HorseFx()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnAssemble_HorseFx"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.OnAnimNotifyStepEvent
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UHorseFx_C::OnAnimNotifyStepEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.OnAnimNotifyStepEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.HorseImpactSound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           bpp__AkEvent__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::HorseImpactSound(class UAkAudioEvent* bpp__AkEvent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.HorseImpactSound"));

	struct
	{
		class UAkAudioEvent*           bpp__AkEvent__pf;
	} params = {};

	params.bpp__AkEvent__pf = bpp__AkEvent__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.HorseAttackStart
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__AttackName__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::HorseAttackStart(const struct FName& bpp__AttackName__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.HorseAttackStart"));

	struct
	{
		struct FName                   bpp__AttackName__pf;
	} params = {};

	params.bpp__AttackName__pf = bpp__AttackName__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.HitParticle
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__HitBone__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__NewLocation__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::HitParticle(const struct FName& bpp__HitBone__pf, const struct FVector& bpp__NewLocation__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.HitParticle"));

	struct
	{
		struct FName                   bpp__HitBone__pf;
		struct FVector                 bpp__NewLocation__pf;
	} params = {};

	params.bpp__HitBone__pf = bpp__HitBone__pf;
	params.bpp__NewLocation__pf = bpp__NewLocation__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.GetRagdollForce (Limb)
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  bpp__Attacker__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Force__pf                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::GetRagdollForce__Limb_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.GetRagdollForce (Limb)"));

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


// Function HorseFx.HorseFx_C.GetRagdollForce (Body)
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  bpp__Attacker__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Force__pf                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::GetRagdollForce__Body_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.GetRagdollForce (Body)"));

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


// Function HorseFx.HorseFx_C.GetOwningHorse
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AHorse*                  bpp__AsHorse__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__bSuccess__pf              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::GetOwningHorse(class AHorse** bpp__AsHorse__pf, bool* bpp__bSuccess__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.GetOwningHorse"));

	struct
	{
		class AHorse*                  bpp__AsHorse__pf;
		bool                           bpp__bSuccess__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__AsHorse__pf != nullptr)
		*bpp__AsHorse__pf = params.bpp__AsHorse__pf;
	if (bpp__bSuccess__pf != nullptr)
		*bpp__bSuccess__pf = params.bpp__bSuccess__pf;
}


// Function HorseFx.HorseFx_C.ExecuteUbergraph_HorseFx_16
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::ExecuteUbergraph_HorseFx_16(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.ExecuteUbergraph_HorseFx_16"));

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


// Function HorseFx.HorseFx_C.DeathGore
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageTakenEvent__pf      (CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::DeathGore(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.DeathGore"));

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


// Function HorseFx.HorseFx_C.CrosshairEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__Event__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Enable__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Scaling__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::CrosshairEvent(const struct FName& bpp__Event__pf, bool bpp__Enable__pf, float bpp__Scaling__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.CrosshairEvent"));

	struct
	{
		struct FName                   bpp__Event__pf;
		bool                           bpp__Enable__pf;
		float                          bpp__Scaling__pf;
	} params = {};

	params.bpp__Event__pf = bpp__Event__pf;
	params.bpp__Enable__pf = bpp__Enable__pf;
	params.bpp__Scaling__pf = bpp__Scaling__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseFx.HorseFx_C.BreakAtClosestBone
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Causer__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__HitLocaton__pf__const     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Impulse__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__HitBone__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Success__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UHorseFx_C::BreakAtClosestBone(class AActor* bpp__Actor__pf, class AActor* bpp__Causer__pf, const struct FVector& bpp__HitLocaton__pf__const, const struct FVector& bpp__Impulse__pf, const struct FName& bpp__HitBone__pf, bool* bpp__Success__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseFx.HorseFx_C.BreakAtClosestBone"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		class AActor*                  bpp__Causer__pf;
		struct FVector                 bpp__HitLocaton__pf__const;
		struct FVector                 bpp__Impulse__pf;
		struct FName                   bpp__HitBone__pf;
		bool                           bpp__Success__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Causer__pf = bpp__Causer__pf;
	params.bpp__HitLocaton__pf__const = bpp__HitLocaton__pf__const;
	params.bpp__Impulse__pf = bpp__Impulse__pf;
	params.bpp__HitBone__pf = bpp__HitBone__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Success__pf != nullptr)
		*bpp__Success__pf = params.bpp__Success__pf;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
