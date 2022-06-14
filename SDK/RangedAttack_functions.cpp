// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RangedAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RangedAttack.RangedAttack_C.OnAssemble_RangedAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URangedAttack_C::OnAssemble_RangedAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedAttack.RangedAttack_C.OnAssemble_RangedAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RangedAttack.RangedAttack_C.ExecuteUbergraph_RangedAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URangedAttack_C::ExecuteUbergraph_RangedAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RangedAttack.RangedAttack_C.ExecuteUbergraph_RangedAttack"));

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
