#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "sWeaponStat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct sWeaponStatsAll.sWeaponStatsAll
// 0x0024
struct FsWeaponStatsAll
{
	struct FsWeaponStat                                Damage_13_BBF675CD4BB8D44C68D6688C56EFF35B;               // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FsWeaponStat                                Speed_17_6CEDF11049E0C5889669CE855008ED89;                // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FsWeaponStat                                Reach_16_8AAA6687458087431E5C7A8C6737DA68;                // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
