#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TBLLoadingScreen.MapSpecificStageEntries
// 0x0030
struct FMapSpecificStageEntries
{
	struct FText                                       StageName;                                                // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FText                                       StageDescription;                                         // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct TBLLoadingScreen.MapSpecificLoadingScreenConfigData
// 0x0068
struct FMapSpecificLoadingScreenConfigData
{
	struct FString                                     MapName;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             Texture;                                                  // 0x0010(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
