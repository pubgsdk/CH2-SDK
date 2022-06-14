// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FistSpecial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FistSpecial.FistSpecial_C.OnAssemble_FistSpecial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFistSpecial_C::OnAssemble_FistSpecial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FistSpecial.FistSpecial_C.OnAssemble_FistSpecial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FistSpecial.FistSpecial_C.ExecuteUbergraph_FistSpecial
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFistSpecial_C::ExecuteUbergraph_FistSpecial(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FistSpecial.FistSpecial_C.ExecuteUbergraph_FistSpecial"));

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
