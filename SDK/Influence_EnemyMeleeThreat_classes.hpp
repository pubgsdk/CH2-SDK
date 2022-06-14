#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Influence_EnemyMeleeThreat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Influence_EnemyMeleeThreat.Influence_EnemyMeleeThreat_C
// 0x0000 (0x0060 - 0x0060)
class UInfluence_EnemyMeleeThreat_C : public UI_Influence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Influence_EnemyMeleeThreat.Influence_EnemyMeleeThreat_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
