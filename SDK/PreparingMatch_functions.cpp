// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PreparingMatch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PreparingMatch.PreparingMatch_C.IsTdmWithLts
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsTdmWithLts                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPreparingMatch_C::IsTdmWithLts(bool* IsTdmWithLts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreparingMatch.PreparingMatch_C.IsTdmWithLts"));

	struct
	{
		bool                           IsTdmWithLts;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsTdmWithLts != nullptr)
		*IsTdmWithLts = params.IsTdmWithLts;
}


// Function PreparingMatch.PreparingMatch_C.On Fade Out Started
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPreparingMatch_C::On_Fade_Out_Started()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreparingMatch.PreparingMatch_C.On Fade Out Started"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreparingMatch.PreparingMatch_C.HandleMatchStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   MatchState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPreparingMatch_C::HandleMatchStateChanged(const struct FName& MatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreparingMatch.PreparingMatch_C.HandleMatchStateChanged"));

	struct
	{
		struct FName                   MatchState;
	} params = {};

	params.MatchState = MatchState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreparingMatch.PreparingMatch_C.BeginState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPreparingMatch_C::BeginState(const struct FGameplayTag& PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreparingMatch.PreparingMatch_C.BeginState"));

	struct
	{
		struct FGameplayTag            PreviousState;
	} params = {};

	params.PreviousState = PreviousState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreparingMatch.PreparingMatch_C.EndState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPreparingMatch_C::EndState(const struct FGameplayTag& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreparingMatch.PreparingMatch_C.EndState"));

	struct
	{
		struct FGameplayTag            NextState;
	} params = {};

	params.NextState = NextState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreparingMatch.PreparingMatch_C.On Fade Out Finished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPreparingMatch_C::On_Fade_Out_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreparingMatch.PreparingMatch_C.On Fade Out Finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PreparingMatch.PreparingMatch_C.ExecuteUbergraph_PreparingMatch
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPreparingMatch_C::ExecuteUbergraph_PreparingMatch(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PreparingMatch.PreparingMatch_C.ExecuteUbergraph_PreparingMatch"));

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
