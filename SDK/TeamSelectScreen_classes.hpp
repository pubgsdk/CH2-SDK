#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TeamSelectScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TeamSelectScreen.TeamSelectScreen_C
// 0x00E1 (0x0491 - 0x03B0)
class UTeamSelectScreen_C : public UTBLScreenWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              AgathaMasonSelect;                                        // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTeamSelectWidget_C*                         AttackerSelect;                                           // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBotBlackActionBar_C*                        BotBlackActionBar;                                        // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      CloseButton;                                              // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTeamSelectWidget_C*                         DefenderSelect;                                           // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    FFASelect;                                                // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTeamSelectWidget_C*                         FFAWidget;                                                // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGamepadSelectButton_C*                      GamepadSelectButton;                                      // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      LoadoutButton;                                            // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UResumeButton_C*                             ResumeButton;                                             // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    SpectatingOverlay;                                        // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      SpectatorButton;                                          // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               SpectatorCountTextBlock;                                  // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Spectators;                                               // 0x0420(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                AgathaPlayers;                                            // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    SendToServerChatRequest;                                  // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    TeamChanged;                                              // 0x0450(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	EFaction                                           PlayerFaction;                                            // 0x0460(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsTutorialMode;                                          // 0x0461(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0462(0x0006) MISSED OFFSET
	struct FMulticastScriptDelegate                    TutorialTeamSelected;                                     // 0x0468(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    LoreVideoComplete;                                        // 0x0478(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UFactionVideoOverlay_C*                      FactionVideoOverlay;                                      // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               TutorialTeamChosen;                                       // 0x0490(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TeamSelectScreen.TeamSelectScreen_C"));
		return ptr;
	}


	class UWidget* K2_GetFocusWidget();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void TeamToSwitchTo(EFaction TeamToSwitchTo);
	void SendChatNotification(EFaction FactionToSwitchTo);
	void Init_Team_Select_Screen();
	bool IsInSpectatorMode();
	void Close_This_Screen();
	void Open_Loadout_Menu();
	void BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void StartTimer();
	void TimerAction();
	void OpenLoadout();
	void Spectate();
	void OnInitialized();
	void OnAcknowledgedTeamRequest_Event_1(bool bSuccess, EFaction Faction);
	void OnGamepadChange(EGamepadInputMode GamepadInputMode);
	void Construct();
	void InterceptTutorialTeamSelect(EFaction Faction);
	void SetTutorialMode(bool bEnabled);
	void OnLoreVideoComplete();
	void GoToInGameMenu();
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void ExecuteUbergraph_TeamSelectScreen(int EntryPoint);
	void LoreVideoComplete__DelegateSignature();
	void TutorialTeamSelected__DelegateSignature(EFaction Faction);
	void TeamChanged__DelegateSignature();
	void SendToServerChatRequest__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
