#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_Gameplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_Gameplay.BPF_Gameplay_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Gameplay_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_Gameplay.BPF_Gameplay_C"));
		return ptr;
	}


	static void GetShoveInstigator(class ATBLCharacter* Character, class UObject* __WorldContext, class AActor** ShoveInstigator);
	static void IsTackleAttack(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* _);
	static void IsInJabKnockback(class ATBLCharacter* Character, class UObject* __WorldContext, bool* _);
	static void IsJabAttack(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* _);
	static void IsInShoveKnockback(class ATBLCharacter* Character, class UObject* __WorldContext, bool* _);
	static void IsControllerPlayerControlled(class AController* Controller, class UObject* __WorldContext, bool* bReturnValue);
	static void IsPawnPlayerControlled(class APawn* Pawn, class UObject* __WorldContext, bool* bReturnValue);
	static void IsPlayerStatePlayerControlled(class APlayerState* PlayerState, class UObject* __WorldContext, bool* bReturnValue);
	static void IsObjectPlayerControlled(class UObject* Object, class UObject* __WorldContext, bool* bReturnValue);
	static void Is_Shove_Or_Jab_Or_Headbutt_Ability_Spec(class UAbilitySpec* _, class UObject* __WorldContext, bool* __);
	static void IsPawnDowned(class APawn* Target, class UObject* __WorldContext, bool* _);
	static void IsShoveAttack(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* _);
	static bool TBLGetActorsInSphere(const struct FVector& SpherePos, float SphereRadius, bool DebugDraw, class UObject* __WorldContext, TArray<class AActor*>* OutActors);
	static void IsPlayerControlled(class AActor* _, class UObject* __WorldContext, bool* __);
	static void IsPawnInSprintAttack(class APawn* Target, class UObject* __WorldContext, bool* _);
	static void IsPawnInSpecialAttack(class APawn* Target, class UObject* __WorldContext, bool* _);
	static void TBLApplySphereDamageAndCC(class AActor* DamageCauser, const struct FVector& Location, float Radius, float Amount, class UDamageSource* DamageSource, bool CrowdControl, ECrowdControlCombatState CombatState, const struct FCrowdControlParams& CrowdControlParams, bool IgnoreSelf, bool NoDamageCauserForAllies, bool bOverrideImpactPoint, class UObject* __WorldContext, TArray<class AActor*>* ActorsToIgnore);
	static void TBLApplyCrowdControl(class AActor* DamageTaker, class AActor* DamageCauser, ECrowdControlCombatState CombatState, const struct FCrowdControlParams& CrowdControlParams, bool bAutonomous, class UObject* __WorldContext);
	static bool IsCharacterParryingWithShield(class ATBLCharacter* Target, class UObject* __WorldContext);
	static void TBLKillPawn(class AActor* DamageTaker, class AActor* DamageCauser, class UObject* __WorldContext);
	static void IsPawnAirborne(class APawn* Target, class UObject* __WorldContext, bool* _);
	static void IsPawnSprinting(class APawn* Target, class UObject* __WorldContext, bool* _);
	static void IsInCrowdControlState(class AActor* Target, class UObject* __WorldContext, bool* _);
	static void TBLApplyDamageAndCrowdControl(class AActor* DamageTaker, class AActor* DamageCauser, float Amount, class UDamageSource* DamageSource, bool CrowdControl, ECrowdControlCombatState CombatState, const struct FCrowdControlParams& CrowdControlParams, bool bAutonomous, class AInventoryItem* InventoryItemOverride, bool bOverrideImpactPoint, const struct FVector& DamageSourceLocationOverride, class AActor* DamageInstigator, class UObject* __WorldContext);
	static void IsMounted(class AActor* Actor, class UObject* __WorldContext, bool* _);
	static void IsEnemy(class AActor* TestA, class AActor* TestB, class UObject* __WorldContext, bool* _);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
