// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LeftFistTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LeftFistTracers.LeftFistTracers_C.OnAssemble_LeftFistTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULeftFistTracers_C::OnAssemble_LeftFistTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LeftFistTracers.LeftFistTracers_C.OnAssemble_LeftFistTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LeftFistTracers.LeftFistTracers_C.ExecuteUbergraph_LeftFistTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULeftFistTracers_C::ExecuteUbergraph_LeftFistTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LeftFistTracers.LeftFistTracers_C.ExecuteUbergraph_LeftFistTracers"));

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
