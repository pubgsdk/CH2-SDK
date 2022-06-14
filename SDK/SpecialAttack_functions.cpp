// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpecialAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpecialAttack.SpecialAttack_C.OnAssemble_SpecialAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpecialAttack_C::OnAssemble_SpecialAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialAttack.SpecialAttack_C.OnAssemble_SpecialAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialAttack.SpecialAttack_C.ExecuteUbergraph_SpecialAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpecialAttack_C::ExecuteUbergraph_SpecialAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialAttack.SpecialAttack_C.ExecuteUbergraph_SpecialAttack"));

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
