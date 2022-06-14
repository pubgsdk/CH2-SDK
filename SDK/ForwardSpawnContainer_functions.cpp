// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ForwardSpawnContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForwardSpawnContainer.ForwardSpawnContainer_C.Get Visibility of HUD marker container
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UForwardSpawnContainer_C::Get_Visibility_of_HUD_marker_container()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.Get Visibility of HUD marker container"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UForwardSpawnContainer_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.GetVisibility_1"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UForwardSpawnContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.Notify Started Wave Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnContainer_C::Notify_Started_Wave_Hover(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.Notify Started Wave Hover"));

	struct
	{
		class ASpawnWave*              Wave;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.Notify Ended Wave Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnContainer_C::Notify_Ended_Wave_Hover(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.Notify Ended Wave Hover"));

	struct
	{
		class ASpawnWave*              Wave;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.OnJoinableSpawnWavesUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnContainer_C::OnJoinableSpawnWavesUpdated_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.OnJoinableSpawnWavesUpdated_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.OnPromptPlayerMessageRequest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            MessageTag                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MessageId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnContainer_C::OnPromptPlayerMessageRequest(const struct FGameplayTag& MessageTag, int MessageId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.OnPromptPlayerMessageRequest"));

	struct
	{
		struct FGameplayTag            MessageTag;
		int                            MessageId;
	} params = {};

	params.MessageTag = MessageTag;
	params.MessageId = MessageId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.ResetIsShowingPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UForwardSpawnContainer_C::ResetIsShowingPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.ResetIsShowingPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.CancelPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MessageId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnContainer_C::CancelPrompt(int MessageId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.CancelPrompt"));

	struct
	{
		int                            MessageId;
	} params = {};

	params.MessageId = MessageId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.ExecuteUbergraph_ForwardSpawnContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnContainer_C::ExecuteUbergraph_ForwardSpawnContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.ExecuteUbergraph_ForwardSpawnContainer"));

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


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.On Ended Wave Hover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnContainer_C::On_Ended_Wave_Hover__DelegateSignature(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.On Ended Wave Hover__DelegateSignature"));

	struct
	{
		class ASpawnWave*              Wave;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ForwardSpawnContainer.ForwardSpawnContainer_C.On Started Wave Hover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UForwardSpawnContainer_C::On_Started_Wave_Hover__DelegateSignature(class ASpawnWave* Wave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ForwardSpawnContainer.ForwardSpawnContainer_C.On Started Wave Hover__DelegateSignature"));

	struct
	{
		class ASpawnWave*              Wave;
	} params = {};

	params.Wave = Wave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
