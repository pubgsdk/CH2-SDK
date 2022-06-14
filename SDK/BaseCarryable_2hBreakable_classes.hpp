#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCarryable_2hBreakable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseCarryable_2hBreakable.BaseCarryable_2hBreakable_C
// 0x0000 (0x12B8 - 0x12B8)
class ABaseCarryable_2hBreakable_C : public ABaseCarryable_Breakable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseCarryable_2hBreakable.BaseCarryable_2hBreakable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
