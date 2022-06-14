#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ScoredStage_Interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ScoredStage_Interface.ScoredStage_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UScoredStage_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ScoredStage_Interface.ScoredStage_Interface_C"));
		return ptr;
	}


	void AddScore(int Amount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
