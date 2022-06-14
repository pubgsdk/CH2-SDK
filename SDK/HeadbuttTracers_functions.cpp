// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HeadbuttTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HeadbuttTracers.HeadbuttTracers_C.OnAssemble_HeadbuttTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHeadbuttTracers_C::OnAssemble_HeadbuttTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HeadbuttTracers.HeadbuttTracers_C.OnAssemble_HeadbuttTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HeadbuttTracers.HeadbuttTracers_C.ExecuteUbergraph_HeadbuttTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHeadbuttTracers_C::ExecuteUbergraph_HeadbuttTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HeadbuttTracers.HeadbuttTracers_C.ExecuteUbergraph_HeadbuttTracers"));

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
