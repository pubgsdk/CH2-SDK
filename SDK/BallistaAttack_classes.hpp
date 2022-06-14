#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BallistaAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BallistaAttack.BallistaAttack_C
// 0x0048 (0x0100 - 0x00B8)
class UBallistaAttack_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UProjectileTargetMethod*                     ProjectileTargetMethod_464_176_ExecuteUbergraph_BallistaAttack_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChargingActivationMethod*                   ChargingActivationMethod_496_N64_ExecuteUbergraph_BallistaAttack_RefProperty;// 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USingleTargetMethod*                         SingleTargetMethod_848_208_ExecuteUbergraph_BallistaAttack_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UConditionalActions*                         ConditionalActions_1136_240_ExecuteUbergraph_BallistaAttack_RefProperty;// 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStandardDamage*                             StandardDamage_1424_352_ExecuteUbergraph_BallistaAttack_RefProperty;// 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStandardDamage*                             StandardDamage_1424_256_ExecuteUbergraph_BallistaAttack_RefProperty;// 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsType*                                     IsType_1424_112_ExecuteUbergraph_BallistaAttack_RefProperty;// 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                BallistaAttack_ExecuteUbergraph_BallistaAttack_RefProperty;// 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BallistaAttack.BallistaAttack_C"));
		return ptr;
	}


	void OnAssemble_BallistaAttack();
	void ExecuteUbergraph_BallistaAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
