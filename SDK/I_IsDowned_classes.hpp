#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "I_IsDowned_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass I_IsDowned.I_IsDowned_C
// 0x0000 (0x0030 - 0x0030)
class UI_IsDowned_C : public UUtilityAI_InputAxis
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass I_IsDowned.I_IsDowned_C"));
		return ptr;
	}


	float CalculateValue(const struct FUtilityAI_Context& C);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
