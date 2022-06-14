// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseDamage.HorseDamage_C.OnAssemble_HorseDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseDamage_C::OnAssemble_HorseDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseDamage.HorseDamage_C.OnAssemble_HorseDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseDamage.HorseDamage_C.ExecuteUbergraph_HorseDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseDamage_C::ExecuteUbergraph_HorseDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseDamage.HorseDamage_C.ExecuteUbergraph_HorseDamage"));

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
