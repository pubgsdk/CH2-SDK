#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FenceSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FenceSpawner.FenceSpawner_C
// 0x0030 (0x0690 - 0x0660)
class AFenceSpawner_C : public ABaseSpawner_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        SM_sturdyFence_01;                                        // 0x0668(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0670(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       SpawnAnimation;                                           // 0x0678(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBLCharacter*                               Character;                                                // 0x0680(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBLPlayerController*                        Controller;                                               // 0x0688(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FenceSpawner.FenceSpawner_C"));
		return ptr;
	}


	class USceneComponent* GetSpawnLocationAndComponent(int Index, struct FTransform* OutTransform, float* SpawnRadius, float* SpawnHalfHeight);
	int GetMaxPlayerCount();
	void DoSpawnAnimation(class ATBLCharacter* Character);
	void Cinematics_StartAllowingControl(class ATBLCharacter* Character);
	void OnMovementStateChanged(const struct FName& MovementState);
	void ExecuteUbergraph_FenceSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
