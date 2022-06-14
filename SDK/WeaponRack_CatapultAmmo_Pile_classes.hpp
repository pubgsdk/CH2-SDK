#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponRack_CatapultAmmo_Pile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponRack_CatapultAmmo_Pile.WeaponRack_CatapultAmmo_Pile_C
// 0x000F (0x0350 - 0x0341)
class AWeaponRack_CatapultAmmo_Pile_C : public ABaseWeaponRack_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        SM_WeaponRack_CatapultAmmo_Pile;                          // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WeaponRack_CatapultAmmo_Pile.WeaponRack_CatapultAmmo_Pile_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
