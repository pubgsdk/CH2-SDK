#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponThrowingKnifeProgression_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C
// 0x0008 (0x0030 - 0x0028)
class UWeaponThrowingKnifeProgression_C : public UAssemblyInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C"));
		return ptr;
	}


	void OnAssemble_WeaponThrowingKnifeProgression();
	void ExecuteUbergraph_WeaponThrowingKnifeProgression(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
