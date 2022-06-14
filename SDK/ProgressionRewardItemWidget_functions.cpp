// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ProgressionRewardItemWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.Get_Image_0_Brush_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UProgressionRewardItemWidget_C::Get_Image_0_Brush_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.Get_Image_0_Brush_1"));

	struct
	{
		struct FSlateBrush             ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UProgressionRewardItemWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.ExecuteUbergraph_ProgressionRewardItemWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UProgressionRewardItemWidget_C::ExecuteUbergraph_ProgressionRewardItemWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.ExecuteUbergraph_ProgressionRewardItemWidget"));

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
