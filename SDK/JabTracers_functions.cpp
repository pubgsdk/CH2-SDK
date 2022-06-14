// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "JabTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JabTracers.JabTracers_C.OnAssemble_JabTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJabTracers_C::OnAssemble_JabTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function JabTracers.JabTracers_C.OnAssemble_JabTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function JabTracers.JabTracers_C.ExecuteUbergraph_JabTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UJabTracers_C::ExecuteUbergraph_JabTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function JabTracers.JabTracers_C.ExecuteUbergraph_JabTracers"));

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
