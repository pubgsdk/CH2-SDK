#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ReloadCamMod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReloadCamMod.ReloadCamMod_C
// 0x0000 (0x0128 - 0x0128)
class UReloadCamMod_C : public UCameraModifier_FollowAnimation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ReloadCamMod.ReloadCamMod_C"));
		return ptr;
	}


	bool ShouldBlend(const struct FRotator& ControlRot, const struct FRotator& SocketRot);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
