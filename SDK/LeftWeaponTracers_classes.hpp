#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LeftWeaponTracers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LeftWeaponTracers.LeftWeaponTracers_C
// 0x0048 (0x01B8 - 0x0170)
class ULeftWeaponTracers_C : public UWeaponTracers
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParryTracers*                               ParryTracers_240_144_ExecuteUbergraph_LeftWeaponTracers_RefProperty;// 0x0178(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ULineTracers*                                LineTracers_592_176_ExecuteUbergraph_LeftWeaponTracers_RefProperty;// 0x0180(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTracers*                                 BoxTracers_736_N256_ExecuteUbergraph_LeftWeaponTracers_RefProperty;// 0x0188(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAttackTracers*                              AttackTracers_240_N304_ExecuteUbergraph_LeftWeaponTracers_RefProperty;// 0x0190(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTracers*                                 BoxTracers_736_16_ExecuteUbergraph_LeftWeaponTracers_RefProperty;// 0x0198(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTracers*                                 BoxTracers_736_N96_ExecuteUbergraph_LeftWeaponTracers_RefProperty;// 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAttackTracers*                              AttackTracers_240_N128_ExecuteUbergraph_LeftWeaponTracers_RefProperty;// 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWeaponTracersBlueprint*                     LeftWeaponTracers_ExecuteUbergraph_LeftWeaponTracers_RefProperty;// 0x01B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LeftWeaponTracers.LeftWeaponTracers_C"));
		return ptr;
	}


	void OnAssemble_LeftWeaponTracers();
	void ExecuteUbergraph_LeftWeaponTracers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
