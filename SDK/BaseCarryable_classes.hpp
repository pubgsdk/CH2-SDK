#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCarryable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseCarryable.BaseCarryable_C
// 0x0071 (0x1261 - 0x11F0)
class ABaseCarryable_C : public ABaseInventoryItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               WorldHitTracers;                                          // 0x11F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               MainTracers;                                              // 0x1200(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FsCarryableImpact>                   WorldImpactEvents;                                        // 0x1208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	class UMaterialInterface*                          Decal;                                                    // 0x1218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     DecalSize;                                                // 0x1220(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x122C(0x0004) MISSED OFFSET
	struct FsCarryableImpact                           CustomImpactVariant;                                      // 0x1230(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PlayedFakeClientEffects;                                  // 0x1260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseCarryable.BaseCarryable_C"));
		return ptr;
	}


	bool GetEquippableOnHorse();
	void EvaluateImpact(float DistanceTravelled, int* Index, bool* Success);
	void OnCustomImpact(int Index, const struct FProjectileHitParams& ProjectileHit);
	void BaseProjectileBlockingHitWorld_Event_BaseCarryable(const struct FProjectileHitParams& ProjectileHit);
	void BaseProjectileBlockingHitNonWorld_Event_BaseCarryable(const struct FProjectileHitParams& ProjectileHit);
	void OnInitialize();
	void ExecuteUbergraph_BaseCarryable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
