#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RightWeaponTracers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RightWeaponTracers.RightWeaponTracers_C
// 0x0048 (0x01B8 - 0x0170)
class URightWeaponTracers_C : public UWeaponTracers
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParryTracers*                               ParryTracers_272_240_ExecuteUbergraph_RightWeaponTracers_RefProperty;// 0x0178(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTracers*                                 BoxTracers_656_N32_ExecuteUbergraph_RightWeaponTracers_RefProperty;// 0x0180(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAttackTracers*                              AttackTracers_272_N64_ExecuteUbergraph_RightWeaponTracers_RefProperty;// 0x0188(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTracers*                                 BoxTracers_656_48_ExecuteUbergraph_RightWeaponTracers_RefProperty;// 0x0190(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTracers*                                 BoxTracers_656_N208_ExecuteUbergraph_RightWeaponTracers_RefProperty;// 0x0198(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAttackTracers*                              AttackTracers_272_N256_ExecuteUbergraph_RightWeaponTracers_RefProperty;// 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ULineTracers*                                LineTracers_608_272_ExecuteUbergraph_RightWeaponTracers_RefProperty;// 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWeaponTracersBlueprint*                     RightWeaponTracers_ExecuteUbergraph_RightWeaponTracers_RefProperty;// 0x01B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass RightWeaponTracers.RightWeaponTracers_C"));
		return ptr;
	}


	void OnAssemble_RightWeaponTracers();
	void ExecuteUbergraph_RightWeaponTracers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
