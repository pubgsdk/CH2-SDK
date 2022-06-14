// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LeftWeaponTracers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LeftWeaponTracers.LeftWeaponTracers_C.OnAssemble_LeftWeaponTracers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULeftWeaponTracers_C::OnAssemble_LeftWeaponTracers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LeftWeaponTracers.LeftWeaponTracers_C.OnAssemble_LeftWeaponTracers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LeftWeaponTracers.LeftWeaponTracers_C.ExecuteUbergraph_LeftWeaponTracers
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULeftWeaponTracers_C::ExecuteUbergraph_LeftWeaponTracers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LeftWeaponTracers.LeftWeaponTracers_C.ExecuteUbergraph_LeftWeaponTracers"));

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
