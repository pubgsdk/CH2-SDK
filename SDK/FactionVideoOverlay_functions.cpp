// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FactionVideoOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FactionVideoOverlay.FactionVideoOverlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFactionVideoOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FactionVideoOverlay.FactionVideoOverlay_C.OnEndReached
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFactionVideoOverlay_C::OnEndReached()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.OnEndReached"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FactionVideoOverlay.FactionVideoOverlay_C.InitialFadeInComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFactionVideoOverlay_C::InitialFadeInComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.InitialFadeInComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FactionVideoOverlay.FactionVideoOverlay_C.FailedPlayMovie
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFactionVideoOverlay_C::FailedPlayMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.FailedPlayMovie"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FactionVideoOverlay.FactionVideoOverlay_C.MovieLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFactionVideoOverlay_C::MovieLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.MovieLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FactionVideoOverlay.FactionVideoOverlay_C.StartMovie
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFactionVideoOverlay_C::StartMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.StartMovie"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FactionVideoOverlay.FactionVideoOverlay_C.FindSoundComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFactionVideoOverlay_C::FindSoundComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.FindSoundComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FactionVideoOverlay.FactionVideoOverlay_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFactionVideoOverlay_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FactionVideoOverlay.FactionVideoOverlay_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFactionVideoOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FactionVideoOverlay.FactionVideoOverlay_C.ExecuteUbergraph_FactionVideoOverlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFactionVideoOverlay_C::ExecuteUbergraph_FactionVideoOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.ExecuteUbergraph_FactionVideoOverlay"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FactionVideoOverlay.FactionVideoOverlay_C.VideoCompleted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFactionVideoOverlay_C::VideoCompleted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FactionVideoOverlay.FactionVideoOverlay_C.VideoCompleted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
