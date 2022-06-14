#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseGameplayRules_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HorseGameplayRules.HorseGameplayRules_C
// 0x0008 (0x0118 - 0x0110)
class UHorseGameplayRules_C : public UGameplayRules
{
public:
	int                                                HitCount;                                                 // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HitTime;                                                  // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HorseGameplayRules.HorseGameplayRules_C"));
		return ptr;
	}


	ECrowdControlVariant GetCrowdControlVariant(ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FName& CombatState, class UClass* /*AInventoryItem*/ InventoryItemClass, const struct FName& AbilityName, class UAttackType* AttackType, bool IsOnHorse);
	void OnDamageTaken(EOnHitEffect InHitEffect, ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent, const struct FName& AttackName, class AInventoryItem* AttackingItem, class UAttackType* AttackType, EOnHitEffect* OutHitEffect, ECrowdControlVariant* OutCrowdControlVariant);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
