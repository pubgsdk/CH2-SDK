#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpecialItemAbility_Resupply_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C
// 0x0008 (0x00A0 - 0x0098)
class USpecialItemAbility_Resupply_C : public UBaseSpecialItemAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SpecialItemAbility_Resupply.SpecialItemAbility_Resupply_C"));
		return ptr;
	}


	void OnUseItem();
	void ExecuteUbergraph_SpecialItemAbility_Resupply(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
