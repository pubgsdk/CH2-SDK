#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ScoredStage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ScoredStage.ScoredStage_C
// 0x00BC (0x04CC - 0x0410)
class AScoredStage_C : public AStandardStage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHudMarkerDisplayComponent*                  HudMarkerDisplay;                                         // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTimeObjectiveComponent_C*                   TimeObjectiveComponent;                                   // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UActorInfoDisplayComponent*                  ActorInfoDisplay;                                         // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UObjectiveStatusDisplayComponent*            Objective_Bar_Display_Component;                          // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TScriptInterface<class UStageInterface>            Next_Stage;                                               // 0x0438(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TScriptInterface<class UStageInterface>            Timeout_Stage;                                            // 0x0448(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	int                                                Score;                                                    // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Max_Score;                                                // 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Initial_Score;                                            // 0x0460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    On_Started;                                               // 0x0468(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Ended;                                                 // 0x0478(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Timed_Out;                                             // 0x0488(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Completed_by_Score;                                    // 0x0498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Score_Changed;                                         // 0x04A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              StageActiveDuration;                                      // 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StageStartTime;                                           // 0x04BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 PlayerCountScoreScaling;                                  // 0x04C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	int                                                DefaultMaxScore;                                          // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ScoredStage.ScoredStage_C"));
		return ptr;
	}


	void Create_debug_menu_widget(class UUserWidget** Debug_menu_widget);
	void GetNumOfPlayers(int* Players);
	void RecalculateMaxScore(int Max_Score);
	float GetTimeRemainingPercent();
	float GetTimeRemaining();
	void SetScore(int NewScore);
	void OnRep_Max_Score();
	void OnRep_Score();
	void Initialize_ScoredStage(const TScriptInterface<class UStageInterface>& Next_Stage, const TScriptInterface<class UStageInterface>& Timeout_Stage, const struct FScoredStageProperties& Settings, const struct FStandardStageCinematicProperties& cinematics, TScriptInterface<class UStageInterface>* Stage);
	void Initialize_ScoredStage_No_Cinematics(const TScriptInterface<class UStageInterface>& Next_Stage, const TScriptInterface<class UStageInterface>& Timeout_Stage, const struct FScoredStageProperties& Settings, TScriptInterface<class UStageInterface>* Stage);
	TScriptInterface<class UStageInterface> CompleteStage();
	bool IsStageReadyToComplete();
	bool Is_MaxScore_exceeded();
	void Add_Score(int Delta);
	void Initialize_ScoredStage_No_Settings(const TScriptInterface<class UStageInterface>& Next_Stage, const TScriptInterface<class UStageInterface>& Timeout_Stage, TScriptInterface<class UStageInterface>* Stage);
	void StartStage();
	void Set_HUD_Elements_Visible(bool Visible);
	void On_Score_Changed_Event_2(int CurrentScore, int MaxScore);
	void On_Ended_Event(class AScoredStage_C* Stage);
	void AddScore(int Amount);
	void ExecuteUbergraph_ScoredStage(int EntryPoint);
	void On_Score_Changed__DelegateSignature(int CurrentScore, int MaxScore);
	void On_Completed_by_Score__DelegateSignature();
	void On_Timed_Out__DelegateSignature();
	void On_Ended__DelegateSignature(class AScoredStage_C* Stage);
	void On_Started__DelegateSignature(class AScoredStage_C* Stage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
