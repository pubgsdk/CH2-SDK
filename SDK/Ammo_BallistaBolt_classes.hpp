#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ammo_BallistaBolt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ammo_BallistaBolt.Ammo_BallistaBolt_C
// 0x0014 (0x1238 - 0x1224)
class AAmmo_BallistaBolt_C : public ABaseArrow_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1224(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             AttachRagdoll;                                            // 0x1230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Ammo_BallistaBolt.Ammo_BallistaBolt_C"));
		return ptr;
	}


	void GetAttachRagdollParams(class ATBLCharacter* Character, const struct FDeathDamageTakenEvent& DamageEvent, struct FAttachRagdollParams* AttachRagdollParams);
	bool ShouldAttachRagdoll();
	void BaseProjectileBlockingHitWorld_Event_1(const struct FProjectileHitParams& ProjectileHit);
	void BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
	void OnInitialize();
	void ExecuteUbergraph_Ammo_BallistaBolt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
