// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_DaneAxe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_DaneAxe.Weapon_DaneAxe_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeapon_DaneAxe_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_DaneAxe.Weapon_DaneAxe_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Weapon_DaneAxe.Weapon_DaneAxe_C.ExecuteUbergraph_Weapon_DaneAxe
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeapon_DaneAxe_C::ExecuteUbergraph_Weapon_DaneAxe(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_DaneAxe.Weapon_DaneAxe_C.ExecuteUbergraph_Weapon_DaneAxe"));

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
