#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUDWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDWidget.HUDWidget_C
// 0x0189 (0x0539 - 0x03B0)
class UHUDWidget_C : public UTBLScreenWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Testing_In_anim;                                          // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UOverlay*                                    ActorInCrosshairOverlay;                                  // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UActorInCrosshairText_C*                     ActorInCrosshairText_C_16;                                // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                AlwaysvisibleLayer;                                       // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                AlwaysvisibleLayer_2;                                     // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UAutoInvalidationBox*                        AutoInvalidationBox_8;                                    // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCrosshair_C*                                Crosshair_1;                                              // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGameMode_FFA_C*                             FFAProgressBar;                                           // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    HideinFULLcinematicsmodelayer;                            // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    HideinPARTIALcinematicsmodelayer;                         // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHUDAlwaysVisibleContainer_C*                HUDAlwaysVisibleContainer;                                // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHUDMarkerContainer_C*                       HUDMarkerContainer;                                       // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInputHintsWidget_C*                         InputHintsWidget;                                         // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_2;                                        // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInventoryWidget_C*                          InventoryWidget_C_1;                                      // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    InventoryWidgetOverlay;                                   // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ULookAtContainer_C*                          LookAtContainer;                                          // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UStage_TO_C*                                 ObjectiveProgressBar;                                     // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             PinnedComponentWidgetSwitcher;                            // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPinnedInteractableWidget_C*                 PinnedInteractableWidget;                                 // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPinnedStatsWidget_C*                        PinnedStatsWidget;                                        // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPlayerScoreList*                            PlayerScoreList_1;                                        // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UAutoInvalidationBox*                        RadialInventoryInvalidationBox;                           // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URadialInventoryWidget_C*                    RadialInventoryWidget;                                    // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URadialVOMenu_C*                             RadialVOMenu;                                             // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USiegeEngineHUD_C*                           SiegeEngineHUD;                                           // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UStatusbarContainer_C*                       StatusbarContainer_207;                                   // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTapOutWidget_C*                             TapOutWidget;                                             // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UStage_TDM_C*                                TDMProgressBar;                                           // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                Visible_only_when_pawn_alive_Layer;                       // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    VisibleonlywhenpawnaliveLayer_Crosshair;                  // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                Visibleonlywhenpawndeadlayer;                             // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                VisibleWhenDowned;                                        // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                VisibleWhenSpectating;                                    // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UAutoInvalidationBox*                        VORadialInvalidationBox;                                  // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHUDMarkerContainer_C*                       ZoneMarkerContainer_74;                                   // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              LastPawnMaxHealth;                                        // 0x04D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	struct FTimerHandle                                VOHideTimerHandle;                                        // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ECinematicMenuMode>                    Cinematics_mode;                                          // 0x04E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    Cinematics_Mode_Changed;                                  // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TEnumAsByte<ECinematicMenuMode>                    Previous_mode;                                            // 0x0500(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	class UUserWidget*                                 GameModeWidget;                                           // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PostVoMenuWindow;                                         // 0x0510(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	TArray<class UTBLScreenWidget*>                    RadialMenus;                                              // 0x0518(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               StatsComponentFocused;                                    // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	float                                              FocusedHealthFadeTime;                                    // 0x052C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                DownedVisibilityTimerHandle;                              // 0x0530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsFocusDisabled;                                          // 0x0538(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass HUDWidget.HUDWidget_C"));
		return ptr;
	}


	void RequestPoolPrepopulate();
	class UWidget* OnGenerateLevelUpRow_1(const struct FLevelUpResult& LevelUpEvent);
	class UWidget* OnGenerateRow_1(const struct FScoreEventStruct& ScoreEvent);
	bool BP_OnBlockKeyPress(EWeaponAbilitySlotKey WeaponAbilitySlotKey);
	void IsRadialInventoryOpen(bool* IsOpen);
	void IsVOPickerOpen(bool* IsVisible);
	void EnableFocusMode(bool Enable);
	void GetCurrentTeam(class ATBLTeam** Team);
	void UpdateLayersVisibility(bool IsPawnValid, bool IsSpectatorPawn, bool IsPlayerSelectedSpectatorMode, bool IsTeamValid);
	void CanPlayEmoteMenu(bool* Return_Value);
	void OnLoaded_B028355C46F5520A2991C6947E015364(class UClass* /*UObject*/ Loaded);
	void OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent);
	void On_My_Pawn_Died();
	void On_Possessed_New_Pawn(class APawn* Pawn);
	void OnPossessedPawn_Event_2(class APawn* NewPawn);
	void ShowVOTacticalMenu(const struct FKey& Key);
	void ShowVOPersonalMenu(const struct FKey& Key);
	void HideVOMenu();
	void OnMount_Event_1(class AActor* AttachParent, class USiegeMountPoint* MountPoint);
	void OnDismount_Event_1(class AActor* AttachParent, EDismountType DismountType);
	void InitializeTapOut(class APawn* Pawn);
	void InitializePinnedInteractable(class APawn* Pawn);
	void OnInteractableFocused(class UInteractableComponent* InteractableComponent);
	void OnInteractableLostFocus();
	void Set_cinematics_mode(TEnumAsByte<ECinematicMenuMode> New_Mode);
	void Construct();
	void Update_full_layer_opacity(float Value);
	void Update_parial_layer_opacity(float Value);
	void ShowVOEmoteMenu();
	void OnClientPossessedPawn_Event_1(class APawn* NewPawn);
	void OnTeamChanged(class ATBLTeam* NewTeam);
	void OnTeamChanged_Event_1(class ATBLTeam* NewTeam);
	void BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature(const struct FName& Text, const struct FString& ActionName, bool Enable, const struct FText& HintText);
	void InitializeMountedWidgets();
	void OnStatsComponentFocused_Event_1(class UStatsComponent* StatsComponent);
	void OnStatsComponentLostFocused_Event_1();
	void BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature(bool IsActive);
	void HideNameplate(bool _);
	void InitializeGameModeWidget();
	void ShowRadialInventory();
	void HideRadialInventory();
	void InitializeProgressUI();
	void StatsComponentHitFade();
	void OnDamageCaused_Event_1(const struct FDamageTakenEvent& DamageEvent);
	void ReshowNamePlate();
	void OnJoinWave(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess);
	void OnUseableActorInteractableFocused_Event_1(class UInteractableComponent* InteractableComponent);
	void OnUseableActorInteractableLostFocused_Event_1(class UInteractableComponent* InteractableComponent);
	void OnInitialized();
	void PostDeathHidden();
	void AutoHideVOMenuTimerStarted();
	void PostCombatStateHideDowned();
	void DisableFocus();
	void EnableFocus(class UInteractableComponent* InteractableComponent);
	void OnApplyCondition_Event_1(class AActor* Actor, EConditionType Condition);
	void OnRemoveCondition_Event_1(class AActor* Actor, EConditionType Condition, class AActor* ConditionRemover);
	void OnCombatStateChanged_Event_1(class AActor* Actor, const struct FName& PreviousState, const struct FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState);
	void ExecuteUbergraph_HUDWidget(int EntryPoint);
	void Cinematics_Mode_Changed__DelegateSignature(TEnumAsByte<ECinematicMenuMode> New_Mode, TEnumAsByte<ECinematicMenuMode> Previous_mode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
