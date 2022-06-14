// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RankUpWidgetBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RankUpWidgetBase.RankUpWidgetBase_C.StartUnlockMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         Unlocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URankUpWidgetBase_C::StartUnlockMessage(const struct FPrimaryAssetId& Unlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankUpWidgetBase.RankUpWidgetBase_C.StartUnlockMessage"));

	struct
	{
		struct FPrimaryAssetId         Unlocked;
	} params = {};

	params.Unlocked = Unlocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RankUpWidgetBase.RankUpWidgetBase_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void URankUpWidgetBase_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankUpWidgetBase.RankUpWidgetBase_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RankUpWidgetBase.RankUpWidgetBase_C.StartRankMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRankUpMessage          RankMessage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URankUpWidgetBase_C::StartRankMessage(const struct FRankUpMessage& RankMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankUpWidgetBase.RankUpWidgetBase_C.StartRankMessage"));

	struct
	{
		struct FRankUpMessage          RankMessage;
	} params = {};

	params.RankMessage = RankMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RankUpWidgetBase.RankUpWidgetBase_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URankUpWidgetBase_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankUpWidgetBase.RankUpWidgetBase_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RankUpWidgetBase.RankUpWidgetBase_C.ExecuteUbergraph_RankUpWidgetBase
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URankUpWidgetBase_C::ExecuteUbergraph_RankUpWidgetBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankUpWidgetBase.RankUpWidgetBase_C.ExecuteUbergraph_RankUpWidgetBase"));

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


// Function RankUpWidgetBase.RankUpWidgetBase_C.MessageFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URankUpWidgetBase_C::MessageFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankUpWidgetBase.RankUpWidgetBase_C.MessageFinished__DelegateSignature"));

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
