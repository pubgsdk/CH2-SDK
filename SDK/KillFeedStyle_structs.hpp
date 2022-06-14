#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"
#include "UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KillFeedStyle.KillFeedStyle
// 0x0078
struct FKillFeedStyle
{
	bool                                               ShowBorder_1_D209B90448F12AF4AD11E0989B2CDB18;            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Bordercolor_4_DFFE37804FF2D2AFA074FC87204C011B;           // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ShowBackground_13_364ECDC14AFFAB81E0B7B0B8CDC219F0;       // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseTeamColorBackground_42_ECC629CA46E29D153FF39DBFD1EC812F;// 0x0015(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FLinearColor                                BackgroundColor_12_134225844DC4DF77859760B39E6A0565;      // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ShowEdgeGlow_14_B29BAC284409AEB05F7BB2AC36343F1C;         // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FLinearColor                                EdgeGlowColor_11_3D651B094F6934B3AE3ACD98F1A96175;        // 0x002C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CustomIcon_20_DEC6093F421B5308E7F0A4A51351234B;           // 0x003C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class UTexture2D*                                  Icon_17_D7EAA2DF4D6831DDA3103FA630ACE309;                 // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EventCauserBoldenText_26_0C43C02240719B41DFEBE98AC09D01B5;// 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FLinearColor                                CauserTextColor_29_1177C8E34C83B38BF2B73F8F6DA772B5;      // 0x004C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EventCauserTextUseTeamColor_40_7B5CEF434DB06071C33868986203277E;// 0x005C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EventRecieverBoldenText_25_74F1ADD94EE8B125D5B92986BC9BB344;// 0x005D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	struct FLinearColor                                RecieverTextColor_31_F27E575D43B546E48DA99696F464B42A;    // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EventRecieverTextUseTeamColor_38_C9C160E14DFC3B0D2D61F18B7DF99863;// 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ESlateVisibility                                   EventCauserTextVisibility_34_A26E25A04F5FA0859A86F3B67CD85BF0;// 0x0071(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ESlateVisibility                                   EventTakerTextVisibility_36_F7ABBD6E48095A9C4F18CEA27DFED768;// 0x0072(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x5];                                       // 0x0073(0x0005) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
