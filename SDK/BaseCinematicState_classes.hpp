#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCinematicState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseCinematicState.BaseCinematicState_C
// 0x0009 (0x0031 - 0x0028)
class UBaseCinematicState_C : public UCinematicState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               Can_Be_Interrupted;                                       // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseCinematicState.BaseCinematicState_C"));
		return ptr;
	}


	void GetPreparingMatchTimeThreshold(float* MinTimeThreshold);
	void Get_Cinematic_State_from_GameState(struct FGameplayTag* Tag);
	void Get_Cinematic_State_from_Match_State(struct FGameplayTag* State);
	void HandleGoingToSpawnAtSpawner(class ASpawner* Spawner);
	void HandleMatchStateChanged(const struct FName& MatchState);
	void HandleGameCinematicStateChanged(ECinematicGameState GameStateCinematicState);
	void HandlePossessedPawn(class APawn* Pawn);
	void HandleTeamChanged(class ATBLTeam* NewTeam);
	void HandleSuicideNotify(EKillReason KillReason);
	void HandleNextSpawnWaveChanged(class ASpawnWave* SpawnWave);
	void ExecuteUbergraph_BaseCinematicState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
