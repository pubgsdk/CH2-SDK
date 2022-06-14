#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BatteringRamCharge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BatteringRamCharge.BatteringRamCharge_C
// 0x0020 (0x00D8 - 0x00B8)
class UBatteringRamCharge_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USingleTargetMethod*                         SingleTargetMethod_560_272_ExecuteUbergraph_BatteringRamCharge_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                BatteringRamCharge_ExecuteUbergraph_BatteringRamCharge_RefProperty;// 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UOnOffActivationMethod*                      OnOffActivationMethod_576_16_ExecuteUbergraph_BatteringRamCharge_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BatteringRamCharge.BatteringRamCharge_C"));
		return ptr;
	}


	void OnAssemble_BatteringRamCharge();
	void ExecuteUbergraph_BatteringRamCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
