// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ScoreEvent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoreEvent.ScoreEvent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreEvent_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreEvent.ScoreEvent_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreEvent.ScoreEvent_C.OnIndexChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreEvent_C::OnIndexChanged(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreEvent.ScoreEvent_C.OnIndexChanged"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreEvent.ScoreEvent_C.StartFadeOutTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreEvent_C::StartFadeOutTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreEvent.ScoreEvent_C.StartFadeOutTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreEvent.ScoreEvent_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreEvent_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreEvent.ScoreEvent_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreEvent.ScoreEvent_C.ExecuteUbergraph_ScoreEvent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreEvent_C::ExecuteUbergraph_ScoreEvent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreEvent.ScoreEvent_C.ExecuteUbergraph_ScoreEvent"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
