#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Climbing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Climbing.Climbing_C
// 0x0008 (0x0188 - 0x0180)
class UClimbing_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Climbing.Climbing_C"));
		return ptr;
	}


	void OnAssemble_Climbing();
	void ExecuteUbergraph_Climbing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
