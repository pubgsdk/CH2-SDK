// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ScoreboardPlayernameWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.PlayFadeInAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EUMGSequencePlayMode> Play_Mode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayernameWidget_C::PlayFadeInAnimation(float Time, TEnumAsByte<EUMGSequencePlayMode> Play_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.PlayFadeInAnimation"));

	struct
	{
		float                          Time;
		TEnumAsByte<EUMGSequencePlayMode> Play_Mode;
	} params = {};

	params.Time = Time;
	params.Play_Mode = Play_Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreboardPlayernameWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayernameWidget_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.InvalidateCache
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayernameWidget_C::InvalidateCache()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.InvalidateCache"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboardPlayernameWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.ExecuteUbergraph_ScoreboardPlayernameWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayernameWidget_C::ExecuteUbergraph_ScoreboardPlayernameWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.ExecuteUbergraph_ScoreboardPlayernameWidget"));

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
