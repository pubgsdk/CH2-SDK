// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SprintCharge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SprintCharge.SprintCharge_C.OnAssemble_SprintCharge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USprintCharge_C::OnAssemble_SprintCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SprintCharge.SprintCharge_C.OnAssemble_SprintCharge"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SprintCharge.SprintCharge_C.ExecuteUbergraph_SprintCharge
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USprintCharge_C::ExecuteUbergraph_SprintCharge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SprintCharge.SprintCharge_C.ExecuteUbergraph_SprintCharge"));

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
