#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Recovery_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Recovery.Recovery_C
// 0x0008 (0x0188 - 0x0180)
class URecovery_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Recovery.Recovery_C"));
		return ptr;
	}


	void OnAssemble_Recovery();
	void EventEndAnimation();
	void ExecuteUbergraph_Recovery(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
