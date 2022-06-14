#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameModeMessageComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameModeMessageComponent.GameModeMessageComponent_C
// 0x0164 (0x026C - 0x0108)
class UGameModeMessageComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDataTable*                                  MessageDataTable;                                         // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                StageNumber;                                              // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	TMap<float, struct FGameModeMessageArray>          DelayedMessages;                                          // 0x0120(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              WorldSeconds;                                             // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	TMap<int, int>                                     LastStageScoreMap;                                        // 0x0178(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               StageNearingCompletionTriggered;                          // 0x01C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseWorldSettingsDataTable;                                // 0x01C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x6];                                       // 0x01CA(0x0006) MISSED OFFSET
	class AActor*                                      AgathaStageCommander;                                     // 0x01D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      TenosiaStageCommander;                                    // 0x01D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      MasonStageCommander;                                      // 0x01E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseNewStageIdNumbers;                                     // 0x01E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01E9(0x0003) MISSED OFFSET
	int                                                LastTicketPercent;                                        // 0x01EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<EFaction, int>                                LastTicketPercentByFaction;                               // 0x01F0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FAKAudioStartStopStruct>             AllStageEndingMusicList;                                  // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<struct FAKAudioStartStopStruct>             RemainingStageEndingMusicList;                            // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UObject*                                     CurrentStage;                                             // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                RandomIndex;                                              // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GameModeMessageComponent.GameModeMessageComponent_C"));
		return ptr;
	}


	void SetupStageEndingMusic();
	void SendFFA_MatchEndedMessages(class ATBLPlayerState* Player_Victor);
	void RemovePreviousStageContextVos();
	void AppendAndGetTDMMessages(TArray<struct FString>* TDMPercentMessages, TArray<struct FString>* TDMTicketsMessage, TArray<struct FGameModeMessageTable>* Messages);
	void GetTDMStageTicketsPercentText(int TicketsRemaining, int InitialTickets, EFaction Faction, TArray<struct FString>* EventTags);
	void NewStageStarted(const TScriptInterface<class UStageInterface>& NewStage);
	void BroadcastMessages(TArray<struct FGameModeMessageTable>* GameModeMessages);
	void TriggerStageEndingMusic();
	void HandleStageNearingScoreComplete(int NewScorePercentage);
	void HandleStageNearingTimeOut(int MinutesRemaining);
	void FormatFFAText(class ATBLPlayerState* PlayerState, int Kills, int KillsForVictory, TArray<struct FGameModeMessageTable>* GameModeMessages, TArray<struct FGameModeMessageTable>* FormattedGameModeMessages);
	void SetStageLastScore(int Score);
	void GetGameModeMessages(TArray<struct FString>* EventTags, TArray<struct FGameModeMessageTable>* Messages);
	void GetStageLastScore(int* LastScore);
	void GetStageMinutesRemaingText(int MinutesRemaining, TArray<struct FString>* EventTags);
	void GetTDMStageTicketsText(int TicketsRemaining, int InitialTickets, EFaction Faction, TArray<struct FString>* EventTags);
	void GetFactionVictoryText(EFaction VictoryFaction, TArray<struct FString>* EventTags);
	void GetDefenderVictoryText(TArray<struct FString>* EventTags);
	void GetAttackerVictoryText(TArray<struct FString>* EventTags);
	void GetScoreStageScoreRows(int Percentage, TArray<struct FGameModeMessageTable>* Messages);
	void QueueGameModeMessages(TArray<struct FGameModeMessageTable>* Messages);
	void GetStageBeginText(TArray<struct FString>* EventTags);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Started_New_Stage_Event_1(const TScriptInterface<class UStageInterface>& Stage, const TScriptInterface<class UStageInterface>& Previous_Stage);
	void On_Score_Changed_Event_1(int CurrentScore, int MaxScore);
	void On_Tickets_Changed_Event_1(EFaction Faction, int Delta, int NewTickets);
	void MinutesRemaining_Event_1(int MinutesRemaining);
	void KillLeaderUpdated_Event_1(class ATBLPlayerState* PlayerState, int Kills, int MaxScore);
	void MatchWaitingToStart();
	void Interface_QueueGameModeMessages(TArray<struct FGameModeMessageTable> Messages);
	void FFAPlayerVictory(class ATBLPlayerState* Player);
	void OnMatchWonBy_Event_1(EFaction Victor);
	void ExecuteUbergraph_GameModeMessageComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
