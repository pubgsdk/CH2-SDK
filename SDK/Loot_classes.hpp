#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Loot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Loot.Loot_C
// 0x0008 (0x0190 - 0x0188)
class ULoot_C : public UInteract_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Loot.Loot_C"));
		return ptr;
	}


	void OnAssemble_Loot();
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_Loot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
