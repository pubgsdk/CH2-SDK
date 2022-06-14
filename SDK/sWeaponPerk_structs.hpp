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

// ScriptStruct sWeaponPerk.sWeaponPerk
// 0x0038
struct FsWeaponPerk
{
	class UTexture2D*                                  PerkIcon_9_88EA648C41CB12EEF106248CC8AB147B;              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       PerkText_3_694B5DF24BB51B0B3929DEB7984102A6;              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FText                                       PerkSubText_8_7390F84947FE1A829E6BA1AF47C8DC35;           // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
