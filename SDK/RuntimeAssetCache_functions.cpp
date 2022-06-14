// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RuntimeAssetCache_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.SaveNewAssetToCache
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 NewAsset                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URuntimeAssetCacheBuilder_ObjectBase::SaveNewAssetToCache(class UObject* NewAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.SaveNewAssetToCache"));

	struct
	{
		class UObject*                 NewAsset;
	} params = {};

	params.NewAsset = NewAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.OnAssetCacheMiss
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URuntimeAssetCacheBuilder_ObjectBase::OnAssetCacheMiss()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.OnAssetCacheMiss"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.GetFromCacheAsyncComplete
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Handle                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVoidPtrParam           DataPtr                        (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void URuntimeAssetCacheBuilder_ObjectBase::GetFromCacheAsyncComplete(int Handle, const struct FVoidPtrParam& DataPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.GetFromCacheAsyncComplete"));

	struct
	{
		int                            Handle;
		struct FVoidPtrParam           DataPtr;
	} params = {};

	params.Handle = Handle;
	params.DataPtr = DataPtr;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.GetFromCacheAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnComplete                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void URuntimeAssetCacheBuilder_ObjectBase::GetFromCacheAsync(const struct FScriptDelegate& OnComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.GetFromCacheAsync"));

	struct
	{
		struct FScriptDelegate         OnComplete;
	} params = {};

	params.OnComplete = OnComplete;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.WaitAsynchronousCompletion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Handle                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void URuntimeAssetCacheBPHooks::WaitAsynchronousCompletion(int Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.WaitAsynchronousCompletion"));

	struct
	{
		int                            Handle;
	} params = {};

	params.Handle = Handle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.PollAsynchronousCompletion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Handle                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool URuntimeAssetCacheBPHooks::PollAsynchronousCompletion(int Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.PollAsynchronousCompletion"));

	struct
	{
		int                            Handle;
		bool                           ReturnValue;
	} params = {};

	params.Handle = Handle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetSynchronous
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class URuntimeAssetCacheBuilder> CacheBuilder                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// struct FVoidPtrParam           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FVoidPtrParam URuntimeAssetCacheBPHooks::GetSynchronous(const TScriptInterface<class URuntimeAssetCacheBuilder>& CacheBuilder)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetSynchronous"));

	struct
	{
		TScriptInterface<class URuntimeAssetCacheBuilder> CacheBuilder;
		struct FVoidPtrParam           ReturnValue;
	} params = {};

	params.CacheBuilder = CacheBuilder;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetCacheSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Bucket                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int URuntimeAssetCacheBPHooks::GetCacheSize(const struct FName& Bucket)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetCacheSize"));

	struct
	{
		struct FName                   Bucket;
		int                            ReturnValue;
	} params = {};

	params.Bucket = Bucket;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetAsynchronousResults
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Handle                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVoidPtrParam           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FVoidPtrParam URuntimeAssetCacheBPHooks::GetAsynchronousResults(int Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetAsynchronousResults"));

	struct
	{
		int                            Handle;
		struct FVoidPtrParam           ReturnValue;
	} params = {};

	params.Handle = Handle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetAsynchronous
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class URuntimeAssetCacheBuilder> CacheBuilder                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         CompletionDelegate             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int URuntimeAssetCacheBPHooks::GetAsynchronous(const TScriptInterface<class URuntimeAssetCacheBuilder>& CacheBuilder, const struct FScriptDelegate& CompletionDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetAsynchronous"));

	struct
	{
		TScriptInterface<class URuntimeAssetCacheBuilder> CacheBuilder;
		struct FScriptDelegate         CompletionDelegate;
		int                            ReturnValue;
	} params = {};

	params.CacheBuilder = CacheBuilder;
	params.CompletionDelegate = CompletionDelegate;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.ClearCache
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Bucket                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool URuntimeAssetCacheBPHooks::ClearCache(const struct FName& Bucket)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.ClearCache"));

	struct
	{
		struct FName                   Bucket;
		bool                           ReturnValue;
	} params = {};

	params.Bucket = Bucket;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
