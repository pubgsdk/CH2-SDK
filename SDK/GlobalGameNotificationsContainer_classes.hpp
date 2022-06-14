#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GlobalGameNotificationsContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C
// 0x00D8 (0x0320 - 0x0248)
class UGlobalGameNotificationsContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            FadeInSpecialSpawn;                                       // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UForwardSpawnContainer_C*                    ForwardSpawnContainer;                                    // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGlobalGameNotification_C*                   GlobalGameNotification;                                   // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHintNotificationWidget_C*                   HintNotificationWidget;                                   // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_64;                                                 // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                NotificationsList;                                        // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPartyInviteNotificationWidget_C*            PartyInviteNotificationWidget;                            // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UQuestTrackersNotificationsWidget_C*         QuestTrackersNotificationsWidget;                         // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               SpecialSpawnWaveText;                                     // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVotekickWidget_C*                           VotekickWidget;                                           // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWeaponRankUpWidget_C*                       WeaponRankUpWidget;                                       // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    On_Started_Wave_Hover;                                    // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Ended_Wave_Hover;                                      // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<struct FLevelUpResult>                      PendingAsyncLoadLevelUps;                                 // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               IsWidgetActive;                                           // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	TArray<struct FLevelUpResult>                      LevelUpsToProcess;                                        // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FName                                       ShownHintKey;                                             // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                HintCooldownHandle;                                       // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDataTable*                                  HintTable;                                                // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FName>                               IgnoreList;                                               // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class AHorseSpecialSpawnEvent_C*                   HorseSpecialSpawnEvent;                                   // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C"));
		return ptr;
	}


	void CanShowHint(bool* CanShowHint);
	void GetRandomHint(TEnumAsByte<EHintType> Category, TEnumAsByte<EHintInputType> Hint_Input_Type, struct FName* RandomKey);
	void ProcessLevelUpEvent(const struct FLevelUpResult& LevelUpResult);
	void OnLoaded_0C2677EC44803511BE7821B9553BFDBE(class UClass* /*UObject*/ Loaded);
	void RecievedInvite(const struct FString& InviteeId, const struct FString& InviteeName);
	void ProcessRankUpMessage(const struct FRankUpMessage& Message);
	void OnPartyInviteReceived(const struct FString& UserId, const struct FString& DisplayName);
	void OnReceivedGlobalGameNotification_Event_1(EGlobalGameNotificationCategory Category, const struct FText& Title, const struct FText& Body, const struct FName& Subcategory, class UObject* Data);
	void AsyncLoadInventoryItem(const struct FLevelUpResult& LevelUpResult);
	void SendLoadedRankUpMessages();
	void OnMessagedFinished();
	void On_Level_Up_Event(TArray<struct FLevelUpResult> LevelUpEvents);
	void OnPartyMemberJoin(const struct FString& UserId, const struct FString& DisplayName);
	void OnPartyMemberLeft(const struct FString& UserId, const struct FString& DisplayName);
	void OnPartyMemberRemoved(const struct FString& UserId, const struct FString& DisplayName);
	void OnPartyLeaderChanged(const struct FString& UserId, const struct FString& DisplayName);
	void OnPartyDisbanded();
	void RequestRandomHint(float HintChance, TEnumAsByte<EHintType> HintCategory, TEnumAsByte<EHintInputType> Hint_Input_Type);
	void HintCooldownFinished();
	void OnTitleBroadcastReceived(const struct FString& Message);
	void OnInitialized();
	void OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState);
	void VotingStarted(class UVotingInstance* VotingInstance);
	void OnPartyInviteResponseReceived(const struct FString& UserId, const struct FString& SenderName, unsigned char Response);
	void Construct();
	void RequestSpecificHint(const struct FName& HintKey);
	void OnCreatePartyResult(bool Result, const struct FString& PartyId);
	void ClearInvites();
	void OnBroadcastSpecialSpawnEventCreated_Event_1(TEnumAsByte<EeSpecialSpawnType> Type, class UObject* Event);
	void SpawnWaveReadyToSpawn_Event_1(TEnumAsByte<EHorseSpecialSpawnStates> NewState, class AHorseSpecialSpawnEvent_C* SpawnEvent);
	void ExecuteUbergraph_GlobalGameNotificationsContainer(int EntryPoint);
	void On_Ended_Wave_Hover__DelegateSignature(class ASpawnWave* Wave);
	void On_Started_Wave_Hover__DelegateSignature(class ASpawnWave* Wave);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
