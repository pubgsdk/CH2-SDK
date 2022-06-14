// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_HighlandSword_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_HighlandSword.Weapon_HighlandSword_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeapon_HighlandSword_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_HighlandSword.Weapon_HighlandSword_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Weapon_HighlandSword.Weapon_HighlandSword_C.ExecuteUbergraph_Weapon_HighlandSword
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeapon_HighlandSword_C::ExecuteUbergraph_Weapon_HighlandSword(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_HighlandSword.Weapon_HighlandSword_C.ExecuteUbergraph_Weapon_HighlandSword"));

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
