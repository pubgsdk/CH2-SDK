// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BluntDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BluntDamage.BluntDamage_C.OnAssemble_BluntDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBluntDamage_C::OnAssemble_BluntDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BluntDamage.BluntDamage_C.OnAssemble_BluntDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BluntDamage.BluntDamage_C.ExecuteUbergraph_BluntDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBluntDamage_C::ExecuteUbergraph_BluntDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BluntDamage.BluntDamage_C.ExecuteUbergraph_BluntDamage"));

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
