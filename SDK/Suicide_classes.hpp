#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Suicide_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Suicide.Suicide_C
// 0x0030 (0x01B0 - 0x0180)
class USuicide_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TSoftClassPtr<class UClass>                        NewVar_1;                                                 // 0x0188(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Suicide.Suicide_C"));
		return ptr;
	}


	void OnAssemble_Suicide();
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventEndAnimation();
	void EventRagdolled();
	void CustomEvent_1();
	void EventDamage(const struct FDamageTakenEvent& DamageEvent);
	void ExecuteUbergraph_Suicide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
