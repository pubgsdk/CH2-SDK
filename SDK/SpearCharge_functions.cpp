// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpearCharge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpearCharge.SpearCharge_C.OnAssemble_SpearCharge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpearCharge_C::OnAssemble_SpearCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpearCharge.SpearCharge_C.OnAssemble_SpearCharge"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpearCharge.SpearCharge_C.ExecuteUbergraph_SpearCharge
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpearCharge_C::ExecuteUbergraph_SpearCharge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpearCharge.SpearCharge_C.ExecuteUbergraph_SpearCharge"));

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
