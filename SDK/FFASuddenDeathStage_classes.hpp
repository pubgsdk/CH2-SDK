#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FFASuddenDeathStage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FFASuddenDeathStage.FFASuddenDeathStage_C
// 0x0010 (0x0420 - 0x0410)
class AFFASuddenDeathStage_C : public AStandardStage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ATBLPlayerState*                             PlayerVictor;                                             // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FFASuddenDeathStage.FFASuddenDeathStage_C"));
		return ptr;
	}


	void GetVictor(class ATBLPlayerState** Player, bool* IsTie);
	bool IsStageReadyToComplete();
	TScriptInterface<class UStageInterface> CompleteStage();
	void StartStage();
	void OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent);
	void ExecuteUbergraph_FFASuddenDeathStage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
