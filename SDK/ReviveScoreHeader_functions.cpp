// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ReviveScoreHeader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReviveScoreHeader.ReviveScoreHeader_C.RemoveExcessChildSubWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveScoreHeader_C::RemoveExcessChildSubWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.RemoveExcessChildSubWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReviveScoreHeader.ReviveScoreHeader_C.SendBreakableEventToCrosshair
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UReviveScoreHeader_C::SendBreakableEventToCrosshair(const struct FScoreEventStruct& ScoreEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.SendBreakableEventToCrosshair"));

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


// Function ReviveScoreHeader.ReviveScoreHeader_C.DetermineEventType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEventStruct               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<EScoreEventType>   Type                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveScoreHeader_C::DetermineEventType(const struct FScoreEventStruct& ScoreEventStruct, TEnumAsByte<EScoreEventType>* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.DetermineEventType"));

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


// Function ReviveScoreHeader.ReviveScoreHeader_C.GetScoreText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ScoreValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)
// bool                           IsPositive                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReviveScoreHeader_C::GetScoreText(int ScoreValue, struct FText* Result, bool* IsPositive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.GetScoreText"));

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


// Function ReviveScoreHeader.ReviveScoreHeader_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReviveScoreHeader_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReviveScoreHeader.ReviveScoreHeader_C.OnIndexChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveScoreHeader_C::OnIndexChanged(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.OnIndexChanged"));

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


// Function ReviveScoreHeader.ReviveScoreHeader_C.OnRemoved
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReviveScoreHeader_C::OnRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.OnRemoved"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReviveScoreHeader.ReviveScoreHeader_C.AddSubScoreEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UReviveScoreHeader_C::AddSubScoreEvent(const struct FScoreEventStruct& ScoreEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.AddSubScoreEvent"));

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


// Function ReviveScoreHeader.ReviveScoreHeader_C.AddSubScoreWidget
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScoreEventStruct       ScoreEventStruct               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UReviveScoreHeader_C::AddSubScoreWidget(const struct FScoreEventStruct& ScoreEventStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.AddSubScoreWidget"));

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


// Function ReviveScoreHeader.ReviveScoreHeader_C.AddScore
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveScoreHeader_C::AddScore(int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.AddScore"));

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


// Function ReviveScoreHeader.ReviveScoreHeader_C.StartFadeOut_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveScoreHeader_C::StartFadeOut_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.StartFadeOut_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReviveScoreHeader.ReviveScoreHeader_C.ExecuteUbergraph_ReviveScoreHeader
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveScoreHeader_C::ExecuteUbergraph_ReviveScoreHeader(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReviveScoreHeader.ReviveScoreHeader_C.ExecuteUbergraph_ReviveScoreHeader"));

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
