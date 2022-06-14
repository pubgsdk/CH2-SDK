#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "JabTracers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass JabTracers.JabTracers_C
// 0x0030 (0x01A0 - 0x0170)
class UJabTracers_C : public UWeaponTracers
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAttackTracers*                              AttackTracers_256_80_ExecuteUbergraph_JabTracers_RefProperty;// 0x0178(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAuraTracers*                                AuraTracers_656_165_ExecuteUbergraph_JabTracers_RefProperty;// 0x0180(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAuraTracers*                                AuraTracers_672_N74_ExecuteUbergraph_JabTracers_RefProperty;// 0x0188(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAttackTracers*                              AttackTracers_256_N160_ExecuteUbergraph_JabTracers_RefProperty;// 0x0190(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWeaponTracersBlueprint*                     JabTracers_ExecuteUbergraph_JabTracers_RefProperty;       // 0x0198(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass JabTracers.JabTracers_C"));
		return ptr;
	}


	void OnAssemble_JabTracers();
	void ExecuteUbergraph_JabTracers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
