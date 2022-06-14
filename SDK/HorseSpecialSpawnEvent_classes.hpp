#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseSpecialSpawnEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C
// 0x0048 (0x0358 - 0x0310)
class AHorseSpecialSpawnEvent_C : public ATBLActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               AgathaPreSpawnSound;                                      // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    HorseSpecialSpawnStateUpdated;                            // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FTimerHandle                                SpawnWaveReadyToSpawnTimerHandle;                         // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EFaction                                           Faction;                                                  // 0x0340(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	TEnumAsByte<EHorseSpecialSpawnStates>              HorseSpecialSpawnState;                                   // 0x0341(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	class UAkAudioEvent*                               MasonPreSpawnSound;                                       // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               TenosiaPreSpawnSound;                                     // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HorseSpecialSpawnEvent.HorseSpecialSpawnEvent_C"));
		return ptr;
	}


	void OnRep_HorseSpecialSpawnState();
	void IsLocalPlayerFactionRelevant(bool* Return_Value);
	void GetLocalPlayerFaction(EFaction* Faction);
	void ReceiveBeginPlay();
	void PlaySound(class UAkAudioEvent* AKEvent);
	void BroadcastSpawningHasStarted();
	void BroadcastPreSpawning();
	void BroadcastSpawningHasFinished();
	void HorseSpecialSpawnStateUpdated_Event_1(TEnumAsByte<EHorseSpecialSpawnStates> NewState, class AHorseSpecialSpawnEvent_C* SpawnEvent);
	void ExecuteUbergraph_HorseSpecialSpawnEvent(int EntryPoint);
	void HorseSpecialSpawnStateUpdated__DelegateSignature(TEnumAsByte<EHorseSpecialSpawnStates> NewState, class AHorseSpecialSpawnEvent_C* SpawnEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
