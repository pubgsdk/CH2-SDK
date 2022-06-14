#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameplayRules_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameplayRules.GameplayRules_C
// 0x0058 (0x0168 - 0x0110)
class UGameplayRules_C : public UGameplayRules
{
public:
	ELimbGoreAction                                    LimbGoreAction;                                           // 0x0110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EHeadGoreAction                                    HeadGoreAction;                                           // 0x0111(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
	TSoftObjectPtr<class UDamageSource>                BleedingDamageType;                                       // 0x0118(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UDamageSource>                FallDamageType;                                           // 0x0140(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GameplayRules.GameplayRules_C"));
		return ptr;
	}


	void IsAttackImmuneToActiveParry(const struct FName& AttackName, bool* _);
	bool ShouldStartProjectileCounterWindow(class ATBLCharacter* Character);
	bool ShouldProjectileAttackBeCountered(class ATBLCharacter* HitCharacter, class AInventoryItem* AttackingItem);
	bool ShouldStartActiveRiposteWindow(class ATBLCharacter* Character);
	bool ApplyDamageConditions(class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent);
	void DisarmWhenHitDuringThrow(class ATBLCharacter* HitCharacter, EOnHitEffect HitEffect);
	bool ShouldBlockSameAttack(class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter);
	bool ShouldPlayDamageTaken(const struct FDamageTakenEvent& DamageTakenEvent);
	bool TutorialCanDamage(class ATBLCharacter* InitiatorCharacter, class AActor* TargetActor);
	struct FVector GetDisarmImpulse(class AInventoryItem* AttackerItem, const struct FVector& HitDirection);
	void OnProjectileHit(class AInventoryItem* Projectile, EOnProjectileHitEffect InHitEffect, const struct FHitResult& InHitResult, float InBounceVelocityModifier, EOnProjectileHitEffect* OutHitEffect, float* OutBounceVelocityModifier);
	bool CheckIfCounterAttackIsSuccessful(class ATBLCharacter* HitCharacter, class ATBLCharacter* AttackingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefenderItem, const struct FName& AttackName);
	bool ShouldCounterReadyStateAttackBeCountered(class ATBLCharacter* HitCharacter);
	bool ShouldNormalAttackBeCountered(class ATBLCharacter* HitCharacter);
	void DidSuccessfulCounter(class ATBLCharacter* Character, bool* IsCounter);
	void IsProjectileArrowOrBolt(class AInventoryItem* Projectile, bool* _);
	bool ShouldAttackBeCountered(class ATBLCharacter* HitCharacter, class ATBLCharacter* AttackingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefenderItem);
	struct FTBL_FGoreEvent GetGoreEventOnDamage(const struct FDamageTakenEvent& DamageTakenEvent, bool bIsRagdollHit, bool bShouldApplyConditions);
	void GetCurrentAttack(class ATBLCharacter* Character, bool NonHeavy, struct FName* AttackName);
	bool ShouldStartCounterWindow(class ATBLCharacter* Character);
	void ShouldLoseLimb(const struct FDamageTakenEvent& DamageEvent, bool* LoseLimb, bool* BleedOut);
	bool ShouldComboCancelQueue(const struct FName& CombatState, const struct FAttackInfo& Attack);
	EComboTimingPolicy GetComboTimingPolicy(EComboTimingPolicy InComboTimingPolicy, class ATBLCharacter* Character, const struct FName& CombatState, const struct FAttackInfo& PrevAttack, const struct FAttackInfo& NextAttack);
	bool DidHitLimb(class USkinnedMeshComponent* Target, const struct FName& BoneName, const struct FName& ParentBoneName);
	bool ShouldScoreKill(class AController* Killer, class AController* Killed, const struct FDeathDamageTakenEvent& DamageEvent);
	void IsStandardAttack(class ATBLCharacter* Character, bool* _);
	void OnDamageTaken(EOnHitEffect InHitEffect, ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent, const struct FName& AttackName, class AInventoryItem* AttackingItem, class UAttackType* AttackType, EOnHitEffect* OutHitEffect, ECrowdControlVariant* OutCrowdControlVariant);
	void WasItemDestroyed(class AInventoryItem* Item, bool* _);
	ECrowdControlVariant GetCrowdControlVariant(ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FName& CombatState, class UClass* /*AInventoryItem*/ InventoryItemClass, const struct FName& AbilityName, class UAttackType* AttackType, bool IsOnHorse);
	void IsShieldEquipped(class ATBLCharacter* Character, bool* _);
	void IsHeavyAttack(class ATBLCharacter* Character, bool* _);
	void IsSprintAttack(class ATBLCharacter* Character, bool* _);
	bool OnParryBreak(class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem);
	EAttackerBlockedPolicy GetAttackerBlockedPolicy(EAttackerBlockedPolicy InAttackerBlockedPolicy, class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem, bool bSameAttackClash);
	EDefenderBlockedPolicy GetDefenderBlockedPolicy(EDefenderBlockedPolicy InDefenderBlockedPolicy, class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem, bool bProjectileAttack, bool bSameAttackClash, bool bWasBlockedWithParryForgivenessWindow, bool* bShouldDisarm);
	void Disarm(class AInventoryItem* Item, bool DuringParryEvent);
	bool IsBlocking(class ATBLCharacter* Character, const struct FName& AttackName, const struct FName& CombatState, class ATBLCharacter* AttackingCharacter);
	bool ShouldGotoDowned(class AActor* Target, class AActor* Initiator, const struct FName& AbilityName, class AInventoryItem* InventoryItem, class UDamageSource* DamageType, const struct FDamageTakenEvent& DamageTakenEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
