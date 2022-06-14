#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_StrafeAndKeepDistance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AC_StrafeAndKeepDistance.AC_StrafeAndKeepDistance_C
// 0x000A (0x004A - 0x0040)
class UAC_StrafeAndKeepDistance_C : public UUtilityAI_Action
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	EAiCombatDistance                                  Distance;                                                 // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EAiCombatStrafing                                  Strafing;                                                 // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AC_StrafeAndKeepDistance.AC_StrafeAndKeepDistance_C"));
		return ptr;
	}


	void PerformAction(const struct FUtilityAI_Context& C);
	void ExecuteUbergraph_AC_StrafeAndKeepDistance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
