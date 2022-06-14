#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBLHud_General_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBLHud_General.TBLHud_General_C
// 0x0651 (0x0F49 - 0x08F8)
class ATBLHud_General_C : public ATBLHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0900(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UUserWidget*                                 ScoreboardWidget;                                         // 0x0908(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UObject*                                     Customization;                                            // 0x0910(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UUserWidget*                                 MapWidget;                                                // 0x0918(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0920(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Current_Post_Process_Alpha;                               // 0x0928(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Time_to_fade_in_background;                               // 0x092C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    Background_MID;                                           // 0x0930(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Number_screens_that_want_background_to_display;           // 0x0938(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        PP_Settings;                                              // 0x0940(0x0540) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    NumRowKeyUp;                                              // 0x0E80(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UUserWidget*                                 GameInputMappings;                                        // 0x0E90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                PendingVONum;                                             // 0x0E98(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DoubleClickVOTime;                                        // 0x0E9C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                VOOptionTimerHandle;                                      // 0x0EA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bShowAbilityDescriptionInputHeld;                         // 0x0EA8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0EA9(0x0007) MISSED OFFSET
	struct FTimerHandle                                ShowAbilityDescriptionInputHeldTimer;                     // 0x0EB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsAbilityDescriptionsVisible;                            // 0x0EB8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0EB9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    blurMID;                                                  // 0x0EC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               reversePP;                                                // 0x0EC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               switchScreen;                                             // 0x0EC9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               VOPersonalMenu_Open;                                      // 0x0ECA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               VOTacticalMenu_Open;                                      // 0x0ECB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               VOEmoteMenu_Open;                                         // 0x0ECC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0ECD(0x0003) MISSED OFFSET
	struct FTimerHandle                                EmoteGamepadHandle;                                       // 0x0ED0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               modifiedNumpad;                                           // 0x0ED8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0ED9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              SightlineCameras;                                         // 0x0EE0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               bFoundCameras;                                            // 0x0EF0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0EF1(0x0003) MISSED OFFSET
	int                                                curNumpadPressed;                                         // 0x0EF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                currentCam;                                               // 0x0EF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0EFC(0x0004) MISSED OFFSET
	struct FTimerHandle                                RadialInventoryGamepadHandle;                             // 0x0F00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsInGameMenuInputHeld;                                    // 0x0F08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsScoreboardInputHeld;                                    // 0x0F09(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0F0A(0x0006) MISSED OFFSET
	struct FTimerHandle                                InGameMenuTimerHandle;                                    // 0x0F10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                AutoHideRadialVoTimerHandle;                              // 0x0F18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RadialVoCanHide;                                          // 0x0F20(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0F21(0x0003) MISSED OFFSET
	float                                              RadialVoOpenedTimeSeconds;                                // 0x0F24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinimumRadialVoTime;                                      // 0x0F28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              OpenRadialInventoryHoldTime;                              // 0x0F2C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsRadialInventoryTimerActive;                             // 0x0F30(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0F31(0x0003) MISSED OFFSET
	float                                              ScoreboardGamepadInputHoldStartTime;                      // 0x0F34(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ShowKeymapGamepadRequiredHoldTime;                        // 0x0F38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0F3C(0x0004) MISSED OFFSET
	struct FTimerHandle                                ShowKeymapGamepadTimerHandle;                             // 0x0F40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsScoreboardTimerActive;                                  // 0x0F48(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBLHud_General.TBLHud_General_C"));
		return ptr;
	}


	void IsScoreboardOpen(bool* bIsOpen);
	void CanHideRadialVoImmediately(bool IsGamePad, bool* Return_Value);
	void ShouldShowRadialMenus(bool* Result);
	void DismissRadials();
	void ConvertDoubleKeyToVOOption(int Key, int* NewKey);
	void VOOptionExpired();
	void HandleVOOption(int VOOption);
	void InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_SelectClass_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Five_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_Six_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Seven_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_DebugMacros_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_DebugMacros_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_ShowControlMap_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_RadialInventory_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_RadialInventory_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ShowTeamSelectScreen(bool bGameStart);
	void ShowIngameMenu();
	void ShowLoadoutScreen();
	void OnTeamChanged_Event_1(class ATBLTeam* NewTeam);
	void OnPossessedPawn(class APawn* NewPawn);
	void OnDeathRecapReplicated_Event_1();
	void OnMatchWonBy_Event_1(EFaction Victor);
	void Emote_Gamepad_Released();
	void CloseEmoteMenu();
	void Emote_Gamepad_Pressed(const struct FKey& Key, bool Personal);
	void SpectateAndHideHUD();
	void CloseRadialInventory();
	void InGameMenuReleased();
	void AfterTimerShowMenu();
	void PS4TouchpadPressed();
	void StartRadialVOTimer_PC();
	void CustomEvent_1();
	void GamepadShowEmoteWheel();
	void GamepadHideEmoteWheel();
	void InventoryPressedTimerFinished();
	void HideEmoteMenu(bool IsGamePad);
	void OnGamepadShowKeymapInputComplete();
	void Scoreboard_Input_Timer_Finished();
	void InGameMenuPressed();
	void ExecuteUbergraph_TBLHud_General(int EntryPoint);
	void NumRowKeyUp__DelegateSignature(int Number);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
