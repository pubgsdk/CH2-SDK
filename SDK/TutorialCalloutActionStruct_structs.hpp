#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "TutorialInputWithModStruct_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TutorialCalloutActionStruct.TutorialCalloutActionStruct
// 0x0028
struct FTutorialCalloutActionStruct
{
	struct FText                                       NameText_17_2477A5E24EB5C09ECC771FBF2CEE2DE5;             // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTutorialInputWithModStruct>         InputModifierMap_19_DA1C792D4F3BECF31EDAA9BBA2295FE9;     // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
