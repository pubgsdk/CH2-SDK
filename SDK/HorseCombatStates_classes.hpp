#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseCombatStates_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HorseCombatStates.HorseCombatStates_C
// 0x0008 (0x0070 - 0x0068)
class UHorseCombatStates_C : public UCombatStateSet
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HorseCombatStates.HorseCombatStates_C"));
		return ptr;
	}


	void OnAssemble_HorseCombatStates();
	void ExecuteUbergraph_HorseCombatStates(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
