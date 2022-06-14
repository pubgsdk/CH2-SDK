// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseChargeTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseChargeTracers.HorseChargeTracers_C.OnAssemble_HorseChargeTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseChargeTracers_C::OnAssemble_HorseChargeTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseChargeTracers.HorseChargeTracers_C.OnAssemble_HorseChargeTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseChargeTracers.HorseChargeTracers_C.ExecuteUbergraph_HorseChargeTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseChargeTracers_C::ExecuteUbergraph_HorseChargeTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseChargeTracers.HorseChargeTracers_C.ExecuteUbergraph_HorseChargeTracers"));

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
