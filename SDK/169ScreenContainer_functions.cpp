// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "169ScreenContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 169ScreenContainer.169ScreenContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U169ScreenContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function 169ScreenContainer.169ScreenContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function 169ScreenContainer.169ScreenContainer_C.SetScaling
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EVerticalAlignment> ScaleBox_Vertical              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHorizontalAlignment> ScaleBox_Horizontal            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EVerticalAlignment> SizeBox_Vertical               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHorizontalAlignment> SizeBoxHorizontal              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void U169ScreenContainer_C::SetScaling(TEnumAsByte<EVerticalAlignment> ScaleBox_Vertical, TEnumAsByte<EHorizontalAlignment> ScaleBox_Horizontal, TEnumAsByte<EVerticalAlignment> SizeBox_Vertical, TEnumAsByte<EHorizontalAlignment> SizeBoxHorizontal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function 169ScreenContainer.169ScreenContainer_C.SetScaling"));

	struct
	{
		TEnumAsByte<EVerticalAlignment> ScaleBox_Vertical;
		TEnumAsByte<EHorizontalAlignment> ScaleBox_Horizontal;
		TEnumAsByte<EVerticalAlignment> SizeBox_Vertical;
		TEnumAsByte<EHorizontalAlignment> SizeBoxHorizontal;
	} params = {};

	params.ScaleBox_Vertical = ScaleBox_Vertical;
	params.ScaleBox_Horizontal = ScaleBox_Horizontal;
	params.SizeBox_Vertical = SizeBox_Vertical;
	params.SizeBoxHorizontal = SizeBoxHorizontal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function 169ScreenContainer.169ScreenContainer_C.ExecuteUbergraph_169ScreenContainer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void U169ScreenContainer_C::ExecuteUbergraph_169ScreenContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function 169ScreenContainer.169ScreenContainer_C.ExecuteUbergraph_169ScreenContainer"));

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
