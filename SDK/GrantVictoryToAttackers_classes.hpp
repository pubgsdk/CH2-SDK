#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GrantVictoryToAttackers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GrantVictoryToAttackers.GrantVictoryToAttackers_C
// 0x0008 (0x0040 - 0x0038)
class UGrantVictoryToAttackers_C : public UGrantVictory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GrantVictoryToAttackers.GrantVictoryToAttackers_C"));
		return ptr;
	}


	TScriptInterface<class UStageInterface> CompleteStage();
	bool IsStageReadyToComplete();
	void TimeoutStage();
	void StartStage();
	void ExecuteUbergraph_GrantVictoryToAttackers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
