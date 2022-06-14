// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponMediumShieldProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponMediumShieldProgression.WeaponMediumShieldProgression_C.OnAssemble_WeaponMediumShieldProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponMediumShieldProgression_C::OnAssemble_WeaponMediumShieldProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMediumShieldProgression.WeaponMediumShieldProgression_C.OnAssemble_WeaponMediumShieldProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponMediumShieldProgression.WeaponMediumShieldProgression_C.ExecuteUbergraph_WeaponMediumShieldProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponMediumShieldProgression_C::ExecuteUbergraph_WeaponMediumShieldProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMediumShieldProgression.WeaponMediumShieldProgression_C.ExecuteUbergraph_WeaponMediumShieldProgression"));

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
