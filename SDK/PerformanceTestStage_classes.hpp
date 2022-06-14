#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PerformanceTestStage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PerformanceTestStage.PerformanceTestStage_C
// 0x0000 (0x0410 - 0x0410)
class APerformanceTestStage_C : public AStandardStage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PerformanceTestStage.PerformanceTestStage_C"));
		return ptr;
	}


	bool IsStageReadyToComplete();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
