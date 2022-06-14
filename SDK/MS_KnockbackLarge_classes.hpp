#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MS_KnockbackLarge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MS_KnockbackLarge.MS_KnockbackLarge_C
// 0x0018 (0x00C0 - 0x00A8)
class UMS_KnockbackLarge_C : public UMovementInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVelocityCurveMovement*                      VelocityCurveMovement_464_N64_ExecuteUbergraph_MS_KnockbackLarge_RefProperty;// 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMovementSequence*                           MS_KnockbackLarge_ExecuteUbergraph_MS_KnockbackLarge_RefProperty;// 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MS_KnockbackLarge.MS_KnockbackLarge_C"));
		return ptr;
	}


	void OnAssemble_MS_KnockbackLarge();
	void ExecuteUbergraph_MS_KnockbackLarge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
