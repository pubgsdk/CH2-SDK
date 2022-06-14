#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_HeavyCrossbow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_HeavyCrossbow.Weapon_HeavyCrossbow_C
// 0x0024 (0x12C8 - 0x12A4)
class AWeapon_HeavyCrossbow_C : public ABaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x12A4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x12B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               WorldHitTracers;                                          // 0x12B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               MainTracers;                                              // 0x12C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Weapon_HeavyCrossbow.Weapon_HeavyCrossbow_C"));
		return ptr;
	}


	class USkeletalMeshComponent* GetSkeletalMesh();
	void ReceiveBeginPlay();
	void CombatStateChanged(class AActor* Actor, const struct FName& PreviousState, const struct FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState);
	void ExecuteUbergraph_Weapon_HeavyCrossbow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
