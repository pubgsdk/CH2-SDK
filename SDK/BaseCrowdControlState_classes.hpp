#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseCrowdControlState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseCrowdControlState.BaseCrowdControlState_C
// 0x0008 (0x0188 - 0x0180)
class UBaseCrowdControlState_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseCrowdControlState.BaseCrowdControlState_C"));
		return ptr;
	}


	void OnAssemble_BaseCrowdControlState();
	void EventEndAnimation();
	void ExecuteUbergraph_BaseCrowdControlState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
