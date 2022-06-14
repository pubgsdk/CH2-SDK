#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Siege_Release_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Siege_Release.Siege_Release_C
// 0x0008 (0x0188 - 0x0180)
class USiege_Release_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Siege_Release.Siege_Release_C"));
		return ptr;
	}


	void OnAssemble_Siege_Release();
	void ExecuteUbergraph_Siege_Release(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
