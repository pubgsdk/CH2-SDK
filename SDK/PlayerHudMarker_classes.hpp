#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerHudMarker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PlayerHudMarker.PlayerHudMarker_C
// 0x00A2 (0x0332 - 0x0290)
class UPlayerHudMarker_C : public UHUDMarkerContainerPlayerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            HealedAnimationFade;                                      // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeToHealingAnimation;                                   // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeToDefaultAnimation;                                   // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            HealedAnimation;                                          // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Hovered;                                                  // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UOverlay*                                    ActiveHealingOverlay;                                     // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    Container;                                                // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    DefaultPlayerIconOverlay;                                 // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image;                                                    // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_136;                                                // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      PlayerIcon;                                               // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               PlayerName;                                               // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ATBLCharacter*                               PawnBP;                                                   // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UHudMarkerDisplayComponent*                  HUDMarkerComponent;                                       // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     DefaultRelativePos;                                       // 0x0308(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RenderingScale;                                           // 0x0314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RenderingOpacity;                                         // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HealIconPercentageThreshold;                              // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DoesLocalPlayerHaveHealingItem;                           // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<EPlayerMarkerState>                    CurrentPlayerMarkerState;                                 // 0x0321(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0322(0x0002) MISSED OFFSET
	float                                              HealingAnimationTime;                                     // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                ActiveHealingTimerHandle;                                 // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               MarkerState;                                              // 0x0330(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CachedPlayerNeedsHealing;                                 // 0x0331(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass PlayerHudMarker.PlayerHudMarker_C"));
		return ptr;
	}


	void UpdateCachedPlayerNeedsHealing(bool* CachedValueChanged);
	bool IsLocalPlayerAlive();
	struct FString GetAssignedPlayerName();
	void HandleCombatStateChangedDelay(const struct FName& PreviousState, const struct FName& NewState);
	void SetAllyIconColour();
	void GetLocalPlayersPartyId(struct FString* PartyId);
	void HandleOnPlayerStateReplicated(class APlayerState* PlayerState);
	void HandleTeamChanged(class ATBLTeam* Team);
	void HandleCombatStateChanged(const struct FName& PreviousState, const struct FName& NewState);
	void Update();
	void HandleBroadcastActorUnderCrosshairChanged(bool bActorIsUnderCrosshair);
	void K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component);
	void HandleKilled(const struct FDeathDamageTakenEvent& Event);
	void Construct();
	void PlayHealedCharacter();
	void NewState(TEnumAsByte<EPlayerMarkerState> CurrentPlayerMarkerState);
	void OnInitialized();
	void ActiveHealingAnimationFinished();
	void CustomEvent_1();
	void K2_OnReturnedToPool();
	void OnCombatStateChange(const struct FName& PreviousState, const struct FName& NewState);
	void OnPartyDisband_Event_1();
	void OnPartyMemberJoin_Event_1(const struct FString& UserId, const struct FString& DisplayName);
	void OnPartyLeave_Event_1(bool Result);
	void OnPartyInviteAccept_Event_1(const struct FString& PartyId);
	void OnPartyMemberLeave_Event_1(const struct FString& UserId, const struct FString& DisplayName);
	void OnPartyMemberRemove_Event_1(const struct FString& UserId, const struct FString& DisplayName);
	void OnPartyMemberKick_Event_1(const struct FString& UserId);
	void OnLocalPlayerAbleToHealChanged(bool bAbleToHeal);
	void OnPossessedPawn(class APawn* Pawn);
	void OnNeedsHealingChanged();
	void ExecuteUbergraph_PlayerHudMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
