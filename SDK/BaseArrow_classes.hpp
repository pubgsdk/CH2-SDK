#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseArrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseArrow.BaseArrow_C
// 0x0034 (0x1224 - 0x11F0)
class ABaseArrow_C : public ABaseInventoryItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    ProjectileTailParticleComponent;                          // 0x11F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialBillboardComponent*                 MaterialGlint;                                            // 0x1200(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                EnableParticleTimer;                                      // 0x1208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             arrowtrail_Instigator;                                    // 0x1210(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             arrowtrail;                                               // 0x1218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartTimeStamp;                                           // 0x1220(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseArrow.BaseArrow_C"));
		return ptr;
	}


	void OnRep_StartTimestamp();
	void PlaySoundOnLocalFakeClient(class UAkAudioEvent* Sound, bool* Success);
	void UserConstructionScript();
	void Disable_glint();
	void Enable_glint();
	void EnableProjectileTailParticle();
	void DisableProjectileTailParticle();
	void ProjectileMovementStarted_BaseArrow();
	void ProjectileMovementStopped_BaseArrow();
	void BaseArrow_AssignProjectileEvents();
	void ParticleTimerEvent();
	void ExecuteUbergraph_BaseArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
