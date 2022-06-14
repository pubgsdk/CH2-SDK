#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayingMenuManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PlayingMenuManager.PlayingMenuManager_C
// 0x0360 (0x07A0 - 0x0440)
class UPlayingMenuManager_C : public UTBLScreenManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ChatMaximize;                                             // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowTheHud;                                               // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            HideTheHud;                                               // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            CinematicLayerFadeIn;                                     // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            CinematicLayerFadeOut;                                    // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            CinematicsFadeIn;                                         // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            CinematicsFadeOut;                                        // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAutoBalance_Warning_C*                      AutoBalance_Warning;                                      // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UAutoInvalidationBox*                        AutoInvalidationBox_4;                                    // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    ChatLayer;                                                // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UChatWithInput_C*                            ChatWithInput;                                            // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCinematicBars_C*                            CinematicBars;                                            // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    CinematicLayer;                                           // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCombatZone_Warning_C*                       CombatZone_Warning;                                       // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    DebugLayer;                                               // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UFadeWidget_C*                               FadeWidget;                                               // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    GameAddedLayer;                                           // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGameModeMessageContainer_C*                 GameModeMessageContainer;                                 // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGameStatusNotificationWidget_C*             GameStatusNotificationWidget;                             // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGlobalGameNotificationsContainer_C*         GlobalGameNotificationsContainer;                         // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    Hud_Layer;                                                // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHUDWidget_C*                                HUDWidget;                                                // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_1;                                        // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKeymapWidget_C*                             KeymapWidget;                                             // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKillFeed_C*                                 KillFeed;                                                 // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    MainOverlay;                                              // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    Menu_Layer;                                               // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNextSpawnWaveWidget_C*                      NextSpawnWaveWidget;                                      // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGameModeWidgetContainer_C*                  ObjectiveBar;                                             // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    OverCinematicBarsLayer;                                   // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    OverHUDLayer;                                             // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverviewScreen_C*                           OverviewScreen;                                           // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPartyList_C*                                PartyList;                                                // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                Persistent;                                               // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPostDeathScreen_C*                          PostDeathScreen;                                          // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    PostGameLayer;                                            // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USpectatorHudWidget_C*                       SpectatorHudWidget;                                       // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLSafeZone*                                TBLSafeZone_1;                                            // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               TBLTextBlock_67;                                          // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTutorialAreaWidget_C*                       TutorialAreaWidget;                                       // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTutorialPauseScreen_C*                      TutorialPauseScreen;                                      // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWarningsWidget_C*                           WarningsWidget;                                           // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPlayerList_C*                               ScoreboardWidget;                                         // 0x0598(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UObject*                                     Legacy_Class_Select;                                      // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UObject*                                     TeamSelectWidget;                                         // 0x05A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UObject*                                     LoadoutWidget;                                            // 0x05B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBLScreenWidget*                            Post_Game_Widget;                                         // 0x05B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UUserWidget*                                 Debug_Menu;                                               // 0x05C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class UClass* /*UWidget*/, class UWidget*>    Cinematic_Widgets;                                        // 0x05C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               Cinematic_Mode_Enabled_;                                  // 0x0618(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Pending_cinematic_mode;                                   // 0x0619(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x061A(0x0006) MISSED OFFSET
	struct FMulticastScriptDelegate                    Cinematic_bars_mode_changed;                              // 0x0620(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Cinematic_mode_enabled_changed;                           // 0x0630(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Cinematic_HUD_mode_changed;                               // 0x0640(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TSet<class UObject*>                               Cinematic_Partial_requesters;                             // 0x0650(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TSet<class UObject*>                               Cinematic_Full_requesters;                                // 0x06A0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<ECinematicMenuMode>                    Current_cinematic_mode;                                   // 0x06F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	TArray<TSoftObjectPtr<class UObject>>              Cinematic_Mode_Change_Listeners;                          // 0x06F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UTeamSelectScreen_C*                         NewVar_1;                                                 // 0x0708(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NewVar_2;                                                 // 0x0710(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TimeStampOfPostDeathScreen;                               // 0x0714(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PostDeathDuration;                                        // 0x0718(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    FadeOutStarted;                                           // 0x0720(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    FadeOutComplete;                                          // 0x0730(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               Still_Needs_to_Show_Loadout_First_Time;                   // 0x0740(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0741(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnPushCinematicWidget;                                    // 0x0748(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               CinematicLayerFadedIn;                                    // 0x0758(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	class ASpawnWave*                                  JoinedSpawnWave;                                          // 0x0760(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                PostDeathTimerHandle;                                     // 0x0768(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasDied;                                                  // 0x0770(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	class UVotekickWidget_C*                           VotekickWidget_1;                                         // 0x0778(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                SkipTutorialTimerHandler;                                 // 0x0780(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                SkipMessageId;                                            // 0x0788(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnTutorialSkipStation;                                    // 0x0790(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass PlayingMenuManager.PlayingMenuManager_C"));
		return ptr;
	}


	void GetFadeDuration(float* Duration);
	void Push_Cinematic_Widget(class UClass* /*UWidget*/ Widget_class, class UWidget** Widget);
	class UTBLKeymapWidget* GetKeymapWidget();
	void DetermineScoreEventType(const struct FScoreEventStruct& ScoreEventStruct, bool* _);
	void IsVisibleCinematicWidget(class UClass* /*UWidget*/ WidgetClass, bool* bIsVisible);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void EnableFocusMode(bool Enable_);
	struct FTimerHandle OnDeathRecap(float Timer);
	void UpdateSpectatorHudVisibility(class UObject* Pawn);
	void Handle_Cinematic_HUD_Requests_Changed();
	void ResetGuiBackgroundCount();
	void AddWidgetToScreen(class UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HAlign, TEnumAsByte<EVerticalAlignment> VAlign, class UOverlay* Overlay);
	void Get_Faction(EFaction* Faction);
	void Construct();
	void Toggle_Loadout_Screen(bool bScoreboardMode);
	void Show_InGame_Menu();
	void Start_of_game_actions();
	void ShowVOPersonalMenu(const struct FKey& Key);
	void ShowVOTacticalMenu(const struct FKey& Key);
	void ShowHudLayer();
	void HideHudLayer();
	void HideVOMenu();
	void Hide_Overview_Screen();
	void OpenDebugMenu(class UBlueprintDebugMenuComponent* DebugMenuComponent);
	void Remove_Debug_Menu();
	void Remove_Cinematic_Widget(class UWidget* Widget);
	void Show_Overview_Screen();
	void Request_cinematic_bars(class UObject* Requester, TEnumAsByte<ECinematicBarsMode> Mode);
	void Release_cinematic_bars(class UObject* Requester);
	void Open_Loadout();
	void BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On_Mode_Changed__DelegateSignature(TEnumAsByte<ECinematicBarsMode> Mode);
	void Request_cinematic_HUD_mode(class UObject* Requester, TEnumAsByte<ECinematicMenuMode> Mode);
	void Release_cinematic_HUD_mode(class UObject* Requester, TEnumAsByte<ECinematicMenuMode> Mode);
	void Update_cinematic_requests_soon();
	void Request_fade_out(class UObject* Requester);
	void Release_fade_out__fade_in_(class UObject* Requester);
	void BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics_Mode_Changed__DelegateSignature(TEnumAsByte<ECinematicMenuMode> New_Mode, TEnumAsByte<ECinematicMenuMode> Previous_mode);
	void ShowVOEmoteMenu(const struct FKey& Key);
	void OnClientPossessedPawn_Event_1(class APawn* NewPawn);
	void OnPossessedPawn(class APawn* Pawn);
	void OnPossessedPawn_Event_1(class APawn* NewPawn);
	void OnTeamChanged_Event_1(class ATBLTeam* NewTeam);
	void OnTeamChanged(class ATBLTeam* NewTeam);
	void Add_Cinematic_Mode_Change_Listener(const TScriptInterface<class UCinematicModeChangeListenerInterface_C>& Listener);
	void OnDeathRecapReplicated_Local();
	void HidePostDeath();
	void Post_Death_Possessed_New_Pawn();
	void Snap_Fade_In();
	void Toggle_Team_Select_Screen(bool bScoreboardMode);
	void Event_Open_Team_Select_Screen();
	void OnMatchEnded_Event_1();
	void FadeOutCinematicLayer();
	void FadeInCinematicLayer();
	void BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature(TEnumAsByte<EOverviewScreenState> NewState, TEnumAsByte<EOverviewScreenState> PreviousState);
	void OnZoomDisabled_Event_1();
	void OnZoomEnabled_Event_1();
	void Toggle_Player_List_Screen(bool bShowHide);
	void FadeOutFinished();
	void FadeOutStart();
	void SetHudVisibility(bool bVisible);
	void Force_HUD_Visible();
	void Show_Radial_Inventory_Screen();
	void Hide_Radial_Inventory_Screen();
	void ShowLoadoutOnFirstDeath();
	void OnPushCinematicWidgetEvent(class UWidget* Widget);
	void BP_FadeOut(float PlaybackSpeed);
	void BP_FadeIn(float PlaybackSpeed);
	void Destruct();
	void OnSavedClassUnavailable(class UClass* /*ATBLCharacter*/ RequestedSubclass);
	void InitializeScoreEvents();
	void OnScoreEvent_Event_1(const struct FScoreEventStruct& ScoreEvent);
	void Team_Select_Input_Pressed();
	void SpawnWaveJoined(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess);
	void ShowTutorialAreaWidget();
	void HideTutorialAreaWidget();
	void UpdateTutorialArea(const struct FText& Title, const struct FText& NarratorText);
	void AddTutorialAction(const struct FText& ActionText, const struct FText& ControllerActionText, const struct FText& ActionKeyboardCallout, const struct FText& ActionControllerCallout, const struct FText& ActionDesc, int ActionMaxCount, float SkipAfterTime);
	void ClearTutorialActionList(bool Fade);
	void UpdateTutorialActionCount(const struct FText& ActionText, int NewCount);
	void UpdateNarratorText(const struct FText& NarratorText);
	void UpdateTutorialProgress(float Progress);
	void ForwardSpawnFade();
	void ForwardSpawnFadeIn();
	void RequestRandomHint(float Chance, TEnumAsByte<EHintType> HintKey, TEnumAsByte<EHintInputType> HintInputType);
	void EnableTutorialTimer(float TimerLength);
	void DisableTutorialTimer();
	void ResetTutorialTimer();
	void TimerSuccess(bool ShouldDisable);
	void OnPlayerSelectedSpectatorMode_Event_1(bool IsPlayerSpectator);
	void BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On_Entered_Input_Mode__DelegateSignature();
	void BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On_Left_Input_Mode__DelegateSignature();
	void InitWithCallouts(TArray<struct FTutorialCalloutActionStruct> KeyboardCallouts, TArray<struct FTutorialCalloutActionStruct> ControllerCallouts);
	void ClearCallouts();
	void NextCallout();
	void RestartCallouts();
	void ResetTutorialChallenges();
	void TutorialStationComplete();
	void TutorialActionFailed(const struct FText& Action);
	void ShowTutorialSkipMessage();
	void OnPromptPlayerMessageReply_Event_1(int MessageId, bool Response, class ATBLPlayerController* Player);
	void AutoHideVOTimerStarted();
	void OpenTutorialPauseScreen(const struct FText& StationTitle, const struct FText& ChallengeIntro, const struct FText& ChallengeTitle, TArray<struct FTutorialPauseScreenStep> Steps, const struct FText& HintDesc, class UMediaSource* Video, float ContinueTIme);
	void HideChat(bool ShouldHide);
	void ToggleKeymap();
	void CancelSkipChallenge();
	void FadeCalloutUsableAtIndex(int Index, bool Fade);
	void CompleteTutorial();
	void Show_Loadout_First_Time_Only();
	void RequestSpecificHint(const struct FName& HintKey);
	void ExecuteUbergraph_PlayingMenuManager(int EntryPoint);
	void OnTutorialSkipStation__DelegateSignature();
	void OnPushCinematicWidget__DelegateSignature(class UWidget* Widget);
	void FadeOutComplete__DelegateSignature();
	void FadeOutStarted__DelegateSignature();
	void Cinematic_HUD_mode_changed__DelegateSignature(TEnumAsByte<ECinematicMenuMode> Mode);
	void Cinematic_mode_enabled_changed__DelegateSignature(bool Enabled_);
	void Cinematic_bars_mode_changed__DelegateSignature(TEnumAsByte<ECinematicBarsMode> Mode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
