// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StandardDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandardDamage.StandardDamage_C.OnAssemble_StandardDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStandardDamage_C::OnAssemble_StandardDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StandardDamage.StandardDamage_C.OnAssemble_StandardDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StandardDamage.StandardDamage_C.ExecuteUbergraph_StandardDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UStandardDamage_C::ExecuteUbergraph_StandardDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StandardDamage.StandardDamage_C.ExecuteUbergraph_StandardDamage"));

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
