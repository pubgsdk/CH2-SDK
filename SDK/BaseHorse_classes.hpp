#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseHorse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseHorse.BaseHorse_C
// 0x00B0 (0x0D50 - 0x0CA0)
class ABaseHorse_C : public AHorse
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CA0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCapsuleComponent*                           Simple;                                                   // 0x0CA8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCapsuleComponent*                           Rider;                                                    // 0x0CB0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UHorseGameplayRules_C*                       HorseGameplayRules;                                       // 0x0CB8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCapsuleComponent*                           BackLegs;                                                 // 0x0CC0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCapsuleComponent*                           FrontLegs;                                                // 0x0CC8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCapsuleComponent*                           Back;                                                     // 0x0CD0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCapsuleComponent*                           Front;                                                    // 0x0CD8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Horse;                                                    // 0x0CE0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UFxComponent*                                Fx;                                                       // 0x0CE8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitiesComponent*                         Abilities;                                                // 0x0CF0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStatsComponent*                             Stats;                                                    // 0x0CF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EHorseImpactLocation                               ImpactLocation;                                           // 0x0D00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EHorseToWorldImpactType                            WorldImpactType;                                          // 0x0D01(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EHorseToCharacterImpactType                        CharacterImpactType;                                      // 0x0D02(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EHorseToHorseImpactType                            HorseImpactType;                                          // 0x0D03(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0D04(0x0004) MISSED OFFSET
	class ATBLCharacter*                               TargetCharacter;                                          // 0x0D08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AHorse*                                      TargetHorse;                                              // 0x0D10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              KnockoffFromPawnSpeed;                                    // 0x0D18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CharacterKnockdownSpeed;                                  // 0x0D1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ImpactSpped;                                              // 0x0D20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DamageAmount;                                             // 0x0D24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BreakConstructableSpeed;                                  // 0x0D28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0D2C(0x0004) MISSED OFFSET
	class USkeletalMesh*                               Default_Horse;                                            // 0x0D30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMesh*                               Agatha_Horse;                                             // 0x0D38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMesh*                               Mason_Horse;                                              // 0x0D40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMesh*                               Tenosia_Horse;                                            // 0x0D48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseHorse.BaseHorse_C"));
		return ptr;
	}


	void HandleTeamCustomisation(EFaction Faction);
	TArray<class UPrimitiveComponent*> GetPushingCollision();
	class UCapsuleComponent* GetWorldCollisionRider();
	bool ShouldPushBackOnTurnAgainstWall();
	TEnumAsByte<ECollisionResponse> GetRiderToWorldCollision();
	void FxEvent(const struct FName& EventName, float EventScale, bool Target_);
	TArray<class UPrimitiveComponent*> GetWorldCollisionBack();
	TArray<class UPrimitiveComponent*> GetWorldCollisionFront();
	void GetWorldCollisionLegs(class UCapsuleComponent** FrontLegs, class UCapsuleComponent** BackLegs);
	void ReceiveBeginPlay();
	void InitAltWeightsState();
	void HorseToWorldImpact(const struct FHitResult& Hit, EHorseImpactLocation ImpactLocation, EHorseToWorldImpactType ImpactType, const struct FName& ImpactCombatState, float ImpactSpeed);
	void HorseToCharacterImpact(class ATBLCharacter* TargetCharacter, EHorseImpactLocation ImpactLocation, EHorseToCharacterImpactType ImpactType, const struct FName& ImpactCombatState, float ImpactSpeed);
	void HorseToHorseImpact(class AHorse* TargetHorse, EHorseImpactLocation ImpactLocation, EHorseToHorseImpactType ImpactType, const struct FName& ImpactCombatState, float ImpactSpeed);
	void BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event);
	void RiderToWorldImpact(const struct FHitResult& Hit);
	void BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature(EFaction NewFaction);
	void OnDriverMount_Event_1(class ATBLCharacter* Driver);
	void OnDriverDismount_Event_1(class ATBLCharacter* Driver, EDismountType DismountType);
	void ApplyDamageToCharacter();
	void ExecuteUbergraph_BaseHorse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
