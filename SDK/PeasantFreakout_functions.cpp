// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PeasantFreakout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PeasantFreakout.PeasantFreakout_C.CanBeCancelled
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           bIsCancelIntoParry             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPeasantFreakout_C::CanBeCancelled(bool bIsCancelIntoParry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakout.PeasantFreakout_C.CanBeCancelled"));

	struct
	{
		bool                           bIsCancelIntoParry;
		bool                           ReturnValue;
	} params = {};

	params.bIsCancelIntoParry = bIsCancelIntoParry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PeasantFreakout.PeasantFreakout_C.OnAssemble_PeasantFreakout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPeasantFreakout_C::OnAssemble_PeasantFreakout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakout.PeasantFreakout_C.OnAssemble_PeasantFreakout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PeasantFreakout.PeasantFreakout_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPeasantFreakout_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakout.PeasantFreakout_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PeasantFreakout.PeasantFreakout_C.ExecuteUbergraph_PeasantFreakout
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPeasantFreakout_C::ExecuteUbergraph_PeasantFreakout(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PeasantFreakout.PeasantFreakout_C.ExecuteUbergraph_PeasantFreakout"));

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
