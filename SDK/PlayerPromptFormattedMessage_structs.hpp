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

// ScriptStruct PlayerPromptFormattedMessage.PlayerPromptFormattedMessage
// 0x0038
struct FPlayerPromptFormattedMessage
{
	struct FText                                       MessageText_2_C5F8019C42FEF0D114F2138EF55390E1;           // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	float                                              DisplayTime_5_3FA073AB45BECE79687FF89DCD903548;           // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       AcceptActionBindingName_16_361EE65B46BA08B2B234EF90B853377F;// 0x001C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       RejectActionBindingName_15_FF1DB070490C7C18A5D423A30E4E473E;// 0x0024(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SendReplyOnAccept_19_ED5AA5BA436E12C1339DAAA05A15EB42;    // 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               PromptSound_11_40F68354431350C04FBF4C83D8588453;          // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
