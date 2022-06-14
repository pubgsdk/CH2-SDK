#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "I_Constant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass I_Constant.I_Constant_C
// 0x0004 (0x0034 - 0x0030)
class UI_Constant_C : public UUtilityAI_InputAxis
{
public:
	float                                              Value_To_Output;                                          // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass I_Constant.I_Constant_C"));
		return ptr;
	}


	float CalculateValue(const struct FUtilityAI_Context& C);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
