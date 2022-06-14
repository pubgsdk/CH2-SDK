#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RightFistTracers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RightFistTracers.RightFistTracers_C
// 0x0040 (0x01B0 - 0x0170)
class URightFistTracers_C : public UWeaponTracers
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParryTracers*                               ParryTracers_272_208_ExecuteUbergraph_RightFistTracers_RefProperty;// 0x0178(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTracers*                                 BoxTracers_656_N76_ExecuteUbergraph_RightFistTracers_RefProperty;// 0x0180(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAttackTracers*                              AttackTracers_272_N128_ExecuteUbergraph_RightFistTracers_RefProperty;// 0x0188(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ULineTracers*                                LineTracers_608_242_ExecuteUbergraph_RightFistTracers_RefProperty;// 0x0190(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTracers*                                 BoxTracers_656_80_ExecuteUbergraph_RightFistTracers_RefProperty;// 0x0198(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAttackTracers*                              AttackTracers_272_32_ExecuteUbergraph_RightFistTracers_RefProperty;// 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWeaponTracersBlueprint*                     RightFistTracers_ExecuteUbergraph_RightFistTracers_RefProperty;// 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass RightFistTracers.RightFistTracers_C"));
		return ptr;
	}


	void OnAssemble_RightFistTracers();
	void ExecuteUbergraph_RightFistTracers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
