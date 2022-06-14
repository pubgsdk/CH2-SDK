// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FireDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FireDamage.FireDamage_C.OnAssemble_FireDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFireDamage_C::OnAssemble_FireDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FireDamage.FireDamage_C.OnAssemble_FireDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FireDamage.FireDamage_C.ExecuteUbergraph_FireDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFireDamage_C::ExecuteUbergraph_FireDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FireDamage.FireDamage_C.ExecuteUbergraph_FireDamage"));

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
