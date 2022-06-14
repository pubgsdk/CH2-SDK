#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Knockdown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Knockdown.Knockdown_C
// 0x0008 (0x0190 - 0x0188)
class UKnockdown_C : public UBaseKnockdown_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Knockdown.Knockdown_C"));
		return ptr;
	}


	void OnAssemble_Knockdown();
	void EventEndAnimation();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_Knockdown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
