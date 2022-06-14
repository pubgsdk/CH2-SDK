#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_TG_ScoreFlag_AG01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_TG_ScoreFlag_AG01.Carryable_TG_ScoreFlag_AG01_C
// 0x0000 (0x1261 - 0x1261)
class ACarryable_TG_ScoreFlag_AG01_C : public ABaseCarryable_Offhand_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_TG_ScoreFlag_AG01.Carryable_TG_ScoreFlag_AG01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
