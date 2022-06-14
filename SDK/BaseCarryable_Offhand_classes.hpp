#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCarryable_Offhand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseCarryable_Offhand.BaseCarryable_Offhand_C
// 0x0000 (0x1261 - 0x1261)
class ABaseCarryable_Offhand_C : public ABaseCarryable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseCarryable_Offhand.BaseCarryable_Offhand_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
