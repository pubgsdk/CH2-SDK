#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_flammableSceneComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_flammableSceneComponent.BP_flammableSceneComponent_C
// 0x0048 (0x0548 - 0x0500)
class UBP_flammableSceneComponent_C : public UFlammableStaticMeshComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystem*                             Burning_Particle_System;                                  // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             Destroyed_Particle_System;                                // 0x0510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FVector>                             AllLocators;                                              // 0x0518(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              PosPerM_3;                                                // 0x0528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              GridJitter;                                               // 0x052C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRandomStream                               RandomizationStream;                                      // 0x0530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    LocatorsCreated;                                          // 0x0538(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_flammableSceneComponent.BP_flammableSceneComponent_C"));
		return ptr;
	}


	void CreateSpawnLocators();
	void ReceiveBeginPlay();
	void CreateLocators();
	void ExecuteUbergraph_BP_flammableSceneComponent(int EntryPoint);
	void LocatorsCreated__DelegateSignature(class UBP_flammableSceneComponent_C* Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
