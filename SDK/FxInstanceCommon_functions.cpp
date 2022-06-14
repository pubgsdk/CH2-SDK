// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FxInstanceCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FxInstanceCommon.FxInstanceCommon_C.UpdatePostProcessMaterialWeight
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__Key__pf                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::UpdatePostProcessMaterialWeight(const struct FName& bpp__Key__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.UpdatePostProcessMaterialWeight"));

	struct
	{
		struct FName                   bpp__Key__pf;
	} params = {};

	params.bpp__Key__pf = bpp__Key__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.UpdateCombatStateIfInRiposte
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__NewCombatState__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsRiposte__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   bpp__ModifiedNewCombatState__pf (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::UpdateCombatStateIfInRiposte(const struct FName& bpp__NewCombatState__pf, bool bpp__IsRiposte__pf, struct FText* bpp__ModifiedNewCombatState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.UpdateCombatStateIfInRiposte"));

	struct
	{
		struct FName                   bpp__NewCombatState__pf;
		bool                           bpp__IsRiposte__pf;
		struct FText                   bpp__ModifiedNewCombatState__pf;
	} params = {};

	params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;
	params.bpp__IsRiposte__pf = bpp__IsRiposte__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__ModifiedNewCombatState__pf != nullptr)
		*bpp__ModifiedNewCombatState__pf = params.bpp__ModifiedNewCombatState__pf;
}


// Function FxInstanceCommon.FxInstanceCommon_C.StopCameraAnim
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCameraAnim*             bpp__Anim__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::StopCameraAnim(class UCameraAnim* bpp__Anim__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.StopCameraAnim"));

	struct
	{
		class UCameraAnim*             bpp__Anim__pf;
	} params = {};

	params.bpp__Anim__pf = bpp__Anim__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.Start FX Weapon Damage Impact Sound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageTakenEvent__pf      (CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::Start_FX_Weapon_Damage_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Weapon Damage Impact Sound"));

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


// Function FxInstanceCommon.FxInstanceCommon_C.Start FX Weapon Blocked Sound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATBLCharacter*           bpp__BlockedActor__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLCharacter*           bpp__BlockingActor__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AInventoryItem*          bpp__BlockedWeapon__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AInventoryItem*          bpp__BlockingWeapon__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsConterSuccess__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::Start_FX_Weapon_Blocked_Sound(class ATBLCharacter* bpp__BlockedActor__pf, class ATBLCharacter* bpp__BlockingActor__pf, class AInventoryItem* bpp__BlockedWeapon__pf, class AInventoryItem* bpp__BlockingWeapon__pf, bool bpp__IsConterSuccess__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Weapon Blocked Sound"));

	struct
	{
		class ATBLCharacter*           bpp__BlockedActor__pf;
		class ATBLCharacter*           bpp__BlockingActor__pf;
		class AInventoryItem*          bpp__BlockedWeapon__pf;
		class AInventoryItem*          bpp__BlockingWeapon__pf;
		bool                           bpp__IsConterSuccess__pf;
	} params = {};

	params.bpp__BlockedActor__pf = bpp__BlockedActor__pf;
	params.bpp__BlockingActor__pf = bpp__BlockingActor__pf;
	params.bpp__BlockedWeapon__pf = bpp__BlockedWeapon__pf;
	params.bpp__BlockingWeapon__pf = bpp__BlockingWeapon__pf;
	params.bpp__IsConterSuccess__pf = bpp__IsConterSuccess__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.Start Fx Sound With Params
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           bpp__Sound__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__Socket__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSoundSwitchEntry> bpp__Switches__pf              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSoundRTPCEntry> bpp__RTPCxValues__pfT          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__DebugxPrint__pfT          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::Start_Fx_Sound_With_Params(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__Sound__pf, const struct FName& bpp__Socket__pf, bool bpp__DebugxPrint__pfT, TArray<struct FSoundSwitchEntry>* bpp__Switches__pf, TArray<struct FSoundRTPCEntry>* bpp__RTPCxValues__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.Start Fx Sound With Params"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		class UAkAudioEvent*           bpp__Sound__pf;
		struct FName                   bpp__Socket__pf;
		TArray<struct FSoundSwitchEntry> bpp__Switches__pf;
		TArray<struct FSoundRTPCEntry> bpp__RTPCxValues__pfT;
		bool                           bpp__DebugxPrint__pfT;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Sound__pf = bpp__Sound__pf;
	params.bpp__Socket__pf = bpp__Socket__pf;
	params.bpp__DebugxPrint__pfT = bpp__DebugxPrint__pfT;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Switches__pf != nullptr)
		*bpp__Switches__pf = params.bpp__Switches__pf;
	if (bpp__RTPCxValues__pfT != nullptr)
		*bpp__RTPCxValues__pfT = params.bpp__RTPCxValues__pfT;
}


// Function FxInstanceCommon.FxInstanceCommon_C.Start Fx Sound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           bpp__Sound__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__Socket__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__DebugxPrint__pfT          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::Start_Fx_Sound(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__Sound__pf, const struct FName& bpp__Socket__pf, bool bpp__DebugxPrint__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.Start Fx Sound"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		class UAkAudioEvent*           bpp__Sound__pf;
		struct FName                   bpp__Socket__pf;
		bool                           bpp__DebugxPrint__pfT;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__Sound__pf = bpp__Sound__pf;
	params.bpp__Socket__pf = bpp__Socket__pf;
	params.bpp__DebugxPrint__pfT = bpp__DebugxPrint__pfT;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.Start FX Projectile Blocked By Shiled Impact Sound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AInventoryItem*          bpp__BlockedItem__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AInventoryItem*          bpp__BlockingItem__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FParryEventState        bpp__ParryState__pf            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::Start_FX_Projectile_Blocked_By_Shiled_Impact_Sound(class AInventoryItem* bpp__BlockedItem__pf, class AInventoryItem* bpp__BlockingItem__pf, const struct FParryEventState& bpp__ParryState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Projectile Blocked By Shiled Impact Sound"));

	struct
	{
		class AInventoryItem*          bpp__BlockedItem__pf;
		class AInventoryItem*          bpp__BlockingItem__pf;
		struct FParryEventState        bpp__ParryState__pf;
	} params = {};

	params.bpp__BlockedItem__pf = bpp__BlockedItem__pf;
	params.bpp__BlockingItem__pf = bpp__BlockingItem__pf;
	params.bpp__ParryState__pf = bpp__ParryState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.Start FX Horse Sound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__PreviousCombatState__pf   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__NewCombatState__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAttackInfo             bpp__EventAttackInfo__pf       (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UCombatState*            bpp__combatState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::Start_FX_Horse_Sound(class AActor* bpp__Actor__pf, const struct FName& bpp__PreviousCombatState__pf, const struct FName& bpp__NewCombatState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf, class UCombatState* bpp__combatState__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Horse Sound"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		struct FName                   bpp__PreviousCombatState__pf;
		struct FName                   bpp__NewCombatState__pf;
		struct FAttackInfo             bpp__EventAttackInfo__pf;
		class UCombatState*            bpp__combatState__pf;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__PreviousCombatState__pf = bpp__PreviousCombatState__pf;
	params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;
	params.bpp__EventAttackInfo__pf = bpp__EventAttackInfo__pf;
	params.bpp__combatState__pf = bpp__combatState__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.Start FX Horse Impact Sound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageTakenEvent__pf      (CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::Start_FX_Horse_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Horse Impact Sound"));

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


// Function FxInstanceCommon.FxInstanceCommon_C.Start FX Character Impact Sound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDamageTakenEvent       bpp__DamageTakenEvent__pf      (CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::Start_FX_Character_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Character Impact Sound"));

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


// Function FxInstanceCommon.FxInstanceCommon_C.Start FX Character and Weapon Parry Success Sound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ATBLCharacter*           bpp__BlockingCharacter__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class ATBLCharacter*           bpp__BlockedCharacter__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AInventoryItem*          bpp__BlockingWeapon__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AInventoryItem*          bpp__BlockedWeapon__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FParryEventState        bpp__ParryEvent__pf            (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::Start_FX_Character_and_Weapon_Parry_Success_Sound(class ATBLCharacter* bpp__BlockingCharacter__pf, class ATBLCharacter* bpp__BlockedCharacter__pf, class AInventoryItem* bpp__BlockingWeapon__pf, class AInventoryItem* bpp__BlockedWeapon__pf, const struct FParryEventState& bpp__ParryEvent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Character and Weapon Parry Success Sound"));

	struct
	{
		class ATBLCharacter*           bpp__BlockingCharacter__pf;
		class ATBLCharacter*           bpp__BlockedCharacter__pf;
		class AInventoryItem*          bpp__BlockingWeapon__pf;
		class AInventoryItem*          bpp__BlockedWeapon__pf;
		struct FParryEventState        bpp__ParryEvent__pf;
	} params = {};

	params.bpp__BlockingCharacter__pf = bpp__BlockingCharacter__pf;
	params.bpp__BlockedCharacter__pf = bpp__BlockedCharacter__pf;
	params.bpp__BlockingWeapon__pf = bpp__BlockingWeapon__pf;
	params.bpp__BlockedWeapon__pf = bpp__BlockedWeapon__pf;
	params.bpp__ParryEvent__pf = bpp__ParryEvent__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.ResetPostProcessEffectsInMaterial
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FName>           bpp__Effects__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::ResetPostProcessEffectsInMaterial(TArray<struct FName>* bpp__Effects__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.ResetPostProcessEffectsInMaterial"));

	struct
	{
		TArray<struct FName>           bpp__Effects__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Effects__pf != nullptr)
		*bpp__Effects__pf = params.bpp__Effects__pf;
}


// Function FxInstanceCommon.FxInstanceCommon_C.ResetAllPostProcessEffects
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFxInstanceCommon_C::ResetAllPostProcessEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.ResetAllPostProcessEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.RemoveAllPostProcessEffects
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFxInstanceCommon_C::RemoveAllPostProcessEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.RemoveAllPostProcessEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.PostProcessEffectTick
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFxInstanceCommon_C::PostProcessEffectTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.PostProcessEffectTick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.PlaySoundOnActor
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           bpp__AKxEvent__pfT             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::PlaySoundOnActor(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__AKxEvent__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.PlaySoundOnActor"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		class UAkAudioEvent*           bpp__AKxEvent__pfT;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;
	params.bpp__AKxEvent__pfT = bpp__AKxEvent__pfT;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.PlayDirectionalCameraAnim
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UObject*/      bpp__ShakeClass__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Scale__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__Causer__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Vec__pf                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__PlayInThirdPerson__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::PlayDirectionalCameraAnim(class UClass* /*UObject*/ bpp__ShakeClass__pf, float bpp__Scale__pf, class AActor* bpp__Causer__pf, const struct FVector& bpp__Vec__pf, bool bpp__PlayInThirdPerson__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.PlayDirectionalCameraAnim"));

	struct
	{
		class UClass* /*UObject*/      bpp__ShakeClass__pf;
		float                          bpp__Scale__pf;
		class AActor*                  bpp__Causer__pf;
		struct FVector                 bpp__Vec__pf;
		bool                           bpp__PlayInThirdPerson__pf;
	} params = {};

	params.bpp__ShakeClass__pf = bpp__ShakeClass__pf;
	params.bpp__Scale__pf = bpp__Scale__pf;
	params.bpp__Causer__pf = bpp__Causer__pf;
	params.bpp__Vec__pf = bpp__Vec__pf;
	params.bpp__PlayInThirdPerson__pf = bpp__PlayInThirdPerson__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.PlayCameraShake
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UObject*/      bpp__ShakeClass__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Scale__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::PlayCameraShake(class UClass* /*UObject*/ bpp__ShakeClass__pf, float bpp__Scale__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.PlayCameraShake"));

	struct
	{
		class UClass* /*UObject*/      bpp__ShakeClass__pf;
		float                          bpp__Scale__pf;
	} params = {};

	params.bpp__ShakeClass__pf = bpp__ShakeClass__pf;
	params.bpp__Scale__pf = bpp__Scale__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.PlayCameraAnim
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCameraAnim*             bpp__Anim__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Rate__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Scale__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__BlendInTime__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__BlendOutTime__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__PlayInThirdPerson__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::PlayCameraAnim(class UCameraAnim* bpp__Anim__pf, float bpp__Rate__pf, float bpp__Scale__pf, float bpp__BlendInTime__pf, float bpp__BlendOutTime__pf, bool bpp__PlayInThirdPerson__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.PlayCameraAnim"));

	struct
	{
		class UCameraAnim*             bpp__Anim__pf;
		float                          bpp__Rate__pf;
		float                          bpp__Scale__pf;
		float                          bpp__BlendInTime__pf;
		float                          bpp__BlendOutTime__pf;
		bool                           bpp__PlayInThirdPerson__pf;
	} params = {};

	params.bpp__Anim__pf = bpp__Anim__pf;
	params.bpp__Rate__pf = bpp__Rate__pf;
	params.bpp__Scale__pf = bpp__Scale__pf;
	params.bpp__BlendInTime__pf = bpp__BlendInTime__pf;
	params.bpp__BlendOutTime__pf = bpp__BlendOutTime__pf;
	params.bpp__PlayInThirdPerson__pf = bpp__PlayInThirdPerson__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.OnClientPreTravel
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 bpp__PendingURL__pf__const     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ETravelType>       bpp__TravelType__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__bIsSeamlessTravel__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::OnClientPreTravel(const struct FString& bpp__PendingURL__pf__const, TEnumAsByte<ETravelType> bpp__TravelType__pf, bool bpp__bIsSeamlessTravel__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.OnClientPreTravel"));

	struct
	{
		struct FString                 bpp__PendingURL__pf__const;
		TEnumAsByte<ETravelType>       bpp__TravelType__pf;
		bool                           bpp__bIsSeamlessTravel__pf;
	} params = {};

	params.bpp__PendingURL__pf__const = bpp__PendingURL__pf__const;
	params.bpp__TravelType__pf = bpp__TravelType__pf;
	params.bpp__bIsSeamlessTravel__pf = bpp__bIsSeamlessTravel__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.OnAssemble_FxInstanceCommon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFxInstanceCommon_C::OnAssemble_FxInstanceCommon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.OnAssemble_FxInstanceCommon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.IsPostProcessDisabled
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bpp__Disabled__pf              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::IsPostProcessDisabled(bool* bpp__Disabled__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.IsPostProcessDisabled"));

	struct
	{
		bool                           bpp__Disabled__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Disabled__pf != nullptr)
		*bpp__Disabled__pf = params.bpp__Disabled__pf;
}


// Function FxInstanceCommon.FxInstanceCommon_C.IsLocalPlayerAndNotBot
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  bpp__Actor__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__ReturnxValue__pfT         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::IsLocalPlayerAndNotBot(class AActor* bpp__Actor__pf, bool* bpp__ReturnxValue__pfT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.IsLocalPlayerAndNotBot"));

	struct
	{
		class AActor*                  bpp__Actor__pf;
		bool                           bpp__ReturnxValue__pfT;
	} params = {};

	params.bpp__Actor__pf = bpp__Actor__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__ReturnxValue__pfT != nullptr)
		*bpp__ReturnxValue__pfT = params.bpp__ReturnxValue__pfT;
}


// Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessMaterialIfCreated
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* bpp__PostProcessMaterial__pf   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::GetPostProcessMaterialIfCreated(class UMaterialInstanceDynamic** bpp__PostProcessMaterial__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessMaterialIfCreated"));

	struct
	{
		class UMaterialInstanceDynamic* bpp__PostProcessMaterial__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__PostProcessMaterial__pf != nullptr)
		*bpp__PostProcessMaterial__pf = params.bpp__PostProcessMaterial__pf;
}


// Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessMaterial
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* bpp__PostProcessMaterial__pf   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::GetPostProcessMaterial(class UMaterialInstanceDynamic** bpp__PostProcessMaterial__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessMaterial"));

	struct
	{
		class UMaterialInstanceDynamic* bpp__PostProcessMaterial__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__PostProcessMaterial__pf != nullptr)
		*bpp__PostProcessMaterial__pf = params.bpp__PostProcessMaterial__pf;
}


// Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessComponent
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UPostProcessComponent*   bpp__PostProcessComponent__pf  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::GetPostProcessComponent(class UPostProcessComponent** bpp__PostProcessComponent__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessComponent"));

	struct
	{
		class UPostProcessComponent*   bpp__PostProcessComponent__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__PostProcessComponent__pf != nullptr)
		*bpp__PostProcessComponent__pf = params.bpp__PostProcessComponent__pf;
}


// Function FxInstanceCommon.FxInstanceCommon_C.ForceResetAllPostProcessEffects
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFxInstanceCommon_C::ForceResetAllPostProcessEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.ForceResetAllPostProcessEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.FindMaterialInPostProcessComponent
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UPostProcessComponent*   bpp__PostProcessComponent__pf  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__bFound__pf                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::FindMaterialInPostProcessComponent(class UPostProcessComponent* bpp__PostProcessComponent__pf, bool* bpp__bFound__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.FindMaterialInPostProcessComponent"));

	struct
	{
		class UPostProcessComponent*   bpp__PostProcessComponent__pf;
		bool                           bpp__bFound__pf;
	} params = {};

	params.bpp__PostProcessComponent__pf = bpp__PostProcessComponent__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__bFound__pf != nullptr)
		*bpp__bFound__pf = params.bpp__bFound__pf;
}


// Function FxInstanceCommon.FxInstanceCommon_C.DisplayDebug
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFxInstanceCommon_C::DisplayDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.DisplayDebug"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.DisableCameraPostProcessComponent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFxInstanceCommon_C::DisableCameraPostProcessComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.DisableCameraPostProcessComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.BP_ResetPostProcess
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UFxInstanceCommon_C::BP_ResetPostProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.BP_ResetPostProcess"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.BeginPostProcessEffectTick
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFxInstanceCommon_C::BeginPostProcessEffectTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.BeginPostProcessEffectTick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FxInstanceCommon.FxInstanceCommon_C.AddPostProcessEffect
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__Effect__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Target__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFxInstanceCommon_C::AddPostProcessEffect(const struct FName& bpp__Effect__pf, float bpp__Target__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FxInstanceCommon.FxInstanceCommon_C.AddPostProcessEffect"));

	struct
	{
		struct FName                   bpp__Effect__pf;
		float                          bpp__Target__pf;
	} params = {};

	params.bpp__Effect__pf = bpp__Effect__pf;
	params.bpp__Target__pf = bpp__Target__pf;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
