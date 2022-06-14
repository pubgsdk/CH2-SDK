// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SiegeDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SiegeDamage.SiegeDamage_C.OnAssemble_SiegeDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USiegeDamage_C::OnAssemble_SiegeDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeDamage.SiegeDamage_C.OnAssemble_SiegeDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SiegeDamage.SiegeDamage_C.ExecuteUbergraph_SiegeDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USiegeDamage_C::ExecuteUbergraph_SiegeDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SiegeDamage.SiegeDamage_C.ExecuteUbergraph_SiegeDamage"));

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
