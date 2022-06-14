#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GrantVictoryToPlayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GrantVictoryToPlayer.GrantVictoryToPlayer_C
// 0x0018 (0x0040 - 0x0028)
class UGrantVictoryToPlayer_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ATBLPlayerState*                             PlayerToGrantVictory;                                     // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EFaction                                           Faction;                                                  // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                StageIdNum;                                               // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GrantVictoryToPlayer.GrantVictoryToPlayer_C"));
		return ptr;
	}


	float GetTimeRemaining();
	float GetTimeRemainingPercent();
	class AActor* GetStageCommander(EFaction Faction);
	int GetStageIdNum();
	TScriptInterface<class UStageInterface> CompleteStage();
	bool IsStageReadyToComplete();
	void StartStage();
	void ExecuteUbergraph_GrantVictoryToPlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
