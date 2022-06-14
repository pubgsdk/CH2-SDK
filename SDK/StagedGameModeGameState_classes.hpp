#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StagedGameModeGameState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StagedGameModeGameState.StagedGameModeGameState_C
// 0x0080 (0x0A08 - 0x0988)
class AStagedGameModeGameState_C : public ATBLGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0988(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0990(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TScriptInterface<class UStageInterface>            Current_Stage;                                            // 0x0998(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    Current_Stage_Changed;                                    // 0x09A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class AActor*                                      Last_Stage;                                               // 0x09B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Stage_Index;                                              // 0x09C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    Stage_Index_Changed;                                      // 0x09C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class AActor*                                      Stage_Actor;                                              // 0x09D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                        Gamemode_Widget;                                          // 0x09E0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass StagedGameModeGameState.StagedGameModeGameState_C"));
		return ptr;
	}


	void GetStageTimeObjectiveComponent(class UObject* Stage, class UTimeObjectiveComponent_C** TimeObjectiveComponent, bool* IsValid);
	void GetWinningFactionFromPreviousStage(EFaction* PreviousWinningFaction);
	TScriptInterface<class UStageInterface> GetCurrentStage();
	void OnRep_Stage_Actor();
	void OnRep_Stage_Index();
	void Set_New_Stage(const TScriptInterface<class UStageInterface>& Current_Stage);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_StagedGameModeGameState(int EntryPoint);
	void Stage_Index_Changed__DelegateSignature(int New_Index);
	void Current_Stage_Changed__DelegateSignature(class UObject* Previous_Stage, class UObject* New_Stage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
