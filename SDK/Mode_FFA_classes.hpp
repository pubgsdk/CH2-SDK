#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Mode_FFA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mode_FFA.Mode_FFA_C
// 0x0048 (0x1278 - 0x1230)
class AMode_FFA_C : public AStagedGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                MaxScore;                                                 // 0x1238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x123C(0x0004) MISSED OFFSET
	class ATBLPlayerState*                             KillLeader;                                               // 0x1240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    KillLeaderUpdated;                                        // 0x1248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    VictoryAwarded;                                           // 0x1258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	int                                                CurrentHighScore;                                         // 0x1268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x126C(0x0004) MISSED OFFSET
	class AFFATimeoutStage_C*                          FFAStage;                                                 // 0x1270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Mode_FFA.Mode_FFA_C"));
		return ptr;
	}


	float GetScorePercent();
	void ConfigureFFATimeoutStage(class AFFATimeoutStage_C* Stage);
	void Get_First_Stage(TScriptInterface<class UStageInterface>* First_stage);
	void ReceiveBeginPlay();
	void OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent);
	void K2_HandleMatchHasStarted();
	void UpdateDynamicMusic();
	void ExecuteUbergraph_Mode_FFA(int EntryPoint);
	void VictoryAwarded__DelegateSignature(class ATBLPlayerState* PlayerState);
	void KillLeaderUpdated__DelegateSignature(class ATBLPlayerState* PlayerState, int Kills, int MaxScore);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
