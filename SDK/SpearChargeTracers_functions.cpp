// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpearChargeTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpearChargeTracers.SpearChargeTracers_C.OnAssemble_SpearChargeTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpearChargeTracers_C::OnAssemble_SpearChargeTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpearChargeTracers.SpearChargeTracers_C.OnAssemble_SpearChargeTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpearChargeTracers.SpearChargeTracers_C.ExecuteUbergraph_SpearChargeTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpearChargeTracers_C::ExecuteUbergraph_SpearChargeTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpearChargeTracers.SpearChargeTracers_C.ExecuteUbergraph_SpearChargeTracers"));

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
