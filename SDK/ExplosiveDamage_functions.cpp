// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ExplosiveDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosiveDamage.ExplosiveDamage_C.OnAssemble_ExplosiveDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExplosiveDamage_C::OnAssemble_ExplosiveDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ExplosiveDamage.ExplosiveDamage_C.OnAssemble_ExplosiveDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ExplosiveDamage.ExplosiveDamage_C.ExecuteUbergraph_ExplosiveDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExplosiveDamage_C::ExecuteUbergraph_ExplosiveDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ExplosiveDamage.ExplosiveDamage_C.ExecuteUbergraph_ExplosiveDamage"));

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
