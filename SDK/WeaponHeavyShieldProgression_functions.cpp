// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponHeavyShieldProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponHeavyShieldProgression.WeaponHeavyShieldProgression_C.OnAssemble_WeaponHeavyShieldProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponHeavyShieldProgression_C::OnAssemble_WeaponHeavyShieldProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHeavyShieldProgression.WeaponHeavyShieldProgression_C.OnAssemble_WeaponHeavyShieldProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponHeavyShieldProgression.WeaponHeavyShieldProgression_C.ExecuteUbergraph_WeaponHeavyShieldProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponHeavyShieldProgression_C::ExecuteUbergraph_WeaponHeavyShieldProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHeavyShieldProgression.WeaponHeavyShieldProgression_C.ExecuteUbergraph_WeaponHeavyShieldProgression"));

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
