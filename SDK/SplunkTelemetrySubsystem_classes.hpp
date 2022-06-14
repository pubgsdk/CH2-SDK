#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SplunkTelemetrySubsystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SplunkTelemetrySubsystem.TelemetrySource
// 0x0000 (0x0028 - 0x0028)
class UTelemetrySource : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SplunkTelemetrySubsystem.TelemetrySource"));
		return ptr;
	}

};


// Class SplunkTelemetrySubsystem.BPTelemetrySource
// 0x0010 (0x0038 - 0x0028)
class UBPTelemetrySource : public UTelemetrySource
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SplunkTelemetrySubsystem.BPTelemetrySource"));
		return ptr;
	}


	void SetStringField(const struct FString& Key, const struct FString& Value);
	void SetNumberField(const struct FString& Key, float Value);
	void Reset_BP();
	void OnTakeSample_BP();
	struct FString GetKeyName();
	void GenerateReportJSON_BP();
};


// Class SplunkTelemetrySubsystem.MultiplayerTelemetrySource
// 0x0018 (0x0040 - 0x0028)
class UMultiplayerTelemetrySource : public UTelemetrySource
{
public:
	TArray<float>                                      PlayerCountSamples;                                       // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SplunkTelemetrySubsystem.MultiplayerTelemetrySource"));
		return ptr;
	}

};


// Class SplunkTelemetrySubsystem.RAMTelemetrySource
// 0x0020 (0x0048 - 0x0028)
class URAMTelemetrySource : public UTelemetrySource
{
public:
	TArray<float>                                      RAMSamples;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<float>                                      VirtRAMSamples;                                           // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SplunkTelemetrySubsystem.RAMTelemetrySource"));
		return ptr;
	}

};


// Class SplunkTelemetrySubsystem.SplunkTelemetrySubsystem
// 0x0040 (0x0070 - 0x0030)
class USplunkTelemetrySubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
	TArray<class UTelemetrySource*>                    TelemetrySources;                                         // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SplunkTelemetrySubsystem.SplunkTelemetrySubsystem"));
		return ptr;
	}


	void OnWorldDestroy(class UWorld* World);
	void OnWorldCreation(class UWorld* World);
};


// Class SplunkTelemetrySubsystem.SplunkTelemetrySubsystemSettings
// 0x0048 (0x0080 - 0x0038)
class USplunkTelemetrySubsystemSettings : public UDeveloperSettings
{
public:
	struct FString                                     SplunkURL;                                                // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SplunkToken;                                              // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             MapsToProfile;                                            // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SampleRate;                                               // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UClass* /*UTelemetrySource*/>         TelemetrySources;                                         // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SplunkTelemetrySubsystem.SplunkTelemetrySubsystemSettings"));
		return ptr;
	}

};


// Class SplunkTelemetrySubsystem.UnitTelemetrySource
// 0x0040 (0x0068 - 0x0028)
class UUnitTelemetrySource : public UTelemetrySource
{
public:
	TArray<float>                                      CPUSamples;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<float>                                      GTSamples;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<float>                                      RTSamples;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<float>                                      GPUSamples;                                               // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SplunkTelemetrySubsystem.UnitTelemetrySource"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
