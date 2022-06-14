#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LeftFistTracers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LeftFistTracers.LeftFistTracers_C
// 0x0040 (0x01B0 - 0x0170)
class ULeftFistTracers_C : public UWeaponTracers
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParryTracers*                               ParryTracers_272_80_ExecuteUbergraph_LeftFistTracers_RefProperty;// 0x0178(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTracers*                                 BoxTracers_640_N204_ExecuteUbergraph_LeftFistTracers_RefProperty;// 0x0180(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAttackTracers*                              AttackTracers_256_N256_ExecuteUbergraph_LeftFistTracers_RefProperty;// 0x0188(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ULineTracers*                                LineTracers_592_100_ExecuteUbergraph_LeftFistTracers_RefProperty;// 0x0190(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTracers*                                 BoxTracers_640_N32_ExecuteUbergraph_LeftFistTracers_RefProperty;// 0x0198(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAttackTracers*                              AttackTracers_256_N84_ExecuteUbergraph_LeftFistTracers_RefProperty;// 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWeaponTracersBlueprint*                     LeftFistTracers_ExecuteUbergraph_LeftFistTracers_RefProperty;// 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LeftFistTracers.LeftFistTracers_C"));
		return ptr;
	}


	void OnAssemble_LeftFistTracers();
	void ExecuteUbergraph_LeftFistTracers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
