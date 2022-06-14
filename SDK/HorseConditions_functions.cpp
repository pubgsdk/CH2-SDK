// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseConditions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseConditions.HorseConditions_C.OnAssemble_HorseConditions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseConditions_C::OnAssemble_HorseConditions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseConditions.HorseConditions_C.OnAssemble_HorseConditions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseConditions.HorseConditions_C.ExecuteUbergraph_HorseConditions
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseConditions_C::ExecuteUbergraph_HorseConditions(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseConditions.HorseConditions_C.ExecuteUbergraph_HorseConditions"));

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
