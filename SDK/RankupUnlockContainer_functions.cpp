// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RankupUnlockContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RankupUnlockContainer.RankupUnlockContainer_C.StartRankMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRankUpMessage          RankMessage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URankupUnlockContainer_C::StartRankMessage(const struct FRankUpMessage& RankMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankupUnlockContainer.RankupUnlockContainer_C.StartRankMessage"));

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


// Function RankupUnlockContainer.RankupUnlockContainer_C.StartUnlockMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         Unlocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URankupUnlockContainer_C::StartUnlockMessage(const struct FPrimaryAssetId& Unlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankupUnlockContainer.RankupUnlockContainer_C.StartUnlockMessage"));

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


// Function RankupUnlockContainer.RankupUnlockContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URankupUnlockContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankupUnlockContainer.RankupUnlockContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RankupUnlockContainer.RankupUnlockContainer_C.AddWidgetToList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 NewWidget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URankupUnlockContainer_C::AddWidgetToList(class UWidget* NewWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankupUnlockContainer.RankupUnlockContainer_C.AddWidgetToList"));

	struct
	{
		class UWidget*                 NewWidget;
	} params = {};

	params.NewWidget = NewWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RankupUnlockContainer.RankupUnlockContainer_C.ExecuteUbergraph_RankupUnlockContainer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URankupUnlockContainer_C::ExecuteUbergraph_RankupUnlockContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankupUnlockContainer.RankupUnlockContainer_C.ExecuteUbergraph_RankupUnlockContainer"));

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
