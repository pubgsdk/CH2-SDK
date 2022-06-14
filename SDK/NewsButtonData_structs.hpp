#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "NewsButtonType_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NewsButtonData.NewsButtonData
// 0x0050
struct FNewsButtonData
{
	struct FText                                       Title_2_72DBD96A4E4E441E85EBDDA5A9E47B5C;                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FText                                       Subtitle_4_E39EA6FB44295A16549D6B93D06E31F3;              // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  Background_7_DC4631404E678D2701AD03B6E8B08722;            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ENewsButtonType                                    ButtonType_10_444955FF4BE5EFA02613348CD49A3B79;           // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     TargetId_13_9902C2F34CDEA431D8BB7F8E62AE8CF4;             // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
