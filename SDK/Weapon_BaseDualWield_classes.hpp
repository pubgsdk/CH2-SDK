#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_BaseDualWield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_BaseDualWield.Weapon_BaseDualWield_C
// 0x001C (0x12C0 - 0x12A4)
class AWeapon_BaseDualWield_C : public ABaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x12A4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               WorldHitTracers;                                          // 0x12B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               MainTracers;                                              // 0x12B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Weapon_BaseDualWield.Weapon_BaseDualWield_C"));
		return ptr;
	}


	void OnInitialize();
	void ExecuteUbergraph_Weapon_BaseDualWield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
