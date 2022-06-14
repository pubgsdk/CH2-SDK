// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TrapDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TrapDamage.TrapDamage_C.OnAssemble_TrapDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTrapDamage_C::OnAssemble_TrapDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapDamage.TrapDamage_C.OnAssemble_TrapDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TrapDamage.TrapDamage_C.ExecuteUbergraph_TrapDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrapDamage_C::ExecuteUbergraph_TrapDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TrapDamage.TrapDamage_C.ExecuteUbergraph_TrapDamage"));

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
