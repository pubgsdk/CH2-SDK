#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpectatorHudWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SpectatorHudWidget.SpectatorHudWidget_C
// 0x0060 (0x02A8 - 0x0248)
class USpectatorHudWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_456;                                          // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_1;                                        // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USpectatorControlsInfoWidget_C*              SpectatorControlsInfoWidget;                              // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class ATBLPlayerState*>                     Team0PlayerStateArray;                                    // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class ATBLPlayerState*>                     Team1PlayerStateArray;                                    // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class USpectatorPlayerStatusEntry_C*>       team1players;                                             // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	class APlayerState*                                LastFollowPlayerState;                                    // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass SpectatorHudWidget.SpectatorHudWidget_C"));
		return ptr;
	}


	void UpdateFollowingPlayer();
	void CleanupPlayerState(int TeamIndex, TArray<class ATBLPlayerState*>* PlayerStateArray);
	void UpdateTeam(EFaction Faction, class UVerticalBox* VerticleBox, bool isTeam1, TArray<class ATBLPlayerState*>* PlayerStates);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnClientPossessedPawn_Event_1(class APawn* NewPawn);
	void ShowSpectatingStateWidgets();
	void ShowWaitingToSpawnSpectatingWidgets();
	void HideAllWIdgets();
	void OnPossessedPawn_Event_1(class APawn* NewPawn);
	void OnPossessedPawn(class APawn* NewPawn);
	void OnPlayerSelectedSpectatorMode(bool IsPlayerSpectator);
	void ExecuteUbergraph_SpectatorHudWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
