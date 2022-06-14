#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BatteringRamStates_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BatteringRamStates.BatteringRamStates_C
// 0x0008 (0x0070 - 0x0068)
class UBatteringRamStates_C : public UCombatStateSet
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BatteringRamStates.BatteringRamStates_C"));
		return ptr;
	}


	void OnAssemble_BatteringRamStates();
	void ExecuteUbergraph_BatteringRamStates(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
