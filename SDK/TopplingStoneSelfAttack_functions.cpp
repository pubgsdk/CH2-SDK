// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TopplingStoneSelfAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TopplingStoneSelfAttack.TopplingStoneSelfAttack_C.OnAssemble_TopplingStoneSelfAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTopplingStoneSelfAttack_C::OnAssemble_TopplingStoneSelfAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TopplingStoneSelfAttack.TopplingStoneSelfAttack_C.OnAssemble_TopplingStoneSelfAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TopplingStoneSelfAttack.TopplingStoneSelfAttack_C.ExecuteUbergraph_TopplingStoneSelfAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTopplingStoneSelfAttack_C::ExecuteUbergraph_TopplingStoneSelfAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TopplingStoneSelfAttack.TopplingStoneSelfAttack_C.ExecuteUbergraph_TopplingStoneSelfAttack"));

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
