#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponWarHammerProgression_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponWarHammerProgression.WeaponWarHammerProgression_C
// 0x0008 (0x0030 - 0x0028)
class UWeaponWarHammerProgression_C : public UAssemblyInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WeaponWarHammerProgression.WeaponWarHammerProgression_C"));
		return ptr;
	}


	void OnAssemble_WeaponWarHammerProgression();
	void ExecuteUbergraph_WeaponWarHammerProgression(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
