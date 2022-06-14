#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TackleTracers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TackleTracers.TackleTracers_C
// 0x0030 (0x01A0 - 0x0170)
class UTackleTracers_C : public UWeaponTracers
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAttackTracers*                              AttackTracers_304_27_ExecuteUbergraph_TackleTracers_RefProperty;// 0x0178(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAuraTracers*                                AuraTracers_704_112_ExecuteUbergraph_TackleTracers_RefProperty;// 0x0180(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAuraTracers*                                AuraTracers_688_N96_ExecuteUbergraph_TackleTracers_RefProperty;// 0x0188(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAttackTracers*                              AttackTracers_304_N182_ExecuteUbergraph_TackleTracers_RefProperty;// 0x0190(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWeaponTracersBlueprint*                     TackleTracers_ExecuteUbergraph_TackleTracers_RefProperty; // 0x0198(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TackleTracers.TackleTracers_C"));
		return ptr;
	}


	void OnAssemble_TackleTracers();
	void ExecuteUbergraph_TackleTracers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
