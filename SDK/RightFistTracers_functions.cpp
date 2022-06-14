// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RightFistTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RightFistTracers.RightFistTracers_C.OnAssemble_RightFistTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URightFistTracers_C::OnAssemble_RightFistTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RightFistTracers.RightFistTracers_C.OnAssemble_RightFistTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RightFistTracers.RightFistTracers_C.ExecuteUbergraph_RightFistTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URightFistTracers_C::ExecuteUbergraph_RightFistTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RightFistTracers.RightFistTracers_C.ExecuteUbergraph_RightFistTracers"));

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
