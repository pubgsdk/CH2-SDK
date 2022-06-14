#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CatapultAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CatapultAttack.CatapultAttack_C
// 0x0070 (0x0128 - 0x00B8)
class UCatapultAttack_C : public UFxInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCatapultTargetMethod*                       CatapultTargetMethod_480_496_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTargetMethod*                            BoxTargetMethod_1280_960_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAbilitySpec*                                CatapultAttack_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCatapultActivationMethod*                   CatapultActivationMethod_544_N160_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxTargetMethod*                            BoxTargetMethod_1280_1232_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereTargetMethod*                         SphereTargetMethod_1296_336_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x00E8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStandardDamage*                             StandardDamage_1968_528_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsType*                                     IsType_1968_448_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMultiTargetMethod*                          MultiTargetMethod_896_544_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x0100(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereTargetMethod*                         SphereTargetMethod_1296_N16_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x0108(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsType*                                     IsType_2160_128_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x0110(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UIsNot*                                      IsNot_1968_144_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x0118(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStandardDamage*                             StandardDamage_1968_224_ExecuteUbergraph_CatapultAttack_RefProperty;// 0x0120(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CatapultAttack.CatapultAttack_C"));
		return ptr;
	}


	void OnAssemble_CatapultAttack();
	void ExecuteUbergraph_CatapultAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
