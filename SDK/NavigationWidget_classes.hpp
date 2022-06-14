#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NavigationWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass NavigationWidget.NavigationWidget_C
// 0x0278 (0x0598 - 0x0320)
class UNavigationWidget_C : public UTBLUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBackgroundBlur*                             Blur;                                                     // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBotBlackActionBar_C*                        BotBlackActionBar;                                        // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      CancelMatchmaking;                                        // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    DialogOverlay;                                            // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      FriendsButton;                                            // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGamepadSelectButton_C*                      GamepadSelectButton;                                      // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      InviteButton;                                             // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      LeaveSessionButton;                                       // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    MainOverlay;                                              // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UMatchmakingStatus_C*                        MatchmakingStatus;                                        // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationTopBar_C*                         NavigationTopBar;                                         // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScaleBox*                                   PlayerProgressBarScaleBox;                                // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      QuitButton;                                               // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    QuitButtonOverlay;                                        // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UResumeButton_C*                             ResumeButton;                                             // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    SubMenuOverlay;                                           // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    SubOverlaySizeBox;                                        // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               VersionTextBlock;                                         // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FNavigationMenuStack                        MenuStack;                                                // 0x03B8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    ChangeCameraEvent;                                        // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    DeselectMenus;                                            // 0x03F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	int                                                CurrentTabIndex;                                          // 0x0408(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	class UNavigationMenuData_C*                       MenuTreeHead;                                             // 0x0410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bHideLogo;                                                // 0x0418(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	int                                                PlayerInputIdNum;                                         // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Request_Input;                                            // 0x0420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	TMap<class UClass* /*UUserWidget*/, class UTBLScreenWidget*> WidgetsByClass;                                           // 0x0428(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               Show_Resume_Button_;                                      // 0x0478(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    Resume_Clicked;                                           // 0x0480(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Fired_Button_Action;                                      // 0x0490(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<class UNavigationButton_C*>                 NavigationButtonArray;                                    // 0x04A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FDialogHandle                               QuitDialogueHandle;                                       // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               Had_Focus_Before_PIE_hack;                                // 0x04B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bReselectFirstMenuItem;                                   // 0x04B5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData04[0x2];                                       // 0x04B6(0x0002) MISSED OFFSET
	int                                                PrevTabIndex;                                             // 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class UNavigationMenuData_C*                       TempNavigationData;                                       // 0x04C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                TempButtonIndex;                                          // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ParentButtonIndex;                                        // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSet<struct FName>                                 ButtonIDsToCallOnMenuClicked;                             // 0x04D0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<struct FString, int>                          NotificationCountMap;                                     // 0x0520(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               bConsoleActionsActive;                                    // 0x0570(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	int                                                ParentIndex;                                              // 0x0574(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPlayerProgressBar_C*                        PlayerProgressBar;                                        // 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ActiveButtonCount;                                        // 0x0580(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0584(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnMenuChanged;                                            // 0x0588(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass NavigationWidget.NavigationWidget_C"));
		return ptr;
	}


	class UWidget* K2_GetFocusWidget();
	void SelectSiblingMenuItem(int IndexDelta, bool CallCameraEvent, bool* HasChangedTab);
	void IsFrontend(bool* IsFrontend);
	void UpdateNavigationForConsole(const struct FText& ScreenName);
	void UpdateNotifications(TArray<int>* NotificationCounts);
	void UpdateMenuDataUI(class UNavigationMenuData_C* NavigationMenuData);
	bool ShouldCallOnMenuClickedWithShoulderButtons();
	void GamepadInGame(const struct FKeyEvent& KeyEvent, const struct FGeometry& Geomtry);
	void IsSameMenu(class UNavigationMenuData_C* NavigationMenuData, bool* bIsSame);
	void GamepadInputFrontend(const struct FKeyEvent& KeyEvent, const struct FGeometry& Geomtry);
	void UpdateButtonIndex(int IncrementValue, class UNavigationMenuData_C** NewSubMenu);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ChangeMenu(class UNavigationMenuData_C* MenuData, bool bCallCameraEvent, bool* MenuChanged);
	void Focus_on_first_menu_button();
	void ChangeButtonStyle(class UNavigationButton_C* Button, const struct FText& Index);
	void HoverChivalryButton(class UChivalryButton_C* Button, class UTexture2D* Icon);
	void InitChivalryButton(class UChivalryButton_C* Button, class UTexture2D* Normal, class UTexture2D* Highlight, float Width, float Height);
	class UTBLScreenWidget* GetWidgetFromClass(class UClass* /*UTBLScreenWidget*/ Class);
	void ChangeCameraSubMenu(int SubMenuIndex);
	void ChangeCamera(const struct FString& CameraName);
	void OnMenuClicked(bool bCallCamera, int* ButtonIndex);
	void UpdateNavigationButtonsFromMenuStack();
	void Construct();
	void LoadScreen(TSoftClassPtr<class UClass> Screen);
	void BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
	void OnUpdate();
	void Yes_Exit();
	void No_Do_Not();
	void OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState);
	void Pop_Current_Menu();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
	void ReselectFirstMenuItem(bool bCallCameraEvent);
	void OpenFriends();
	void TryQuitting();
	void HighlightItem(int Index);
	void FocusOnCurrentScreen();
	void BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature();
	void BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature();
	void On_Is_Matchmaking_Changed(bool bIsMatchmaking);
	void TurnOnNotfication(const struct FText& ButtonID, bool bTurnOn);
	void OnNativeSessionStatusChanged_Event_1();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature();
	void DirectOpenServerBrowser();
	void SelectMenuItem(int Index, bool CallCameraEvent);
	void OnChiv2ButtonClicked();
	void ExecuteUbergraph_NavigationWidget(int EntryPoint);
	void OnMenuChanged__DelegateSignature(bool Changed);
	void Fired_Button_Action__DelegateSignature(const struct FName& Button_ID);
	void Resume_Clicked__DelegateSignature();
	void DeselectMenus__DelegateSignature();
	void ChangeCameraEvent__DelegateSignature(const struct FString& CameraName, const struct FName& FrontendEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
