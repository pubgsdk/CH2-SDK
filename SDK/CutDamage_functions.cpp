// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CutDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CutDamage.CutDamage_C.OnAssemble_CutDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCutDamage_C::OnAssemble_CutDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CutDamage.CutDamage_C.OnAssemble_CutDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CutDamage.CutDamage_C.ExecuteUbergraph_CutDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCutDamage_C::ExecuteUbergraph_CutDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CutDamage.CutDamage_C.ExecuteUbergraph_CutDamage"));

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
