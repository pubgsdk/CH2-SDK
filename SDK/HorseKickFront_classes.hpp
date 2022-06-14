#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseKickFront_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HorseKickFront.HorseKickFront_C
// 0x0038 (0x00F0 - 0x00B8)
class UHorseKickFront_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereTargetMethod*                         SphereTargetMethod_464_240_ExecuteUbergraph_HorseKickFront_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStandardDamage*                             StandardDamage_912_432_ExecuteUbergraph_HorseKickFront_RefProperty;// 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_928_304_ExecuteUbergraph_HorseKickFront_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsSelf*                                     IsSelf_1088_304_ExecuteUbergraph_HorseKickFront_RefProperty;// 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChargingActivationMethod*                   ChargingActivationMethod_480_16_ExecuteUbergraph_HorseKickFront_RefProperty;// 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                HorseKickFront_ExecuteUbergraph_HorseKickFront_RefProperty;// 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HorseKickFront.HorseKickFront_C"));
		return ptr;
	}


	void OnAssemble_HorseKickFront();
	void ExecuteUbergraph_HorseKickFront(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
