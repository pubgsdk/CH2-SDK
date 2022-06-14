#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnalyticsCore.AnalyticsEvent
// 0x0018
struct FAnalyticsEvent
{
	struct FDateTime                                   EventTime;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BuildCL;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Random;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLogged;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AnalyticsCore.AnalyticsEvent_Client
// 0x0010 (0x0028 - 0x0018)
struct FAnalyticsEvent_Client : public FAnalyticsEvent
{
	struct FString                                     NetId;                                                    // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct AnalyticsCore.TimeUUID
// 0x0008
struct FTimeUUID
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AnalyticsCore.NetAnalyticsEventAttribute
// 0x0020
struct FNetAnalyticsEventAttribute
{
	struct FString                                     AttrName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AttrValue;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct AnalyticsCore.EmbeddedProperty
// 0x0060
struct FEmbeddedProperty
{
	struct FFieldPath                                  Property;                                                 // 0x0000(0x0020) (CPF_Edit, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     EmbeddedName;                                             // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EmbeddedQualifiedName;                                    // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                EmbeddedPropertyOffset;                                   // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FFieldPath>                          EmbeddedPropertyChain;                                    // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct AnalyticsCore.AnalyticsEventType
// 0x0038
struct FAnalyticsEventType
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
