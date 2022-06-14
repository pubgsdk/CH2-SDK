#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TransitionStage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TransitionStage.TransitionStage_C
// 0x00B3 (0x04C3 - 0x0410)
class ATransitionStage_C : public AStandardStage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTimeObjectiveComponent_C*                   TimeObjectiveComponent;                                   // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TScriptInterface<class UStageInterface>            NextStage;                                                // 0x0420(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    On_Transition_Stage_Ended;                                // 0x0430(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    On_Transition_Stage_Started;                              // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class ALevelSequenceActor*                         Defender_Sequence;                                        // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ALevelSequenceActor*                         Attacker_Sequence;                                        // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ALevelSequenceActor*                         Server_Sequence;                                          // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Skip_in_PIE;                                              // 0x0468(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	TMap<class ASpawner*, struct FString>              Spawner_Prefixes;                                         // 0x0470(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               Stage_Ready_To_Start;                                     // 0x04C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Mode_Ready_For_Stage_Start;                               // 0x04C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Stage_Started;                                            // 0x04C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TransitionStage.TransitionStage_C"));
		return ptr;
	}


	void TryFastForwardServerWarmup();
	void InitializeTransitionStage_With_Bindings(const TScriptInterface<class UStageInterface>& NextStage, const struct FTransitionStageSettings& Settings, TMap<class ASpawner*, struct FString> Spawner_Binding_Prefixes, TScriptInterface<class UStageInterface>* Stage);
	TScriptInterface<class UStageInterface> CompleteStage();
	void InitializeTransitionStage(const TScriptInterface<class UStageInterface>& NextStage, const struct FTransitionStageSettings& Settings, TScriptInterface<class UStageInterface>* Stage);
	bool IsStageReadyToComplete();
	void ReceiveBeginPlay();
	void StartStage();
	void OnMatchStateChanged_Event_1(const struct FName& State);
	void Conditional_Start_Stage();
	void ExecuteUbergraph_TransitionStage(int EntryPoint);
	void On_Transition_Stage_Started__DelegateSignature();
	void On_Transition_Stage_Ended__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
