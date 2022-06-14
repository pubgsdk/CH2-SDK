#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Base_Deployable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Base_Deployable.BP_Base_Deployable_C
// 0x0097 (0x0510 - 0x0479)
class ABP_Base_Deployable_C : public ABP_BaseBreakableGate_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USkeletalMeshComponent*                      Destruction_Mesh;                                         // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTeamOwnershipComponent*                     TeamOwnership;                                            // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                        CarryableActorClass;                                      // 0x04A0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UAnimSequence*                               DestructionAnimation;                                     // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         Faction_Static_Meshes;                                    // 0x04D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class USkeletalMesh*>                       Faction_Skeletal_Meshes;                                  // 0x04E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class UAnimSequence*>                       Faction_Destruction_Animations;                           // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               Destruction_Audio;                                        // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                LifespanTimerHandler;                                     // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Base_Deployable.BP_Base_Deployable_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event);
	void ResetLifespanTimer();
	void DestroyConstructable();
	void ExecuteUbergraph_BP_Base_Deployable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
