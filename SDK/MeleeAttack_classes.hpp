#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MeleeAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeAttack.MeleeAttack_C
// 0x0138 (0x01F0 - 0x00B8)
class UMeleeAttack_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMeleeTargetMethod*                          MeleeTargetMethod_240_448_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UConditionalActions*                         ConditionalActions_1184_144_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UEventCombatStateChanged*                    EventCombatStateChanged_800_112_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UEventCombatStateChanged*                    EventCombatStateChanged_768_N0_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_768_1696_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_1072_1872_ExecuteUbergraph_MeleeAttack_RefProperty; // 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_1072_1776_ExecuteUbergraph_MeleeAttack_RefProperty; // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_1072_1696_ExecuteUbergraph_MeleeAttack_RefProperty; // 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_1072_1616_ExecuteUbergraph_MeleeAttack_RefProperty; // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_2112_128_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0108(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_992_672_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0110(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_784_1472_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0118(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCounter*                                  IsCounter_1232_1696_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0120(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_2672_272_ExecuteUbergraph_MeleeAttack_RefProperty;  // 0x0128(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsRiposte*                                  IsRiposte_1232_1776_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0130(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_2112_304_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0138(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsMovementDirection*                        IsMovementDirection_2448_416_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0140(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_2496_272_ExecuteUbergraph_MeleeAttack_RefProperty;  // 0x0148(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_2112_480_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0150(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsMovementDirection*                        IsMovementDirection_2448_528_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0158(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UConditionalActions*                         ConditionalActions_736_592_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0160(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsEnemy*                                    IsEnemy_1040_528_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0168(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_1648_N0_ExecuteUbergraph_MeleeAttack_RefProperty;   // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_1648_N64_ExecuteUbergraph_MeleeAttack_RefProperty;  // 0x0178(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsMovementMode*                             IsMovementMode_1648_N144_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0180(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsMoving*                                   IsMoving_1648_N208_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0188(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCrouched*                                 IsCrouched_1808_N64_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0190(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsLookingDown*                              IsLookingDown_1808_N0_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x0198(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_976_992_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UConditionalActions*                         ConditionalActions_768_864_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsEnemy*                                    IsEnemy_1008_912_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x01B0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsAlive*                                    IsAlive_1008_848_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x01B8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCombatState*                              IsCombatState_1232_1856_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x01C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsCounterSuccess*                           IsCounterSuccess_1232_1616_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x01C8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStandardDamage*                             StandardDamage_656_480_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x01D0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBlockedDamage*                              BlockedDamage_768_1360_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x01D8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChargingActivationMethod*                   ChargingActivationMethod_496_80_ExecuteUbergraph_MeleeAttack_RefProperty;// 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                MeleeAttack_ExecuteUbergraph_MeleeAttack_RefProperty;     // 0x01E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MeleeAttack.MeleeAttack_C"));
		return ptr;
	}


	void OnAssemble_MeleeAttack();
	void ExecuteUbergraph_MeleeAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
