// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_Greatsword_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Greatsword.Weapon_Greatsword_C.OnInitialize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeapon_Greatsword_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_Greatsword.Weapon_Greatsword_C.OnInitialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Weapon_Greatsword.Weapon_Greatsword_C.ExecuteUbergraph_Weapon_Greatsword
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeapon_Greatsword_C::ExecuteUbergraph_Weapon_Greatsword(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Weapon_Greatsword.Weapon_Greatsword_C.ExecuteUbergraph_Weapon_Greatsword"));

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
