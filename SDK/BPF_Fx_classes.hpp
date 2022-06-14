#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_Fx_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_Fx.BPF_Fx_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Fx_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_Fx.BPF_Fx_C"));
		return ptr;
	}


	static void ResetAllPostProcessEffects(class UObject* __WorldContext);
	static void GetCharacterStatesFxObject(class AActor* Actor, class UObject* __WorldContext, class UCharacterFx_C** CharacterStatesFx, bool* Success);
	static void GetCharacterFxObject(class AActor* Actor, class UObject* __WorldContext, class UCharacterFx_C** Character_Fx, bool* Success);
	static void Is_Character_In_Shove_Or_Jab_Or_Headbutt_Attack(class ATBLCharacter* Character, class UObject* __WorldContext, bool* Return_Value);
	static void IsValidSelfDamageType(class UDamageSource* DamageType, class UObject* __WorldContext, bool* Return);
	static void ShouldPlayEpicDeathVO(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* Return_Value);
	static void DisablePreVisualizationListener(class UObject* Listener, class UObject* __WorldContext);
	static void EnablePreVisualizationListener(class UObject* Listener, class UClass* /*AInventoryItem*/ Item, class UObject* __WorldContext);
	static void TBL_PresetWorldCameraShake(TEnumAsByte<EWorldCameraShakeType> Selection, const struct FVector& Epicenter, class UObject* __WorldContext);
	static void IsNPC(class AActor* Actor, class UObject* __WorldContext, bool* Return_Value);
	static void GetActorCameraManger(class UObject* Actor, class UObject* __WorldContext, class APlayerCameraManager** PlayerCameraManager, bool* Success);
	static void GetSwitchStateFromWeaponMaterial(EWeaponMaterial WeaponMaterial, class UObject* __WorldContext, struct FString* SwitchState);
	static void GetPhysMatSwitchState(class UPhysicalMaterial* PhysMat, class UObject* __WorldContext, struct FString* SwitchState);
	static bool IsBlockingHitAWorldHit(const struct FProjectileHitParams& HitParams, class UObject* __WorldContext);
	static void SetCharacterMaterialParam__vector_(class AActor* Actor, const struct FName& Name, const struct FVector& Value, class UObject* __WorldContext);
	static void GetCrosshair(class UObject* __WorldContext, bool* Success, TScriptInterface<class UTBLCrosshairInterface>* Crosshair);
	static void SetWeaponMaterialParam__scalar_(class AActor* Actor, const struct FName& Name, float Value, class UObject* __WorldContext);
	static void SetCharacterMaterialParam__scalar_(class AActor* Actor, const struct FName& Name, float Value, class UObject* __WorldContext);
	static void IsDownedDamage(const struct FDamageTakenEvent& Event, class UObject* __WorldContext, bool* _);
	static void GetPainStateFromDamage(float Damage, class UObject* __WorldContext, struct FString* CharacterPainState);
	static void GetAttackSwitchStateFromAttackInfo(const struct FAttackInfo& AttackInfo, class UObject* __WorldContext, struct FString* AttackState);
	static void GetArmorTypeNameFromActor(class AActor* Actor, class UObject* __WorldContext, struct FName* ArmorName);
	static void IsLocalCharacter(class AActor* Actor, class UObject* __WorldContext, bool* _);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
