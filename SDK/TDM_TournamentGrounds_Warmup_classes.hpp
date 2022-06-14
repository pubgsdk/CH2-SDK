#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TDM_TournamentGrounds_Warmup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TDM_TournamentGrounds_Warmup.SequenceDirector_C
// 0x0000 (0x0030 - 0x0030)
class USequenceDirector_C : public ULevelSequenceDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TDM_TournamentGrounds_Warmup.SequenceDirector_C"));
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTSequenceDirector_2();
	void SequenceEvent__ENTRYPOINTSequenceDirector_1();
	void EnableCinematicMesh();
	void DisableCinematicMesh();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
