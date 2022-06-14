// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BeeStingDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BeeStingDamage.BeeStingDamage_C.OnAssemble_BeeStingDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBeeStingDamage_C::OnAssemble_BeeStingDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BeeStingDamage.BeeStingDamage_C.OnAssemble_BeeStingDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BeeStingDamage.BeeStingDamage_C.ExecuteUbergraph_BeeStingDamage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBeeStingDamage_C::ExecuteUbergraph_BeeStingDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BeeStingDamage.BeeStingDamage_C.ExecuteUbergraph_BeeStingDamage"));

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
