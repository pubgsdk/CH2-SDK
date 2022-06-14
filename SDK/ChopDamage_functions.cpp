// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ChopDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChopDamage.ChopDamage_C.OnAssemble_ChopDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChopDamage_C::OnAssemble_ChopDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChopDamage.ChopDamage_C.OnAssemble_ChopDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChopDamage.ChopDamage_C.ExecuteUbergraph_ChopDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChopDamage_C::ExecuteUbergraph_ChopDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChopDamage.ChopDamage_C.ExecuteUbergraph_ChopDamage"));

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
