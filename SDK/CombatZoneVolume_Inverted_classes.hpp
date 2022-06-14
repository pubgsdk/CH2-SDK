#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CombatZoneVolume_Inverted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CombatZoneVolume_Inverted.CombatZoneVolume_Inverted_C
// 0x0000 (0x02B8 - 0x02B8)
class ACombatZoneVolume_Inverted_C : public AOutOfCombatZoneVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CombatZoneVolume_Inverted.CombatZoneVolume_Inverted_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
