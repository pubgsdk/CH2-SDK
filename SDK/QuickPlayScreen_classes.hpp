#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuickPlayScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuickPlayScreen.QuickPlayScreen_C
// 0x0070 (0x0420 - 0x03B0)
class UQuickPlayScreen_C : public UTBLScreenWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            NewAnimation;                                             // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDeveloperMessageButton_C*                   DeveloperMessageButton;                                   // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNewsButton_C*                               NewsButton;                                               // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPlayButton_C*                               PlayButton;                                               // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UQuestTrackersMenuWidget_C*                  QuestTrackersNotificationWidget;                          // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                VerticalButtons;                                          // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UStatefulButton_C*                           CurrentNavigationSubButton;                               // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                SelectedIndex;                                            // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class UNavigationWidget_C*                         NavigationWidget;                                         // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNavigationMenuData_C*                       NavMenuData;                                              // 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsDisabledInShipping__WIP_feature_;                       // 0x0410(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsMatchmaking;                                           // 0x0411(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsPartyInQueue;                                          // 0x0412(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0413(0x0005) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass QuickPlayScreen.QuickPlayScreen_C"));
		return ptr;
	}


	bool IsMatchmaking();
	void Set_MM_Button_Image(class UNavigationSubButton_C* Button, const struct FName& Image_Name);
	void SetNavMenu();
	void OnInitialized();
	void OnOpenedScreen();
	void OnInputModeChanged(EGamepadInputMode GamepadInputMode);
	void OnIsMatchmakingChanged_Event_1(bool bIsMatchmaking);
	void BndEvt__CreateGameButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
	void BndEvt__ServerButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
	void SetCreateGamePermission();
	void Construct();
	void OnCreatedParty(bool Result, const struct FString& PartyId);
	void OnPartyLeaderChange_Event_1(const struct FString& UserId, const struct FString& DisplayName);
	void OnPartyLeave_Event_1(bool Result);
	void OnPartyDisband_Event_1();
	void OnMemberJoin(const struct FString& UserId, const struct FString& DisplayName);
	void OnPartyInviteAccept_Event_1(const struct FString& PartyId);
	void OnPartyJoinedQueue_Event_1();
	void OnPartyLeftQueue_Event_1();
	void CanCancelMatchMaking();
	void BndEvt__PlayButton_271_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
	void ExecuteUbergraph_QuickPlayScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
