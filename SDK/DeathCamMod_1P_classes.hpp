#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DeathCamMod_1P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DeathCamMod_1P.DeathCamMod_1P_C
// 0x0008 (0x0088 - 0x0080)
class UDeathCamMod_1P_C : public UCameraModifier_DeathCam1P
{
public:
	class UCurveFloat*                                 Alpha_To_Fade_Out_Curve;                                  // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DeathCamMod_1P.DeathCamMod_1P_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
