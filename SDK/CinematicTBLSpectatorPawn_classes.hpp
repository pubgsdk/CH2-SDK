#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CinematicTBLSpectatorPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C
// 0x0039 (0x04E1 - 0x04A8)
class ACinematicTBLSpectatorPawn_C : public ATBLSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ULevelSequencePlayer*                        FadeInPlayer;                                             // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ULevelSequencePlayer*                        FadeOutPlayer;                                            // 0x04B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                StartSequenceHandle;                                      // 0x04C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ALevelSequenceActor*                         Overview_Sequence;                                        // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              FadeActors;                                               // 0x04D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               NewVar_1;                                                 // 0x04E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C"));
		return ptr;
	}


	void Get_Relevant_Overview_Sequence(class ALevelSequenceActor** Sequence);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Start_the_overview_sequence();
	void ReceiveUnpossessed(class AController* OldController);
	void Current_Stage_Changed_Event_1(class UObject* Previous_Stage, class UObject* New_Stage);
	void ReceivePossessed(class AController* NewController);
	void SpawnWaveReplicated(class ASpawnWave* SpawnWave);
	void ExecuteUbergraph_CinematicTBLSpectatorPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
