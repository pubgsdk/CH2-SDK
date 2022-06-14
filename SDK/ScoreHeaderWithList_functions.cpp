// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ScoreHeaderWithList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoreHeaderWithList.ScoreHeaderWithList_C.GetLifeSpanTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UScoreHeaderWithList_C::GetLifeSpanTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.GetLifeSpanTime"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.RemoveExcessChildSubWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreHeaderWithList_C::RemoveExcessChildSubWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.RemoveExcessChildSubWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.SendBreakableEventToCrosshair
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UScoreHeaderWithList_C::SendBreakableEventToCrosshair(const struct FScoreEventStruct& ScoreEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.SendBreakableEventToCrosshair"));

	struct
	{
		struct FScoreEventStruct       ScoreEvent;
	} params = {};

	params.ScoreEvent = ScoreEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.DetermineEventType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEventStruct               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<EScoreEventType>   Type                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreHeaderWithList_C::DetermineEventType(const struct FScoreEventStruct& ScoreEventStruct, TEnumAsByte<EScoreEventType>* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.DetermineEventType"));

	struct
	{
		struct FScoreEventStruct       ScoreEventStruct;
		TEnumAsByte<EScoreEventType>   Type;
	} params = {};

	params.ScoreEventStruct = ScoreEventStruct;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Type != nullptr)
		*Type = params.Type;
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.GetScoreText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ScoreValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)
// bool                           IsPositive                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreHeaderWithList_C::GetScoreText(int ScoreValue, struct FText* Result, bool* IsPositive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.GetScoreText"));

	struct
	{
		int                            ScoreValue;
		struct FText                   Result;
		bool                           IsPositive;
	} params = {};

	params.ScoreValue = ScoreValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
	if (IsPositive != nullptr)
		*IsPositive = params.IsPositive;
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddSubScoreEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UScoreHeaderWithList_C::AddSubScoreEvent(const struct FScoreEventStruct& ScoreEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddSubScoreEvent"));

	struct
	{
		struct FScoreEventStruct       ScoreEvent;
	} params = {};

	params.ScoreEvent = ScoreEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddSubScoreWidget
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEventStruct               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UScoreHeaderWithList_C::AddSubScoreWidget(const struct FScoreEventStruct& ScoreEventStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddSubScoreWidget"));

	struct
	{
		struct FScoreEventStruct       ScoreEventStruct;
	} params = {};

	params.ScoreEventStruct = ScoreEventStruct;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddScore
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreHeaderWithList_C::AddScore(int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.AddScore"));

	struct
	{
		int                            Score;
	} params = {};

	params.Score = Score;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreHeaderWithList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.OnRemoved
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreHeaderWithList_C::OnRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.OnRemoved"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.PlayFadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreHeaderWithList_C::PlayFadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.PlayFadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.OnIndexChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreHeaderWithList_C::OnIndexChanged(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.OnIndexChanged"));

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


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.PlayFadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreHeaderWithList_C::PlayFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.PlayFadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.StartFadeOutTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreHeaderWithList_C::StartFadeOutTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.StartFadeOutTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.StartFadeOut_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreHeaderWithList_C::StartFadeOut_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.StartFadeOut_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreHeaderWithList.ScoreHeaderWithList_C.ExecuteUbergraph_ScoreHeaderWithList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreHeaderWithList_C::ExecuteUbergraph_ScoreHeaderWithList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreHeaderWithList.ScoreHeaderWithList_C.ExecuteUbergraph_ScoreHeaderWithList"));

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
