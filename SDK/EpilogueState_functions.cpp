// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EpilogueState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EpilogueState.EpilogueState_C.BeginState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEpilogueState_C::BeginState(const struct FGameplayTag& PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EpilogueState.EpilogueState_C.BeginState"));

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


// Function EpilogueState.EpilogueState_C.EndState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEpilogueState_C::EndState(const struct FGameplayTag& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EpilogueState.EpilogueState_C.EndState"));

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


// Function EpilogueState.EpilogueState_C.Play Post game music
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEpilogueState_C::Play_Post_game_music()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EpilogueState.EpilogueState_C.Play Post game music"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EpilogueState.EpilogueState_C.PlayScoreScreenMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEpilogueState_C::PlayScoreScreenMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EpilogueState.EpilogueState_C.PlayScoreScreenMusic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EpilogueState.EpilogueState_C.ExecuteUbergraph_EpilogueState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEpilogueState_C::ExecuteUbergraph_EpilogueState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EpilogueState.EpilogueState_C.ExecuteUbergraph_EpilogueState"));

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
