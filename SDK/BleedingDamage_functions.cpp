// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BleedingDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BleedingDamage.BleedingDamage_C.OnAssemble_BleedingDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBleedingDamage_C::OnAssemble_BleedingDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BleedingDamage.BleedingDamage_C.OnAssemble_BleedingDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BleedingDamage.BleedingDamage_C.ExecuteUbergraph_BleedingDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBleedingDamage_C::ExecuteUbergraph_BleedingDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BleedingDamage.BleedingDamage_C.ExecuteUbergraph_BleedingDamage"));

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
