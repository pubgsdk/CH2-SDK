#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_Goblet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_Goblet.Carryable_Goblet_C
// 0x0008 (0x1288 - 0x1280)
class ACarryable_Goblet_C : public ABaseItem_Drunk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_Goblet.Carryable_Goblet_C"));
		return ptr;
	}


	void OnInitialize();
	void ExecuteUbergraph_Carryable_Goblet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
