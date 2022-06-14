#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseInventoryItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseInventoryItem.BaseInventoryItem_C
// 0x0090 (0x11F0 - 0x1160)
class ABaseInventoryItem_C : public AInventoryItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1160(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	EHeadGoreAction                                    BaseHeadGoreAction;                                       // 0x1168(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	ELimbGoreAction                                    BaseLimbGoreAction;                                       // 0x1169(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EHelmetRemovalPolicy                               BaseHelmetRemovalPolicy;                                  // 0x116A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x5];                                       // 0x116B(0x0005) MISSED OFFSET
	struct FMulticastScriptDelegate                    BaseProjectileBlockingHitWorld;                           // 0x1170(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FTimerHandle                                CloseCall_SweepForPawns_TimerHandle;                      // 0x1180(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LastCloseCallPosition;                                    // 0x1188(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1194(0x0004) MISSED OFFSET
	TArray<class ATBLCharacter*>                       CloseCallCharacters;                                      // 0x1198(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             TrailParticle;                                            // 0x11A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             ThrownImpactParticle;                                     // 0x11B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RangedRagdollImpulse;                                     // 0x11B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x11BC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               ItemPickedUpSound;                                        // 0x11C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    BaseProjectileBlockingHitNonWorld;                        // 0x11C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              LastPlayedDropTime;                                       // 0x11D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x11DC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               ItemDroppedSound;                                         // 0x11E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              WorldHitVelocityMinimum;                                  // 0x11E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              WorldHitZVectorMinimum;                                   // 0x11EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseInventoryItem.BaseInventoryItem_C"));
		return ptr;
	}


	void Get_Gore_Params(struct FBaseInventoryItem_GoreParams* Params);
	void GetVelocityVector(float* VelocityLength, struct FVector* Velocity);
	void CanPlayWorldHitDropped(bool* Return_Value);
	void StopCloseCallSound();
	void ShouldPlayProjectileSounds(bool* ProjectileSounds, bool* CloseCallSound);
	bool IsClientFakeProjectile();
	bool ShouldDropOnDowned();
	void UserConstructionScript();
	void BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature(class APawn* Pawn);
	void BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
	void BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
	void BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
	void Start_CloseCall_OverlapCheck();
	void CustomEvent_1();
	void Stop_CloseCall_OverlapCheck();
	void BroadcastProjectileWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit);
	void OnProjectileBounce(const struct FHitResult& Hit, bool bParried);
	void AssignProjectileMovementEvents();
	void OnMovementStarted_Event_1();
	void OnMovementFinished_Event_1();
	void BroadcastNonWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit);
	void OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform);
	void OnOwnerChanged_Event_1(class AActor* Owner);
	void OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState);
	void OnInitialize();
	void ListenToWeaponDrop();
	void OnComponentHit_Event_1(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnProjectileHitEvent_1(const struct FProjectileHitParams& HitParams);
	void ExecuteUbergraph_BaseInventoryItem(int EntryPoint);
	void BaseProjectileBlockingHitNonWorld__DelegateSignature(const struct FProjectileHitParams& ProjectileHit);
	void BaseProjectileBlockingHitWorld__DelegateSignature(const struct FProjectileHitParams& ProjectileHit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
