#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FFATimeoutStage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FFATimeoutStage.FFATimeoutStage_C
// 0x0040 (0x0450 - 0x0410)
class AFFATimeoutStage_C : public AStandardStage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTimeObjectiveComponent_C*                   TimeObjectiveComponent;                                   // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    SuddenDeath;                                              // 0x0420(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               IsSuddenDeath;                                            // 0x0430(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                MaxScore;                                                 // 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsMaxScoreReplicated;                                     // 0x0438(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    MaxScoreUpdated;                                          // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FFATimeoutStage.FFATimeoutStage_C"));
		return ptr;
	}


	void GetMaxScore(bool* ScoreNotReplicated, int* Score);
	void SetMaxScore(int NewMaxScore);
	void OnRep_MaxScore();
	void OnRep_IsSuddenDeath();
	void GetVictor(class ATBLPlayerState** Player, bool* IsTie);
	bool IsStageReadyToComplete();
	TScriptInterface<class UStageInterface> CompleteStage();
	void StartStage();
	void Duration_Exceeded();
	void ExecuteUbergraph_FFATimeoutStage(int EntryPoint);
	void MaxScoreUpdated__DelegateSignature();
	void SuddenDeath__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
