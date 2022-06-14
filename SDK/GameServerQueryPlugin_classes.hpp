#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameServerQueryPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameServerQueryPlugin.GameServerQueryHandler
// 0x0000 (0x0028 - 0x0028)
class UGameServerQueryHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServerQueryPlugin.GameServerQueryHandler"));
		return ptr;
	}

};


// Class GameServerQueryPlugin.GameServerA2SQueryHandler
// 0x0008 (0x0030 - 0x0028)
class UGameServerA2SQueryHandler : public UGameServerQueryHandler
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServerQueryPlugin.GameServerA2SQueryHandler"));
		return ptr;
	}

};


// Class GameServerQueryPlugin.GameServerQuery
// 0x0130 (0x0388 - 0x0258)
class AGameServerQuery : public AActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0258(0x0100) MISSED OFFSET
	struct FString                                     QueryIpAddress;                                           // 0x0358(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                QueryPort;                                                // 0x0368(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                PingPort;                                                 // 0x036C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                QueryThreadWaitTimeMilliseconds;                          // 0x0370(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	TArray<class UGameServerQueryHandler*>             QueryHandlers;                                            // 0x0378(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServerQueryPlugin.GameServerQuery"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
