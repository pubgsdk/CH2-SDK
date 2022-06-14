#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TG_InsideCombatZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TG_InsideCombatZone.TG_InsideCombatZone_C
// 0x0000 (0x0030 - 0x0030)
class UTG_InsideCombatZone_C : public UTG_InsideCombatZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TG_InsideCombatZone.TG_InsideCombatZone_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
