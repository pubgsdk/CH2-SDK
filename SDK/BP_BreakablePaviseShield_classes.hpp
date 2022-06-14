#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BreakablePaviseShield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BreakablePaviseShield.BP_BreakablePaviseShield_C
// 0x0080 (0x04F9 - 0x0479)
class ABP_BreakablePaviseShield_C : public ABP_BaseBreakableGate_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UInteractableComponent*                      Interactable;                                             // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    PS_DustImpact;                                            // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Interactable_Pavise_Mason_01;                          // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTeamOwnershipComponent*                     TeamOwnership;                                            // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               InteractableCollisionBox;                                 // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_NewTrack_2_E041150A4AF9337B4C90948B23DFABD0;   // 0x04B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_Impact1_E041150A4AF9337B4C90948B23DFABD0;      // 0x04B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_E041150A4AF9337B4C90948B23DFABD0;   // 0x04B8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EFaction                                           Faction;                                                  // 0x04C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	float                                              ForwardTraceDistance;                                     // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    CachedBrokenRotation;                                     // 0x04D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector                                     CachedBrokenLocation;                                     // 0x04DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CachedDotProductOnDeath;                                  // 0x04E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	struct FTimerHandle                                LifespanTimerHandler;                                     // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DidKilledFx;                                              // 0x04F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BreakablePaviseShield.BP_BreakablePaviseShield_C"));
		return ptr;
	}


	void GetGroundOffset(bool Forward, float* _);
	void UpdateTeam();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__NewTrack_1__EventFunc();
	void OnLoaded_DEBF5ABE4C7A2C6A44D871B4C01A8397(class UObject* Loaded);
	void ReceiveBeginPlay();
	void BndEvt__Stats_K2Node_ComponentBoundEvent_2_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event);
	void KilledFx(const struct FDamageTakenEvent& DamageTakenEvent);
	void BndEvt__Interactable_K2Node_ComponentBoundEvent_3_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
	void ApplyFFAMaterial(TSoftObjectPtr<class UMaterialInterface> Material);
	void ForceBrokenState();
	void ResetLifespanTimer();
	void DestroySelf();
	void ExecuteUbergraph_BP_BreakablePaviseShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
