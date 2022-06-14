// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BatteringRamCharge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BatteringRamCharge.BatteringRamCharge_C.OnAssemble_BatteringRamCharge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBatteringRamCharge_C::OnAssemble_BatteringRamCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BatteringRamCharge.BatteringRamCharge_C.OnAssemble_BatteringRamCharge"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BatteringRamCharge.BatteringRamCharge_C.ExecuteUbergraph_BatteringRamCharge
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBatteringRamCharge_C::ExecuteUbergraph_BatteringRamCharge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BatteringRamCharge.BatteringRamCharge_C.ExecuteUbergraph_BatteringRamCharge"));

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
