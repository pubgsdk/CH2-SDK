#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GrantVictoryToRed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GrantVictoryToRed.GrantVictoryToRed_C
// 0x0000 (0x0038 - 0x0038)
class UGrantVictoryToRed_C : public UGrantVictory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GrantVictoryToRed.GrantVictoryToRed_C"));
		return ptr;
	}


	TScriptInterface<class UStageInterface> CompleteStage();
	bool IsStageReadyToComplete();
	void TimeoutStage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
