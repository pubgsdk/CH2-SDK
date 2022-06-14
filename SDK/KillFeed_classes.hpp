#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KillFeed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass KillFeed.KillFeed_C
// 0x0074 (0x02BC - 0x0248)
class UKillFeed_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKillFeedEntry_C*                            KillFeedEntry_C_1;                                        // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKillFeedEntry_C*                            MockupKillFeedEntry;                                      // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKillFeedEntry_C*                            MockupKillFeedEntry_1;                                    // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKillFeedEntry_C*                            MockupKillFeedEntry_2;                                    // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKillFeedEntry_C*                            MockupKillFeedEntry_3;                                    // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKillFeedEntry_C*                            MockupKillFeedEntry_4;                                    // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKillFeedEntry_C*                            MockupKillFeedEntry_5;                                    // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKillFeedEntry_C*                            MockupKillFeedEntry_6;                                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                            // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               NewVar_1;                                                 // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	TArray<class UKillFeedEntry_C*>                    KillFeedEntries;                                          // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	int                                                MaxEntries;                                               // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                HardCapEntries;                                           // 0x02B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TimeToShowEntries;                                        // 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass KillFeed.KillFeed_C"));
		return ptr;
	}


	void IsFallDeath(const struct FDeathEvent& DeathEvent, bool* IsFallDeath);
	void ShouldDisplayObjectiveMessage(bool* Display);
	void ShouldDisplayDeathEvent(const struct FDeathEvent& DeathEvent, bool* Display);
	void IsSiegeWeapon(class AInventoryItem* Weapon, bool* IsWeapon);
	void GetKillFeedModifiers(const struct FDeathEvent& DeathEvent, TArray<TEnumAsByte<EKillfeedModifiers>>* Modifiers);
	void IsMyDeath(const struct FDeathEvent& DeathEvent, bool* IsMyDeath);
	void IsMyKill(const struct FDeathEvent& DeathEvent, bool* IsMyKill);
	void IsTeamKill(const struct FDeathEvent& DeathEvent, bool* TeamKill);
	void GetKilledFaction(const struct FDeathEvent& DeathEvent, EFaction* Faction);
	void GetKillFeedType(const struct FDeathEvent& DeathEvent, TEnumAsByte<EKillfeedEntryType>* NewParam);
	void IsSuicide(const struct FDeathEvent& DeathEvent, bool* IsSuicide);
	void Construct();
	void GameModeMessageReceived_Event_1(const struct FGameModeMessage& Message);
	void CheckForCleanup();
	void OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent);
	void ExecuteUbergraph_KillFeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
