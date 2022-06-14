// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RangedDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RangedDamage.RangedDamage_C.OnAssemble_RangedDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URangedDamage_C::OnAssemble_RangedDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedDamage.RangedDamage_C.OnAssemble_RangedDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RangedDamage.RangedDamage_C.ExecuteUbergraph_RangedDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URangedDamage_C::ExecuteUbergraph_RangedDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedDamage.RangedDamage_C.ExecuteUbergraph_RangedDamage"));

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
