// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FallDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FallDamage.FallDamage_C.OnAssemble_FallDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFallDamage_C::OnAssemble_FallDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FallDamage.FallDamage_C.OnAssemble_FallDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FallDamage.FallDamage_C.ExecuteUbergraph_FallDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFallDamage_C::ExecuteUbergraph_FallDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FallDamage.FallDamage_C.ExecuteUbergraph_FallDamage"));

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
