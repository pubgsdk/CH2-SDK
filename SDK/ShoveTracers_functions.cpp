// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ShoveTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShoveTracers.ShoveTracers_C.OnAssemble_ShoveTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UShoveTracers_C::OnAssemble_ShoveTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ShoveTracers.ShoveTracers_C.OnAssemble_ShoveTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ShoveTracers.ShoveTracers_C.ExecuteUbergraph_ShoveTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UShoveTracers_C::ExecuteUbergraph_ShoveTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ShoveTracers.ShoveTracers_C.ExecuteUbergraph_ShoveTracers"));

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
