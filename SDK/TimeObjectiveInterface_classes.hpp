#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TimeObjectiveInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TimeObjectiveInterface.TimeObjectiveInterface_C
// 0x0000 (0x0028 - 0x0028)
class UTimeObjectiveInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TimeObjectiveInterface.TimeObjectiveInterface_C"));
		return ptr;
	}


	void GetTimeRemaining(float* TimeSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
