#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RuntimeAssetCache_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase
// 0x0058 (0x0080 - 0x0028)
class URuntimeAssetCacheBuilder_ObjectBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                AssetVersion;                                             // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     AssetName;                                                // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase"));
		return ptr;
	}


	void SaveNewAssetToCache(class UObject* NewAsset);
	void OnAssetCacheMiss();
	void GetFromCacheAsyncComplete(int Handle, const struct FVoidPtrParam& DataPtr);
	void GetFromCacheAsync(const struct FScriptDelegate& OnComplete);
};


// Class RuntimeAssetCache.RuntimeAssetCacheBPHooks
// 0x0000 (0x0028 - 0x0028)
class URuntimeAssetCacheBPHooks : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RuntimeAssetCache.RuntimeAssetCacheBPHooks"));
		return ptr;
	}


	static void WaitAsynchronousCompletion(int Handle);
	static bool PollAsynchronousCompletion(int Handle);
	static struct FVoidPtrParam GetSynchronous(const TScriptInterface<class URuntimeAssetCacheBuilder>& CacheBuilder);
	static int GetCacheSize(const struct FName& Bucket);
	static struct FVoidPtrParam GetAsynchronousResults(int Handle);
	static int GetAsynchronous(const TScriptInterface<class URuntimeAssetCacheBuilder>& CacheBuilder, const struct FScriptDelegate& CompletionDelegate);
	static bool ClearCache(const struct FName& Bucket);
};


// Class RuntimeAssetCache.ExampleTextureCacheBuilder
// 0x0008 (0x0088 - 0x0080)
class UExampleTextureCacheBuilder : public URuntimeAssetCacheBuilder_ObjectBase
{
public:
	class UTexture2D*                                  Texture;                                                  // 0x0080(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RuntimeAssetCache.ExampleTextureCacheBuilder"));
		return ptr;
	}

};


// Class RuntimeAssetCache.RuntimeAssetCacheBuilder
// 0x0000 (0x0028 - 0x0028)
class URuntimeAssetCacheBuilder : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RuntimeAssetCache.RuntimeAssetCacheBuilder"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
