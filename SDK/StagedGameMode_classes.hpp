#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StagedGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StagedGameMode.StagedGameMode_C
// 0x00B0 (0x1230 - 0x1180)
class AStagedGameMode_C : public ATBLGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UGameModeMessageComponent_C*                 GameModeMessageComponent;                                 // 0x1188(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x1190(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TScriptInterface<class UStageInterface>            Current_Stage;                                            // 0x1198(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    Started_New_Stage;                                        // 0x11A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TScriptInterface<class UStageInterface>            Previous_Stage;                                           // 0x11B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	class ASpawnWave*                                  Agatha_initial_wave;                                      // 0x11C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ASpawnWave*                                  Mason_initial_wave;                                       // 0x11D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Skip_current_stage_;                                      // 0x11D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x11D9(0x0003) MISSED OFFSET
	float                                              FirstStageDelayTime;                                      // 0x11DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class AScoredStage_C*, float>                 StagePlaytimes;                                           // 0x11E0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass StagedGameMode.StagedGameMode_C"));
		return ptr;
	}


	bool IsAutoBalanceBlocked();
	class UObject* K2_GetCurrentStage();
	void Get_First_Stage(TScriptInterface<class UStageInterface>* First_stage);
	void Get_First_Stage_With_Warmup(TScriptInterface<class UStageInterface>* First_stage);
	void ReceiveTick(float DeltaSeconds);
	void K2_HandleMatchHasStarted();
	void K2_OnSetMatchState(const struct FName& NewState);
	void K2_HandleSkipStage();
	void K2_HandleMatchIsWaitingToStart();
	void ExecuteUbergraph_StagedGameMode(int EntryPoint);
	void Started_New_Stage__DelegateSignature(const TScriptInterface<class UStageInterface>& Stage, const TScriptInterface<class UStageInterface>& Previous_Stage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
