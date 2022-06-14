#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnimSet_Weapon_CrossBow_1P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimSet_Weapon_CrossBow_1P.AnimSet_Weapon_CrossBow_1P_C
// 0x0000 (0x06F8 - 0x06F8)
class UAnimSet_Weapon_CrossBow_1P_C : public UAnimationSet_BaseWeapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimSet_Weapon_CrossBow_1P.AnimSet_Weapon_CrossBow_1P_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
