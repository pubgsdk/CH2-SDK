#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Loadout_Screen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Loadout_Screen.Loadout_Screen_C
// 0x0258 (0x0608 - 0x03B0)
class ULoadout_Screen_C : public UTBLScreenWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            FadeStat;                                                 // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBotBlackActionBar_C*                        BotBlackActionBar_112;                                    // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      CancelShuffleButton;                                      // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      CancelShuffleLockButton;                                  // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               ChangedWarningText;                                       // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              ClassSelectBox;                                           // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              ClassSelectHorizontalBox;                                 // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    ClassSelectLockedOverlay;                                 // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      CloseButton;                                              // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    Content;                                                  // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                CustomLoadout;                                            // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGamepadSelectButton_C*                      GamepadSelectButton;                                      // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_125;                                                // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               LevelText;                                                // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ULoadoutClassSelectionWidget_C*              LoadoutClassSelectionWidget;                              // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ULoadoutClassSelectionWidget_C*              LoadoutClassSelectionWidget_C_2;                          // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ULoadoutClassSelectionWidget_C*              LoadoutClassSelectionWidget_C_3;                          // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ULoadoutClassSelectionWidget_C*              LoadoutClassSelectionWidget_C_4;                          // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ULoadoutSelectionWidget_C*                   LoadoutSelectionWidget;                                   // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ULoadoutSubclassInfo_C*                      LoadoutSubclassInfo;                                      // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      LockedIcon;                                               // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      LockedIcon_2;                                             // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      LockedIcon_3;                                             // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               LockedTextBlock;                                          // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               LockedTextBlock_2;                                        // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               LockedTextBlock_3;                                        // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                LockedVerticalBox;                                        // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URadiobutton_C*                              RadioButton_232;                                          // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URadiobutton_C*                              RadioButton_376;                                          // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      RandomButton;                                             // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UResumeButton_C*                             ResumeButton;                                             // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      ShuffleButton;                                            // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                ShuffleLocked;                                            // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      TeamColorGlow;                                            // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      TeamIcon;                                                 // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UNavigationBotButton_C*                      TeamselectButton;                                         // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Class_Selected;                                           // 0x04D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UClass* /*ATBLCharacter*/                    CurrentSubclassSelected;                                  // 0x04E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UClass* /*ATBLCharacter*/>            PawnClasses;                                              // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FLoadout                                    SavedLoadout;                                             // 0x0500(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UClass* /*AInventoryItem*/                   CurrentWeapon;                                            // 0x0538(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsAlive;                                                  // 0x0540(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsLoadoutDifferent;                                       // 0x0541(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0542(0x0006) MISSED OFFSET
	class UClass* /*ATBLCharacter*/                    CurrentSpawnedSubclass;                                   // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ULoadoutClassButton_C*>               Class_Buttons;                                            // 0x0550(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Loadout_confirmed;                                        // 0x0560(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	ESlateVisibility                                   SpecialSpawnWaveVisibility;                               // 0x0570(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	class ATBLPlayerState*                             PlayerState;                                              // 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAchievementMenuEntry_C*                     LastSelectedAchievement;                                  // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsLoadoutSelectOpen;                                      // 0x0588(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	TSet<class UClass* /*ATBLCharacter*/>              ValidClassTypes;                                          // 0x0590(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               InitializedClassSelectBox;                                // 0x05E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05E1(0x0003) MISSED OFFSET
	int                                                CurrentGamepadIndex;                                      // 0x05E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bBinded;                                                  // 0x05E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x05E9(0x0007) MISSED OFFSET
	class ULoadoutClassSelectionWidget_C*              CurrentLoadoutClassSelection;                             // 0x05F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ULoadoutSubclassButton_C*>            LoadoutSubclassButtons;                                   // 0x05F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass Loadout_Screen.Loadout_Screen_C"));
		return ptr;
	}


	class UWidget* K2_GetFocusWidget();
	void TryResolveShouldHaveShield(class UClass* /*AInventoryItem*/ Item);
	void CanWeaponUseShield(class UClass* /*AInventoryItem*/ Weapon, bool* CanUseShield);
	void UpdateContentVisibility(ESlateVisibility InVisibility);
	void GetLoadoutSubclassButton(class UClass* /*ATBLCharacter*/ Subclass, class ULoadoutSubclassButton_C** SubclassButton);
	void SelectNextSubclass(bool bIsNext);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ConstructLoadoutClassButtons();
	TArray<class UClass* /*ATBLCharacter*/> GetSpawnableClasses();
	void GetCurrentWeapon(class UClass* /*AInventoryItem*/ CurrentLoadoutItemClass, class ATBLPlayerController* Controller, class UClass* /*ULoadoutSelection*/ Loadout, TArray<class UClass* /*UWeaponGroup*/>* WeaponGroup, class UClass* /*AInventoryItem*/* CurrentWeaponClass);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void FindCurrentSubclass(class UClass* /*ATBLCharacter*/* Subclass, bool* SaveLoadout);
	void GetWeaponSelection(class UClass* /*ATBLCharacter*/ CharacterClass, int WeaponSlot, TArray<class UClass* /*UWeaponGroup*/>* WeaponList);
	void GetDefaultWeapon(TArray<class UClass* /*UWeaponGroup*/>* WeaponGroupArray, class UClass* /*AInventoryItem*/* Weapon);
	void GetCurrentLoadoutForClass(class UClass* /*ATBLCharacter*/ CurrentClass, struct FLoadout* Loadout);
	void SaveLoadout(class UClass* /*ATBLCharacter*/ Class);
	void PlayNewLoadoutAnimation();
	void NextSpawnWaveReplicated_Event_1(class ASpawnWave* SpawnWave);
	void OnOpenedScreen();
	void BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void SetAllowedClasses(class ASpawnWave* SpawnWave);
	void OnInitialized();
	void NewBaseClassSelected(class UClass* /*ATBLCharacter*/ Class);
	void InitSpawnableClasses();
	void InitLoadout();
	void InitClassSelectBar();
	void InitUI();
	void InitLoadoutScreen();
	void CloseAndConfirmLoadout();
	void Spectate();
	void OpenTeamSelect();
	void PostYouWillRespawnAsNotification();
	void OnInputChanged(EGamepadInputMode GamepadInputMode);
	void NewSubclassSelected(class UClass* /*ATBLCharacter*/ Subclass);
	void OnStateChanged(TEnumAsByte<EOverviewScreenState> NewState, TEnumAsByte<EOverviewScreenState> PreviousState);
	void Reset();
	void BindWidgets();
	void SubclassSelected(class UClass* /*ATBLCharacter*/ Subclass, class ULoadoutClassSelectionWidget_C* LoadoutClassSelectionWidget, class ULoadoutSubclassButton_C* LoadoutClassButton, bool bIsLocked);
	void ItemClicked(EInventoryItemSlot Slot, class UClass* /*AInventoryItem*/ Item, class ULoadoutButton_C* LoadoutButton);
	void OnItemClicked(EInventoryItemSlot Slot, class UClass* /*AInventoryItem*/ InventoryItem);
	void PostShuffleModeMessage();
	void RandomClass();
	void ToggleShuffle();
	void BackToInGameMenu();
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void LockedSubclassSelected(class UClass* /*ATBLCharacter*/ Subclass, bool bLevelLocked);
	void BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void UpdateShuffleButtons(bool bShuffle);
	void ExecuteUbergraph_Loadout_Screen(int EntryPoint);
	void Loadout_confirmed__DelegateSignature();
	void Class_Selected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
