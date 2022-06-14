#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StandardStage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandardStage.StandardStage_C
// 0x0100 (0x0410 - 0x0310)
class AStandardStage_C : public ATBLActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStageCinematicsComponent_C*                 StageCinematicsComponent;                                 // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACameraActor*                                Overview_Screen_Camera;                                   // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    On_Stage_Started;                                         // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Stage_Ended;                                           // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TSoftObjectPtr<class AActor>                       AgathaStageCommander;                                     // 0x0350(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                       MasonStageCommander;                                      // 0x0378(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                       TenosiaStageCommander;                                    // 0x03A0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	int                                                StageIdNum;                                               // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    On_Cosmetic_Stage_Started;                                // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Cosmetic_Stage_Ended;                                  // 0x03E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FAKAudioStartStopStruct                     AgathaStageSounds;                                        // 0x03F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FAKAudioStartStopStruct                     MasonStageSounds;                                         // 0x0400(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass StandardStage.StandardStage_C"));
		return ptr;
	}


	float GetTimeRemaining();
	float GetTimeRemainingPercent();
	int GetStageIdNum();
	class AActor* GetStageCommander(EFaction Faction);
	TScriptInterface<class UStageInterface> CompleteStage();
	bool IsStageReadyToComplete();
	void StartStage();
	void BroadcastStageEnded();
	void BroadcastStageStarted();
	void ExecuteUbergraph_StandardStage(int EntryPoint);
	void On_Cosmetic_Stage_Ended__DelegateSignature();
	void On_Cosmetic_Stage_Started__DelegateSignature();
	void On_Stage_Ended__DelegateSignature(class AStandardStage_C* Stage);
	void On_Stage_Started__DelegateSignature(class AStandardStage_C* Stage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
