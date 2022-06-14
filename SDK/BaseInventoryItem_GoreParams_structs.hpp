#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "TBL_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BaseInventoryItem_GoreParams.BaseInventoryItem_GoreParams
// 0x0008
struct FBaseInventoryItem_GoreParams
{
	float                                              RangedRagdollImpulse_2_31C05BA344025D457840FF92A6CE12F0;  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ELimbGoreAction                                    LimbGoreAction_7_F1A74B6A4B1D15C0AF31148AE8DF4DAB;        // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHeadGoreAction                                    HeadGoreAction_8_C6FAF3DD47A267A897F9C181D5BB2815;        // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHelmetRemovalPolicy                               HelmetRemovalPolicy_11_2D766BBA4EF5F1A89DC80D9ADBC46D4A;  // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
