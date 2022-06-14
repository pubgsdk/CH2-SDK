#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UseItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UseItem.UseItem_C
// 0x0030 (0x00E8 - 0x00B8)
class UUseItem_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USingleTargetMethod*                         SingleTargetMethod_352_48_ExecuteUbergraph_UseItem_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UUseItem*                                    UseItem_704_N48_ExecuteUbergraph_UseItem_RefProperty;     // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChargingActivationMethod*                   ChargingActivationMethod_352_N80_ExecuteUbergraph_UseItem_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCanUseItem*                                 CanUseItem_704_N128_ExecuteUbergraph_UseItem_RefProperty; // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                UseItem_ExecuteUbergraph_UseItem_RefProperty;             // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass UseItem.UseItem_C"));
		return ptr;
	}


	void OnAssemble_UseItem();
	void ExecuteUbergraph_UseItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
