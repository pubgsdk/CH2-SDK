// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FireDOTDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FireDOTDamage.FireDOTDamage_C.OnAssemble_FireDOTDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFireDOTDamage_C::OnAssemble_FireDOTDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FireDOTDamage.FireDOTDamage_C.OnAssemble_FireDOTDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FireDOTDamage.FireDOTDamage_C.ExecuteUbergraph_FireDOTDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFireDOTDamage_C::ExecuteUbergraph_FireDOTDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FireDOTDamage.FireDOTDamage_C.ExecuteUbergraph_FireDOTDamage"));

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
