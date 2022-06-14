#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TBLPlayerCameraManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TBLPlayerCameraManager.BP_TBLPlayerCameraManager_C
// 0x0000 (0x2EA0 - 0x2EA0)
class ABP_TBLPlayerCameraManager_C : public ATBLPlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TBLPlayerCameraManager.BP_TBLPlayerCameraManager_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
