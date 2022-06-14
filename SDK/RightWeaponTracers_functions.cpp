// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RightWeaponTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RightWeaponTracers.RightWeaponTracers_C.OnAssemble_RightWeaponTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URightWeaponTracers_C::OnAssemble_RightWeaponTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RightWeaponTracers.RightWeaponTracers_C.OnAssemble_RightWeaponTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RightWeaponTracers.RightWeaponTracers_C.ExecuteUbergraph_RightWeaponTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URightWeaponTracers_C::ExecuteUbergraph_RightWeaponTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RightWeaponTracers.RightWeaponTracers_C.ExecuteUbergraph_RightWeaponTracers"));

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
