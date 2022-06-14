#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Slowdown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Slowdown.Slowdown_C
// 0x0008 (0x0248 - 0x0240)
class USlowdown_C : public UBaseMovementState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Slowdown.Slowdown_C"));
		return ptr;
	}


	void OnAssemble_Slowdown();
	void UpdateMovement();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void ExecuteUbergraph_Slowdown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
