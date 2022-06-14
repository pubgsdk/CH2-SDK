#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_DaneAxe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_DaneAxe.Weapon_DaneAxe_C
// 0x0008 (0x12C8 - 0x12C0)
class AWeapon_DaneAxe_C : public AWeapon_BaseTwoHanded_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Weapon_DaneAxe.Weapon_DaneAxe_C"));
		return ptr;
	}


	void OnInitialize();
	void ExecuteUbergraph_Weapon_DaneAxe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
