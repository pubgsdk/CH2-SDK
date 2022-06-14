// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MS_KnockbackSmall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MS_KnockbackSmall.MS_KnockbackSmall_C.OnAssemble_MS_KnockbackSmall
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_KnockbackSmall_C::OnAssemble_MS_KnockbackSmall()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_KnockbackSmall.MS_KnockbackSmall_C.OnAssemble_MS_KnockbackSmall"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_KnockbackSmall.MS_KnockbackSmall_C.ExecuteUbergraph_MS_KnockbackSmall
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMS_KnockbackSmall_C::ExecuteUbergraph_MS_KnockbackSmall(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_KnockbackSmall.MS_KnockbackSmall_C.ExecuteUbergraph_MS_KnockbackSmall"));

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
