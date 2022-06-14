#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FFA_TournamentGrounds_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FFA_TournamentGrounds.FFA_TournamentGrounds_C
// 0x0028 (0x0288 - 0x0260)
class AFFA_TournamentGrounds_C : public ATBLLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ASpawnSequence*                              SpawnSequence;                                            // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ASpawnSequence*                              SpawnSequence_1_ExecuteUbergraph_FFA_TournamentGrounds_RefProperty;// 0x0270(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACombatZoneVolume_Inverted_C*                CombatZoneVolume_Inverted3_14_ExecuteUbergraph_FFA_TournamentGrounds_RefProperty;// 0x0278(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AFFATimeoutStage_C*                          FFAStage_242_EdGraph_0_RefProperty;                       // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FFA_TournamentGrounds.FFA_TournamentGrounds_C"));
		return ptr;
	}


	TScriptInterface<class UStageInterface> GetFirstStage();
	void OnWarmupComplete();
	void ReceiveBeginPlay();
	void Warmup_Load();
	void Warmup_Unload();
	void ExecuteUbergraph_FFA_TournamentGrounds(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
