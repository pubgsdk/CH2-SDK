#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HUDMessageStyle.HUDMessageStyle
// 0x0080
struct FHUDMessageStyle
{
	struct FLinearColor                                BackgroundColor_2_7701368443D9DA0516F2BEAC0B2B8570;       // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                TextColor_4_E44FA03B4483779346DF1C8FE96B850C;             // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font_7_3309AC134DDEC472BEE1A29B817AFAB5;                  // 0x0020(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Size_10_0115A28E4908A47B60D4689989D1955E;                 // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Underline_13_6437E4AC4DA5DFB693A723B9688260CB;            // 0x007C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
