// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NextGameStartsInWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NextGameStartsInWidget.NextGameStartsInWidget_C.GetModeText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 MapURL                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UNextGameStartsInWidget_C::GetModeText(const struct FString& MapURL, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NextGameStartsInWidget.NextGameStartsInWidget_C.GetModeText"));

	struct
	{
		struct FString                 MapURL;
		struct FText                   Result;
	} params = {};

	params.MapURL = MapURL;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function NextGameStartsInWidget.NextGameStartsInWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNextGameStartsInWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NextGameStartsInWidget.NextGameStartsInWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NextGameStartsInWidget.NextGameStartsInWidget_C.OnMatchEnded_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNextGameStartsInWidget_C::OnMatchEnded_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NextGameStartsInWidget.NextGameStartsInWidget_C.OnMatchEnded_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NextGameStartsInWidget.NextGameStartsInWidget_C.Match Ended (Matchmaking)
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNextGameStartsInWidget_C::Match_Ended__Matchmaking_()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NextGameStartsInWidget.NextGameStartsInWidget_C.Match Ended (Matchmaking)"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NextGameStartsInWidget.NextGameStartsInWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNextGameStartsInWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NextGameStartsInWidget.NextGameStartsInWidget_C.Tick"));

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


// Function NextGameStartsInWidget.NextGameStartsInWidget_C.ExecuteUbergraph_NextGameStartsInWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNextGameStartsInWidget_C::ExecuteUbergraph_NextGameStartsInWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NextGameStartsInWidget.NextGameStartsInWidget_C.ExecuteUbergraph_NextGameStartsInWidget"));

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
