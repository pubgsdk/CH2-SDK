#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AmbientCorpseManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AmbientCorpseManager.BP_AmbientCorpseManager_C
// 0x00C0 (0x03D0 - 0x0310)
class ABP_AmbientCorpseManager_C : public ATBLActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRandomStream                               Stream;                                                   // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TMap<class ABP_AmbientCorpsePile_C*, float>        AmbientCorpseActors;                                      // 0x0338(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               IsTeamObjective;                                          // 0x0388(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	int                                                MaxCorpses__Epic_;                                        // 0x038C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                QualitySetting;                                           // 0x0390(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TArray<class ABP_AmbientCorpsePile_C*>             CorpseActorList;                                          // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class ABP_AmbientCorpsePile_C*>             ActorsToCleanUp;                                          // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FName                                       LastActivatedGroup;                                       // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FName>                               AllActiveGroups;                                          // 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_RepNotify, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AmbientCorpseManager.BP_AmbientCorpseManager_C"));
		return ptr;
	}


	void CleanupCorpses();
	void OnRep_AllActiveGroups();
	void debug_string(const struct FString& InString);
	void IsAmbientCorpsesEnabled(bool* _);
	void RemoveCorpse(class ABP_AmbientCorpsePile_C* _AmbiantCorpsePile, bool* Success);
	void UpdateCorpse_Actors();
	void UpdateAmbientCorpseActorsMap();
	void ReceiveBeginPlay();
	void OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent);
	void Death(const struct FDeathEvent& DeathEvent);
	void SpawnCorpse();
	void DeactivateGroup(const struct FName& Group_Name_);
	void ActivateGroup(const struct FName& GroupName);
	void ExecuteUbergraph_BP_AmbientCorpseManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
