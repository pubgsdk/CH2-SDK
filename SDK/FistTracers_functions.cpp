// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FistTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FistTracers.FistTracers_C.OnAssemble_FistTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFistTracers_C::OnAssemble_FistTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FistTracers.FistTracers_C.OnAssemble_FistTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FistTracers.FistTracers_C.ExecuteUbergraph_FistTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFistTracers_C::ExecuteUbergraph_FistTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FistTracers.FistTracers_C.ExecuteUbergraph_FistTracers"));

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
