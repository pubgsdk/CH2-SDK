// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MS_KnockbackLarge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MS_KnockbackLarge.MS_KnockbackLarge_C.OnAssemble_MS_KnockbackLarge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_KnockbackLarge_C::OnAssemble_MS_KnockbackLarge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_KnockbackLarge.MS_KnockbackLarge_C.OnAssemble_MS_KnockbackLarge"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_KnockbackLarge.MS_KnockbackLarge_C.ExecuteUbergraph_MS_KnockbackLarge
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMS_KnockbackLarge_C::ExecuteUbergraph_MS_KnockbackLarge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_KnockbackLarge.MS_KnockbackLarge_C.ExecuteUbergraph_MS_KnockbackLarge"));

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
