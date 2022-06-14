#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Stagger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Stagger.Stagger_C
// 0x000B (0x0193 - 0x0188)
class UStagger_C : public UBaseCrowdControlState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               ISEarlyout;                                               // 0x0190(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowDashJab;                                             // 0x0191(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AllowParries;                                             // 0x0192(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Stagger.Stagger_C"));
		return ptr;
	}


	void OnAssemble_Stagger();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EarlyOut();
	void DashJabOut();
	void AllowParry();
	void TryStartAttack();
	void ExecuteUbergraph_Stagger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
