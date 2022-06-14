#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CombatZoneAuthority_Inverted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CombatZoneAuthority_Inverted.CombatZoneAuthority_Inverted_C
// 0x0060 (0x0590 - 0x0530)
class ACombatZoneAuthority_Inverted_C : public AOutOfCombatZoneAuthority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class ATBLCharacter*, struct FTimerHandle>    ForgivenessMap;                                           // 0x0540(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CombatZoneAuthority_Inverted.CombatZoneAuthority_Inverted_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnActionTriggered(class ATBLCharacter* Character);
	void OnBeginOverlap(class ATBLCharacter* Character);
	void OnEndOverlap(class ATBLCharacter* Character);
	void DeferredAddCondition(class ATBLCharacter* Character);
	void OnForgivenessTimerElapsed(class ATBLCharacter* Character);
	void ExecuteUbergraph_CombatZoneAuthority_Inverted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
