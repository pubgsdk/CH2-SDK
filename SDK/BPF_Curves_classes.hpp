#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_Curves_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_Curves.BPF_Curves_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Curves_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_Curves.BPF_Curves_C"));
		return ptr;
	}


	static void MapToCurve(float In, class UCurveFloat* Curve, class UObject* __WorldContext, float* Out);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
