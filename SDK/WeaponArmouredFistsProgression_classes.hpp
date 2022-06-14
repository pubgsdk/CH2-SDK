#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponArmouredFistsProgression_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponArmouredFistsProgression.WeaponArmouredFistsProgression_C
// 0x0008 (0x0030 - 0x0028)
class UWeaponArmouredFistsProgression_C : public UAssemblyInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WeaponArmouredFistsProgression.WeaponArmouredFistsProgression_C"));
		return ptr;
	}


	void OnAssemble_WeaponArmouredFistsProgression();
	void ExecuteUbergraph_WeaponArmouredFistsProgression(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
