#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponRack_GenericBoard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponRack_GenericBoard.WeaponRack_GenericBoard_C
// 0x0047 (0x0388 - 0x0341)
class AWeaponRack_GenericBoard_C : public ABaseWeaponRack_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             PickupMeshes;                                             // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               InteractableCollisionBox;                                 // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    SmokeParticle_1;                                          // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>                 Actors;                                                   // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        VisualizationMesh;                                        // 0x0380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WeaponRack_GenericBoard.WeaponRack_GenericBoard_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__WeaponRack_K2Node_ComponentBoundEvent_1_WeaponRackUsedSignature__DelegateSignature(class APawn* Pawn, class AInventoryItem* ItemGranted, int UsesRemaining);
	void BndEvt__WeaponRack_K2Node_ComponentBoundEvent_1_InteractableComponentOnUsesChangedSignature__DelegateSignature(int UsesRemaining);
	void ExecuteUbergraph_WeaponRack_GenericBoard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
