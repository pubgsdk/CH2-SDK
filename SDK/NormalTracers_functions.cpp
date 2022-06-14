// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NormalTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NormalTracers.NormalTracers_C.OnAssemble_NormalTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNormalTracers_C::OnAssemble_NormalTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NormalTracers.NormalTracers_C.OnAssemble_NormalTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NormalTracers.NormalTracers_C.ExecuteUbergraph_NormalTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNormalTracers_C::ExecuteUbergraph_NormalTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NormalTracers.NormalTracers_C.ExecuteUbergraph_NormalTracers"));

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
