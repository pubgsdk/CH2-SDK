#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GamemodeFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GamemodeFunctions.GamemodeFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UGamemodeFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GamemodeFunctions.GamemodeFunctions_C"));
		return ptr;
	}


	static void BroadcastSoundAtLocation(EFaction Faction, const struct FVector& Location, class UAkAudioEvent* Sound, class UObject* __WorldContext);
	static void ManuallyPlayCommanderMessages(const TScriptInterface<class UStageInterface>& Stage, class UObject* __WorldContext, TArray<struct FGameModeMessageTable>* Messages);
	static void IsListenServer(class AActor* ContextObject, class UObject* __WorldContext, bool* Return_Value);
	static void BroadcastTdmPrivateMessage(TEnumAsByte<ETdmMessageTypes> TdmMessageType, int Value, class APlayerController* PlayerController, class UObject* Object, class UObject* __WorldContext);
	static void BroadcastTdmMessage(TEnumAsByte<ETdmMessageTypes> TdmMessageType, int Value, class UObject* WorldContextObject, class UObject* Object, class UObject* __WorldContext);
	static void BroadcastGameModeMessages(class UObject* __WorldContext, TArray<struct FGameModeMessageTable>* Messages);
	static void Player_With_Most_Kills_Victory(EFaction Faction, int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage);
	static void Get_Level_Sequence_from_Asset_Ptr__4_16_workaround__remove_in_4_18_(TSoftObjectPtr<class ALevelSequenceActor> Asset, class UObject* World_Context_Object, class UObject* __WorldContext, class ALevelSequenceActor** Actor);
	static void Get_Current_Stage(class UObject* __WorldContext, class UObject** Stage);
	static void Start_Initial_Spawn_with_manual_start__preferred_(class ASpawner* Spawner, EFaction Faction, bool Force_Spawning, class UObject* __WorldContext, class ASpawnWave** Wave);
	static void Auto_Start_All_Spawn_Sequences_Like_TDM_Does_It(class UObject* __WorldContext);
	static void Defenders_Victory(int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage);
	static void Attackers_Victory(int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage);
	static void Start_Initial_Spawns_From_World_Settings(bool Force_Spawning, bool Manual_start, class UObject* __WorldContext, class ASpawnWave** Out_agatha_wave, class ASpawnWave** Out_mason_wave);
	static void Start_Initial_Spawn__With_duration__(class ASpawner* Spawner, EFaction Faction, bool Force_Spawning, float Seconds_before_spawning_starts, class UObject* __WorldContext, class ASpawnWave** Wave);
	static void Draw(int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage);
	static void Blue_Victory(int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage);
	static void Red_Victory(int StageIdNum, class UObject* __WorldContext, TScriptInterface<class UStageInterface>* Stage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
