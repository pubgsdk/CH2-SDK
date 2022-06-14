#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TournamentCrowd_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TournamentCrowd.TournamentCrowd_C
// 0x0028 (0x0338 - 0x0310)
class ATournamentCrowd_C : public ATBLActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAkComponent*                                Ak;                                                       // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                CrowdExcitement;                                          // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxCrowdExcitement;                                       // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBLPlayerState*                             LocalPlayerState;                                         // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TournamentCrowd.TournamentCrowd_C"));
		return ptr;
	}


	void IsNotTeamKill(class ATBLPlayerState* Killed, bool* Return_Value);
	void PlaySound(class UAkAudioEvent* Sound);
	void UpdateCrowdExcitementRTPC();
	void AddCrowdExcitement(int Delta);
	void ReceiveBeginPlay();
	void CustomEvent_1();
	void OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent);
	void ExecuteUbergraph_TournamentCrowd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
