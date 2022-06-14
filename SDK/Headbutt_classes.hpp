#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Headbutt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Headbutt.Headbutt_C
// 0x0090 (0x0148 - 0x00B8)
class UHeadbutt_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMeleeTargetMethod*                          MeleeTargetMethod_896_624_ExecuteUbergraph_Headbutt_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_2336_768_ExecuteUbergraph_Headbutt_RefProperty;// 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_2224_1040_ExecuteUbergraph_Headbutt_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsEnemy*                                    IsEnemy_2496_1088_ExecuteUbergraph_Headbutt_RefProperty;  // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_2272_1280_ExecuteUbergraph_Headbutt_RefProperty;// 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBlockedDamage*                              BlockedDamage_2320_960_ExecuteUbergraph_Headbutt_RefProperty;// 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UConditionalActions*                         ConditionalActions_2000_752_ExecuteUbergraph_Headbutt_RefProperty;// 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStandardDamage*                             StandardDamage_2320_672_ExecuteUbergraph_Headbutt_RefProperty;// 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_2304_576_ExecuteUbergraph_Headbutt_RefProperty;     // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsEnemy*                                    IsEnemy_2208_736_ExecuteUbergraph_Headbutt_RefProperty;   // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_2544_1376_ExecuteUbergraph_Headbutt_RefProperty;    // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_2544_1296_ExecuteUbergraph_Headbutt_RefProperty;    // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsSelf*                                     IsSelf_2432_576_ExecuteUbergraph_Headbutt_RefProperty;    // 0x0120(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCombatState*                              IsCombatState_2704_1280_ExecuteUbergraph_Headbutt_RefProperty;// 0x0128(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCombatState*                              IsCombatState_2704_1376_ExecuteUbergraph_Headbutt_RefProperty;// 0x0130(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChargingActivationMethod*                   ChargingActivationMethod_608_N160_ExecuteUbergraph_Headbutt_RefProperty;// 0x0138(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                Headbutt_ExecuteUbergraph_Headbutt_RefProperty;           // 0x0140(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Headbutt.Headbutt_C"));
		return ptr;
	}


	void OnAssemble_Headbutt();
	void ExecuteUbergraph_Headbutt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
