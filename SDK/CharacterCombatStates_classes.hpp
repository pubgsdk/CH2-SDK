#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CharacterCombatStates_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterCombatStates.CharacterCombatStates_C
// 0x0008 (0x0070 - 0x0068)
class UCharacterCombatStates_C : public UCombatStateSet
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CharacterCombatStates.CharacterCombatStates_C"));
		return ptr;
	}


	void OnAssemble_CharacterCombatStates();
	void ExecuteUbergraph_CharacterCombatStates(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
