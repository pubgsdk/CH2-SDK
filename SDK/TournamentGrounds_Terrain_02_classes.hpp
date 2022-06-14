#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TournamentGrounds_Terrain_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TournamentGrounds_Terrain_02.TournamentGrounds_Terrain_02_C
// 0x0000 (0x0260 - 0x0260)
class ATournamentGrounds_Terrain_02_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TournamentGrounds_Terrain_02.TournamentGrounds_Terrain_02_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
