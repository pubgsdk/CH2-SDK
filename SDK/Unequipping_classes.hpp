#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Unequipping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Unequipping.Unequipping_C
// 0x0008 (0x0188 - 0x0180)
class UUnequipping_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Unequipping.Unequipping_C"));
		return ptr;
	}


	void OnAssemble_Unequipping();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventEndAnimation();
	void Timeout();
	void ExecuteUbergraph_Unequipping(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
