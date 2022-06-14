// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameModeMessageContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameModeMessageContainer.GameModeMessageContainer_C.GetRankUpMessageTypeFromOnlineStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EOnlineStat                    OnlineStat                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ERankUpMessageType> RankUpMessageType              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageContainer_C::GetRankUpMessageTypeFromOnlineStat(EOnlineStat OnlineStat, TEnumAsByte<ERankUpMessageType>* RankUpMessageType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageContainer.GameModeMessageContainer_C.GetRankUpMessageTypeFromOnlineStat"));

	struct
	{
		EOnlineStat                    OnlineStat;
		TEnumAsByte<ERankUpMessageType> RankUpMessageType;
	} params = {};

	params.OnlineStat = OnlineStat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RankUpMessageType != nullptr)
		*RankUpMessageType = params.RankUpMessageType;
}


// Function GameModeMessageContainer.GameModeMessageContainer_C.CanShowMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameModeMessageContainer_C::CanShowMessage(bool* Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageContainer.GameModeMessageContainer_C.CanShowMessage"));

	struct
	{
		bool                           Show;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Show != nullptr)
		*Show = params.Show;
}


// Function GameModeMessageContainer.GameModeMessageContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameModeMessageContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageContainer.GameModeMessageContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageContainer.GameModeMessageContainer_C.GameModeMessageReceived_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameModeMessage        Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGameModeMessageContainer_C::GameModeMessageReceived_Event_1(const struct FGameModeMessage& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageContainer.GameModeMessageContainer_C.GameModeMessageReceived_Event_1"));

	struct
	{
		struct FGameModeMessage        Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageContainer.GameModeMessageContainer_C.ShowMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameModeMessage        Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UGameModeMessageContainer_C::ShowMessage(const struct FGameModeMessage& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageContainer.GameModeMessageContainer_C.ShowMessage"));

	struct
	{
		struct FGameModeMessage        Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageContainer.GameModeMessageContainer_C.BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameModeMessageContainer_C::BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageContainer.GameModeMessageContainer_C.BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageContainer.GameModeMessageContainer_C.OnCinematicStateChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            PreviousStateTag               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCinematicState*         PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FGameplayTag            NewStateTag                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCinematicState*         NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageContainer_C::OnCinematicStateChanged_Event_1(const struct FGameplayTag& PreviousStateTag, class UCinematicState* PreviousState, const struct FGameplayTag& NewStateTag, class UCinematicState* NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageContainer.GameModeMessageContainer_C.OnCinematicStateChanged_Event_1"));

	struct
	{
		struct FGameplayTag            PreviousStateTag;
		class UCinematicState*         PreviousState;
		struct FGameplayTag            NewStateTag;
		class UCinematicState*         NewState;
	} params = {};

	params.PreviousStateTag = PreviousStateTag;
	params.PreviousState = PreviousState;
	params.NewStateTag = NewStateTag;
	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageContainer.GameModeMessageContainer_C.ProcessNewMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameModeMessage        GameModeMessage                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UGameModeMessageContainer_C::ProcessNewMessage(const struct FGameModeMessage& GameModeMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageContainer.GameModeMessageContainer_C.ProcessNewMessage"));

	struct
	{
		struct FGameModeMessage        GameModeMessage;
	} params = {};

	params.GameModeMessage = GameModeMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameModeMessageContainer.GameModeMessageContainer_C.ExecuteUbergraph_GameModeMessageContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeMessageContainer_C::ExecuteUbergraph_GameModeMessageContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameModeMessageContainer.GameModeMessageContainer_C.ExecuteUbergraph_GameModeMessageContainer"));

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
