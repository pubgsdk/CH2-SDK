// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TackleTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TackleTracers.TackleTracers_C.OnAssemble_TackleTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTackleTracers_C::OnAssemble_TackleTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TackleTracers.TackleTracers_C.OnAssemble_TackleTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TackleTracers.TackleTracers_C.ExecuteUbergraph_TackleTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTackleTracers_C::ExecuteUbergraph_TackleTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TackleTracers.TackleTracers_C.ExecuteUbergraph_TackleTracers"));

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
