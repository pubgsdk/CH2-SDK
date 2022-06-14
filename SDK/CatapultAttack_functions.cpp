// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CatapultAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CatapultAttack.CatapultAttack_C.OnAssemble_CatapultAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCatapultAttack_C::OnAssemble_CatapultAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CatapultAttack.CatapultAttack_C.OnAssemble_CatapultAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CatapultAttack.CatapultAttack_C.ExecuteUbergraph_CatapultAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCatapultAttack_C::ExecuteUbergraph_CatapultAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CatapultAttack.CatapultAttack_C.ExecuteUbergraph_CatapultAttack"));

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
