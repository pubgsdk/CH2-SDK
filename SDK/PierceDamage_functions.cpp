// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PierceDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PierceDamage.PierceDamage_C.OnAssemble_PierceDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPierceDamage_C::OnAssemble_PierceDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PierceDamage.PierceDamage_C.OnAssemble_PierceDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PierceDamage.PierceDamage_C.ExecuteUbergraph_PierceDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPierceDamage_C::ExecuteUbergraph_PierceDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PierceDamage.PierceDamage_C.ExecuteUbergraph_PierceDamage"));

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
