#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OverviewScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass OverviewScreen.OverviewScreen_C
// 0x00D4 (0x031C - 0x0248)
class UOverviewScreen_C : public UTBLOverviewScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UButton*                                     Bigclickablearea;                                         // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKeymapWidget_C*                             KeymapWidget;                                             // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                Loadout;                                                  // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ULoadout_Screen_C*                           LoadoutScreen;                                            // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    NavOverlay;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                PlayerList;                                               // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPlayerList_C*                               PlayerListScreen;                                         // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                TeamSelect;                                               // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTeamSelectScreen_C*                         TeamSelectScreen;                                         // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               Is_Cinematic_Mode;                                        // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<EOverviewScreenState>                  State;                                                    // 0x0299(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x2];                                       // 0x029A(0x0002) MISSED OFFSET
	int                                                PlayerInputIdNum;                                         // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNavigationWidget_C*                         NavigationWidget;                                         // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       TogglePlayerlistKeybind;                                  // 0x02A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               PlayerListAlwaysVisibleOverride;                          // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	struct FKey                                        ShorcutKeyPressed;                                        // 0x02C8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OverviewScreenStateChanged;                               // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TSoftClassPtr<class UClass>                        OptionsScreen;                                            // 0x02F0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               bIsPlayerlistToggle;                                      // 0x0318(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bLockScreenMode;                                          // 0x0319(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bBypassTutorialLockout;                                   // 0x031A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               TutorialKeymapOverride;                                   // 0x031B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass OverviewScreen.OverviewScreen_C"));
		return ptr;
	}


	class UWidget* K2_GetFocusWidget();
	void GetMenuTakeOverActionName(struct FName* Action);
	void StopListeningForMenuTakeOver();
	void StartListeningForMenuTakeOver();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void DisplayNavigationMenu(TEnumAsByte<EOverviewScreenState> State, TEnumAsByte<EOverviewScreenState> PreviousState, bool* Return);
	void Set_Keyboard_Focus();
	void Get_Widget_For_Current_State(class UWidget** Out);
	void Set_cinematics_UI_state(const struct FGameplayTag& State);
	struct FText Get_Loadout_Toggle_Button_Text();
	void IsInEditor(bool* Return_Value);
	void Toggle_Cinematic_Mode(bool Enable_Cinematic_Mode);
	void IsPlayerInSpawnWave(class AController* Player, bool* InSpawnWave);
	void InitNavigationMenu();
	void Hide_Overview_Screen_If_In_Scoreboard_Mode();
	void Set_Overview_Screen_Mode(TEnumAsByte<EOverviewScreenState> New_Mode);
	void BindVIewportFocus_GameAndUIInput(class ATBLPlayerController* TBLPlayerController);
	void OnGameViewportReceivedFocus_Event_1();
	void BindVIewportFocus_GameInput(class ATBLPlayerController* TBLPlayerController);
	void OnGameViewportReceivedFocus_Event_2();
	void BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
	void BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
	void BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature();
	void RequestedToJoinSpawnWave_Event_1(class ASpawnWave* SpawnWave);
	void OnReceivedSpawnWaveJoinResponse_Event_1(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess);
	void Bind_navigation_widget();
	void Resume_Clicked_Event_1();
	void Toggle_ingame_menu();
	void Fired_Button_Action_Event_1(const struct FName& Button_ID);
	void CustomEvent_2();
	void Init_Subwidgets();
	void BP_ShowLoadout(bool bReset);
	void Construct();
	void PlayerListFocused();
	void GamepadInputChanged(EGamepadInputMode GamepadInputMode);
	void ExecuteUbergraph_OverviewScreen(int EntryPoint);
	void OverviewScreenStateChanged__DelegateSignature(TEnumAsByte<EOverviewScreenState> NewState, TEnumAsByte<EOverviewScreenState> PreviousState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
