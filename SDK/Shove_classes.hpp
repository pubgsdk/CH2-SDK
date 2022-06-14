#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Shove_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Shove.Shove_C
// 0x00C8 (0x0180 - 0x00B8)
class UShove_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMeleeTargetMethod*                          MeleeTargetMethod_1008_720_ExecuteUbergraph_Shove_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_2496_800_ExecuteUbergraph_Shove_RefProperty;        // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_2192_752_ExecuteUbergraph_Shove_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_1968_1360_ExecuteUbergraph_Shove_RefProperty;// 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_2240_1488_ExecuteUbergraph_Shove_RefProperty;       // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_2240_1408_ExecuteUbergraph_Shove_RefProperty;       // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBlockedDamage*                              BlockedDamage_2016_1264_ExecuteUbergraph_Shove_RefProperty;// 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_2192_928_ExecuteUbergraph_Shove_RefProperty;// 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStandardDamage*                             StandardDamage_2176_672_ExecuteUbergraph_Shove_RefProperty;// 0x0100(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_2304_576_ExecuteUbergraph_Shove_RefProperty;        // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UEventCombatStateChanged*                    EventCombatStateChanged_896_N112_ExecuteUbergraph_Shove_RefProperty;// 0x0110(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UOrCondition*                                OrCondition_2656_816_ExecuteUbergraph_Shove_RefProperty;  // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCombatState*                              IsCombatState_2848_816_ExecuteUbergraph_Shove_RefProperty;// 0x0120(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCombatState*                              IsCombatState_2848_736_ExecuteUbergraph_Shove_RefProperty;// 0x0128(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCombatState*                              IsCombatState_2880_672_ExecuteUbergraph_Shove_RefProperty;// 0x0130(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCounterSuccess*                           IsCounterSuccess_2384_1408_ExecuteUbergraph_Shove_RefProperty;// 0x0138(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsActiveRiposte*                            IsActiveRiposte_2384_1488_ExecuteUbergraph_Shove_RefProperty;// 0x0140(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UOrCondition*                                OrCondition_2496_928_ExecuteUbergraph_Shove_RefProperty;  // 0x0148(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCombatState*                              IsCombatState_2720_1104_ExecuteUbergraph_Shove_RefProperty;// 0x0150(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCombatState*                              IsCombatState_2720_1024_ExecuteUbergraph_Shove_RefProperty;// 0x0158(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCombatState*                              IsCombatState_2720_944_ExecuteUbergraph_Shove_RefProperty;// 0x0160(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsSelf*                                     IsSelf_2432_576_ExecuteUbergraph_Shove_RefProperty;       // 0x0168(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChargingActivationMethod*                   ChargingActivationMethod_608_N160_ExecuteUbergraph_Shove_RefProperty;// 0x0170(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                Shove_ExecuteUbergraph_Shove_RefProperty;                 // 0x0178(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Shove.Shove_C"));
		return ptr;
	}


	void OnAssemble_Shove();
	void ExecuteUbergraph_Shove(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
