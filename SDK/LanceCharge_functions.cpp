// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LanceCharge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanceCharge.LanceCharge_C.OnAssemble_LanceCharge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULanceCharge_C::OnAssemble_LanceCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LanceCharge.LanceCharge_C.OnAssemble_LanceCharge"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LanceCharge.LanceCharge_C.ExecuteUbergraph_LanceCharge
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULanceCharge_C::ExecuteUbergraph_LanceCharge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LanceCharge.LanceCharge_C.ExecuteUbergraph_LanceCharge"));

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
