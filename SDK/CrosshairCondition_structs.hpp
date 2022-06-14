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

// ScriptStruct CrosshairCondition.CrosshairCondition
// 0x0030
struct FCrosshairCondition
{
	struct FName                                       Tag_2_E0032FD24A019EA4896DE6B368612546;                   // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Keybinding_5_32B4C80842DB21DE408AFB914A869F69;            // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       HintText_8_9FA6245D4EC02E7778067198E7AEDA0B;              // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
