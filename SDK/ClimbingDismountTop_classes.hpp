#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ClimbingDismountTop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClimbingDismountTop.ClimbingDismountTop_C
// 0x0008 (0x0190 - 0x0188)
class UClimbingDismountTop_C : public UClimbing_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ClimbingDismountTop.ClimbingDismountTop_C"));
		return ptr;
	}


	void OnAssemble_ClimbingDismountTop();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_ClimbingDismountTop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
