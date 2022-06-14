#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Siege_Idle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Siege_Idle.Siege_Idle_C
// 0x0008 (0x0188 - 0x0180)
class USiege_Idle_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Siege_Idle.Siege_Idle_C"));
		return ptr;
	}


	void OnAssemble_Siege_Idle();
	void ExecuteUbergraph_Siege_Idle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
