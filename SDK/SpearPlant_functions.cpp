// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpearPlant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpearPlant.SpearPlant_C.OnAssemble_SpearPlant
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpearPlant_C::OnAssemble_SpearPlant()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpearPlant.SpearPlant_C.OnAssemble_SpearPlant"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpearPlant.SpearPlant_C.ExecuteUbergraph_SpearPlant
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpearPlant_C::ExecuteUbergraph_SpearPlant(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpearPlant.SpearPlant_C.ExecuteUbergraph_SpearPlant"));

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
