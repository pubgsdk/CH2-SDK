#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VIP_CastleSiege_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VIP_CastleSiege.VIP_CastleSiege_C
// 0x0008 (0x17D0 - 0x17C8)
class AVIP_CastleSiege_C : public AVIP_BasePawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x17C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass VIP_CastleSiege.VIP_CastleSiege_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnCustomized();
	void ExecuteUbergraph_VIP_CastleSiege(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
