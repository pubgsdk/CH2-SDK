#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_BandageKit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_BandageKit.Carryable_BandageKit_C
// 0x00A9 (0x130A - 0x1261)
class ACarryable_BandageKit_C : public ABaseCarryable_2hKit_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            TeamProjectileCollision;                                  // 0x1270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UActorInfoDisplayComponent*                  ActorInfoDisplay;                                         // 0x1278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UObjectiveStatusDisplayComponent*            ObjectiveStatusDisplay;                                   // 0x1280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UHudMarkerDisplayComponent*                  HudMarkerDisplay;                                         // 0x1288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Hint;                                                     // 0x1290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      LastOwner;                                                // 0x1298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Uses;                                                     // 0x12A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HealAmount;                                               // 0x12A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HealSpeed;                                                // 0x12A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x12AC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 HealCurve;                                                // 0x12B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EFaction                                           Faction;                                                  // 0x12B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x12B9(0x0007) MISSED OFFSET
	class UStatsComponent*                             CurrentStatComponent;                                     // 0x12C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class ATBLPlayerState>              InitiatingHealer;                                         // 0x12C8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              RestockHealthPercentThreshold;                            // 0x12F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SelfHealModifier;                                         // 0x12F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsThrown;                                                 // 0x12F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x12F9(0x0007) MISSED OFFSET
	class ATBLCharacter*                               PossesedCharacter;                                        // 0x1300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EHealingSource                                     HealingSource;                                            // 0x1308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               WasRevived;                                               // 0x1309(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_BandageKit.Carryable_BandageKit_C"));
		return ptr;
	}


	void SendHealAnalyticsEvent(class ATBLCharacter* Character);
	void GetHealAmount(class ATBLCharacter* Character, float* HealAmount);
	class UShapeComponent* GetTeamProjectileCollision();
	void CanUseBandageKit(class APawn* Pawn, bool* CanUse);
	bool CannotAutoPickup(class APawn* Pawn);
	void OnRep_LastOwner();
	void OnRep_Faction();
	bool CanPickup(class APawn* Pawn);
	bool OverridePickupEvent(class ATBLCharacter* Character, bool bGiveWeapon, bool bIsAutoPickup);
	bool CanUseItem();
	void HealCharacter(class ATBLCharacter* Character);
	void ReceiveBeginPlay();
	void OnThrown_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform);
	void OnPossessedPawn(class APawn* NewPawn);
	void OnHealOverTimeStart(EHealingSource HealingSource, class ATBLPlayerState* InstigatorPlayerState);
	void OnHealOverTimeEnd();
	void UpdateHealHUDMarker();
	void OnDamageTaken(const struct FDamageTakenEvent& Event);
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_MovementFinishedSignature__DelegateSignature();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnSetAttached_Event_1(bool bAttached);
	void SetTeam(class AActor* OwnerActor);
	void SetTeamMaterial();
	void OnProjectileHitTarget(const struct FHitResult& Hit);
	void ExecuteUbergraph_Carryable_BandageKit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
