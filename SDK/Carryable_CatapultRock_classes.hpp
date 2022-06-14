#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_CatapultRock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_CatapultRock.Carryable_CatapultRock_C
// 0x001F (0x1280 - 0x1261)
class ACarryable_CatapultRock_C : public ABaseCarryable_2hLoot_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        sm_tansy02;                                               // 0x1270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        sm_catapultrock_Rope;                                     // 0x1278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_CatapultRock.Carryable_CatapultRock_C"));
		return ptr;
	}


	void BroadcastProjectileWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit);
	void BroadcastNonWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit);
	void ExecuteUbergraph_Carryable_CatapultRock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
