#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct QuestCriteriaEntryData.QuestCriteriaEntryData
// 0x0050
struct FQuestCriteriaEntryData
{
	struct FText                                       Title_2_D4BB258642FCF4590CB7C48C3DE94D6E;                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	bool                                               IsComplete_5_9E56092D4D168356CEEBEEB8BC3271EB;            // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              Progress_8_92307E4F4CF80ACC22BFCA9BFC9B9D99;              // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       MaxProgressText_11_DB48949642563D300F2C918CFE2B29C6;      // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FText                                       ProgressText_13_D6EFAAB547CF055E17A7468B3AE57E70;         // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
