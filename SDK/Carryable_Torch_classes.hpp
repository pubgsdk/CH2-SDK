#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_Torch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_Torch.Carryable_Torch_C
// 0x0038 (0x1299 - 0x1261)
class ACarryable_Torch_C : public ABaseCarryable_Offhand_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x1270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                              // 0x1278(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     HitNormal;                                                // 0x1284(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      LastOwner;                                                // 0x1290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Ignited;                                                  // 0x1298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_Torch.Carryable_Torch_C"));
		return ptr;
	}


	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature(const struct FHitResult& HitResult);
	void PlayBurnableHitEvent(class AActor* HitActor);
	void TorchAppliedBurning(class AActor* Hit_Actor);
	void Play_World_Hit_Event(class AActor* Hit_Actor, const struct FVector& Hit_Location, const struct FVector& Hit_Normal);
	void OnAddedToInventoryChanged_Event(class AInventoryItem* Item, bool IsAddedToInventory);
	void OnInitialize();
	void Turn_Off_Embers();
	void ExecuteUbergraph_Carryable_Torch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
