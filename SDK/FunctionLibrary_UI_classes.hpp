#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FunctionLibrary_UI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FunctionLibrary_UI.FunctionLibrary_UI_C
// 0x0000 (0x0028 - 0x0028)
class UFunctionLibrary_UI_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FunctionLibrary_UI.FunctionLibrary_UI_C"));
		return ptr;
	}


	static void GetTextureFromSlateBrush(const struct FSlateBrush& Brush, class UObject* __WorldContext, class UTexture2D** Texture);
	static void GetStoreSellerLabel(const struct FString& ItemId, class UObject* __WorldContext, struct FText* SellerLabelText);
	static void GetQuestDifficultyText(EQuestDifficulty DifficultyLevel, class UObject* __WorldContext, struct FText* Text);
	static void GetQuestDifficultyColor(EQuestDifficulty DifficultyLevel, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Team_Order(EFaction TeamA, EFaction TeamB, class UObject* __WorldContext, TArray<EFaction>* SortedTeams);
	static void GetStoreItemImage(const struct FString& ItemId, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Image);
	static void GetTeamIcon(EFaction Faction, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Icon);
	static void IsProvidedPlatformPC(EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result);
	static void IsProvidedPlatformXBox(EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result);
	static void IsProvidedPlatformPlayStation(EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result);
	static void AreProvidedPlatformsSimilar(EHardwarePlatform OwningPlayerHardwarePlatform, EHardwarePlatform TargetPlayerHardwarePlatform, class UObject* __WorldContext, bool* Similar);
	static void ScrollWithVelocity(class UScrollBox* ScrollBox, float Velocity, float DeltaTime, class UObject* __WorldContext);
	static void ScrollBy(class UScrollBox* ScrollBox, float ScrollOffsetDelta, class UObject* __WorldContext);
	static void GetCustomizationHeadCategories(class UObject* __WorldContext, TArray<struct FName>* Categories, TArray<struct FText>* CategoryTexts);
	static void IsProvidedPlatformConsole(EHardwarePlatform Platform, class UObject* __WorldContext, bool* _);
	static void UpdatePlayerPlatformIcon(EHardwarePlatform OwningPlayerHardwarePlatform, EHardwarePlatform TargetPlayerHardwarePlatform, class UWidget* PlatformIconContainer, class UImage* PlatformIconImage, class UObject* __WorldContext);
	static bool IsInParty(class ATBLPlayerState* Player1, class ATBLPlayerState* Player2, class UObject* __WorldContext);
	static void GetAllyColours(bool IsInParty, bool IsFriend, class UObject* __WorldContext, struct FSlateColor* SlateColor);
	static void Get_Group_Text_from_Group_Id(const struct FName& Group_Id, class UObject* __WorldContext, struct FText* Weapon_Group_Text);
	static void GetSelectedbuttonColor(class UObject* __WorldContext, struct FLinearColor* NewParam);
	static void IsPlatformConsole(class UObject* __WorldContext, bool* _);
	static void IsPlatformPC(class UObject* __WorldContext, bool* _);
	static void OnlineStatToText(EOnlineStat Stat, class UObject* __WorldContext, struct FText* Text);
	static void CreateRankUpMessageFromLevelUp(const struct FLevelUpResult& LevelUpResult, class UObject* __WorldContext, struct FRankUpMessage* RankUpMessage);
	static void GetRankUpClassIconFromOnlineStat(EOnlineStat Selection, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* ClassIcon);
	static void GetRankUpItemFromOnlineStat(EOnlineStat Selection, class UObject* __WorldContext, TSoftClassPtr<class UClass>* IventoryItem);
	static void SetGamepadButtonText(class URadiobutton_C* Button, const struct FText& Text, class UObject* __WorldContext);
	static void ItemRarityToColor(const struct FPrimaryAssetId& PrimaryAsset, ETBLRarity Rarity, class UObject* __WorldContext, struct FSlateColor* SlateColor);
	static void GetPlayersName(class AController* Controller, class UObject* __WorldContext, struct FText* Name);
	static void GetRankUpMessageTypeFromOnlineStat(EOnlineStat Selection, class UObject* __WorldContext, TEnumAsByte<ERankUpMessageType>* RankUpMessageType);
	static void ItemRarityToText(const struct FPrimaryAssetId& PrimaryAsset, ETBLRarity Rarity, class UObject* __WorldContext, struct FText* _);
	static void PlayUxSound(class UAkAudioEvent* SoundEvent, class UObject* __WorldContext);
	static void PlayDataTableSound(const struct FDataTableRowHandle& RowHandle, class UObject* __WorldContext);
	static void ShouldDisableWidget(class UObject* __WorldContext);
	static void ConvertTimeToText(float Seconds, class UObject* __WorldContext, struct FText* SecondsText);
	static struct FText GetLocalizedTextFromClass(TEnumAsByte<EAudioClassType> Class, class UObject* __WorldContext);
	static struct FText GetLocalizedTextFromFaction(EFaction Faction, class UObject* __WorldContext);
	static struct FString LimitTextCharacters(const struct FString& String, int Limit, class UObject* __WorldContext);
	static struct FLinearColor GetTeamColorText(TEnumAsByte<EObjMarkerTeam> Index, class UObject* __WorldContext);
	static struct FLinearColor GetTeamColorLight(TEnumAsByte<EObjMarkerTeam> Index, class UObject* __WorldContext);
	static void GetAchievementTitle(const struct FAchievementProgress& Achievement, class ATBLPlayerState* PlayerState, class UObject* __WorldContext, struct FText* Result);
	static void GetAchievementDescription(const struct FAchievementProgress& Achievement, class ATBLPlayerState* PlayerState, class UObject* __WorldContext, struct FText* Result);
	static void ClearAllInputHints(class UObject* __WorldContext);
	static void AddInputHint(const struct FString& Keybinding, const struct FName& Tag, const struct FText& HintText, bool Enable, bool AddToTop, class UObject* __WorldContext);
	static struct FLinearColor GetTeamColor(TEnumAsByte<EObjMarkerTeam> Index, class UObject* __WorldContext);
	static void Has_Child_Of_Type(class UPanelWidget* Parent, class UClass* /*UUserWidget*/ Class, class UObject* __WorldContext, bool* Result);
	static void Request_Account_Details(class UObject* __WorldContext);
	static void PlayUxSound__Generic_(const struct FName& EventName, class UObject* __WorldContext);
	static void GetAttackingDefendingFaction(class UObject* __WorldContext, EFaction* AttackingFaction, EFaction* DefendingFaction);
	static void Get_Icon_from_Wave(class ASpawnWave* Wave, class UObject* __WorldContext, struct FSlateBrush* Brush);
	static void GetObjectiveStyleEnum(const struct FGameplayTag& NewParam, class UObject* __WorldContext, TEnumAsByte<EObjectiveMessageStyleType>* ObjectiveMessageStyleType);
	static void AnimationExitTimeFromArray(float Value, class UObject* __WorldContext, TArray<class UImage*>* Images, TArray<class UAnimatingButton*>* AnimatingButton);
	static void AnimationExitTime(class UImage* Target, float Value, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
