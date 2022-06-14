#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpecialAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpecialAttack.SpecialAttack_C
// 0x0068 (0x0120 - 0x00B8)
class USpecialAttack_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMeleeTargetMethod*                          MeleeTargetMethod_192_352_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_784_896_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBlockedDamage*                              BlockedDamage_848_800_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UConditionalActions*                         ConditionalActions_688_448_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStandardDamage*                             StandardDamage_864_352_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChargingActivationMethod*                   ChargingActivationMethod_496_80_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_928_480_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsEnemy*                                    IsEnemy_960_416_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStartMovement*                              StartMovement_1248_96_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x0100(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UEventCombatStateChanged*                    EventCombatStateChanged_880_96_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x0108(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsAttackType*                               IsAttackType_1504_128_ExecuteUbergraph_SpecialAttack_RefProperty;// 0x0110(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                SpecialAttack_ExecuteUbergraph_SpecialAttack_RefProperty; // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SpecialAttack.SpecialAttack_C"));
		return ptr;
	}


	void OnAssemble_SpecialAttack();
	void ExecuteUbergraph_SpecialAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
