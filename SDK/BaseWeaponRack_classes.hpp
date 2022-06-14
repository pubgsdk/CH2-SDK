#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseWeaponRack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseWeaponRack.BaseWeaponRack_C
// 0x0031 (0x0341 - 0x0310)
class ABaseWeaponRack_C : public ATBLActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWeaponRackComponent*                        WeaponRack;                                               // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               WeaponRackUnusableWhenKilled;                             // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    SmokeParticle;                                            // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsEnabled;                                                // 0x0338(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	float                                              cull_distance;                                            // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DestroyOnLastUse;                                         // 0x0340(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseWeaponRack.BaseWeaponRack_C"));
		return ptr;
	}


	void GrantWeaponToPawn(class APawn* Pawn);
	void OnRep_IsEnabled();
	void SetEnabledVisibility(bool __);
	void GetHealthPercent(float* HealthPercent);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetIsEnabled(bool IsEnabled);
	void BndEvt__WeaponRack_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable);
	void ExecuteUbergraph_BaseWeaponRack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
