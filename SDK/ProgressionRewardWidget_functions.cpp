// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ProgressionRewardWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProgressionRewardWidget.ProgressionRewardWidget_C.GetSpacers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USpacer*                 Spacer1                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USpacer*                 Spacer2                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USpacer*                 Spacer3                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UProgressionRewardWidget_C::GetSpacers(class USpacer** Spacer1, class USpacer** Spacer2, class USpacer** Spacer3)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ProgressionRewardWidget.ProgressionRewardWidget_C.GetSpacers"));

	struct
	{
		class USpacer*                 Spacer1;
		class USpacer*                 Spacer2;
		class USpacer*                 Spacer3;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Spacer1 != nullptr)
		*Spacer1 = params.Spacer1;
	if (Spacer2 != nullptr)
		*Spacer2 = params.Spacer2;
	if (Spacer3 != nullptr)
		*Spacer3 = params.Spacer3;
}


// Function ProgressionRewardWidget.ProgressionRewardWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UProgressionRewardWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ProgressionRewardWidget.ProgressionRewardWidget_C.PreConstruct"));

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


// Function ProgressionRewardWidget.ProgressionRewardWidget_C.Initialize Widget With Rewards
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FVirtualGoodReward> VirtualGoodRewards             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UProgressionRewardWidget_C::Initialize_Widget_With_Rewards(class ATBLPlayerState* PlayerState, TArray<struct FVirtualGoodReward> VirtualGoodRewards)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ProgressionRewardWidget.ProgressionRewardWidget_C.Initialize Widget With Rewards"));

	struct
	{
		class ATBLPlayerState*         PlayerState;
		TArray<struct FVirtualGoodReward> VirtualGoodRewards;
	} params = {};

	params.PlayerState = PlayerState;
	params.VirtualGoodRewards = VirtualGoodRewards;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ProgressionRewardWidget.ProgressionRewardWidget_C.SetHorizontalAlignment
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> HorizontalAlignment            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UProgressionRewardWidget_C::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> HorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ProgressionRewardWidget.ProgressionRewardWidget_C.SetHorizontalAlignment"));

	struct
	{
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
	} params = {};

	params.HorizontalAlignment = HorizontalAlignment;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ProgressionRewardWidget.ProgressionRewardWidget_C.ExecuteUbergraph_ProgressionRewardWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UProgressionRewardWidget_C::ExecuteUbergraph_ProgressionRewardWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ProgressionRewardWidget.ProgressionRewardWidget_C.ExecuteUbergraph_ProgressionRewardWidget"));

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
