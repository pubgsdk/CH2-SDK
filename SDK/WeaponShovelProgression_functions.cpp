// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponShovelProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponShovelProgression.WeaponShovelProgression_C.OnAssemble_WeaponShovelProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponShovelProgression_C::OnAssemble_WeaponShovelProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponShovelProgression.WeaponShovelProgression_C.OnAssemble_WeaponShovelProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponShovelProgression.WeaponShovelProgression_C.ExecuteUbergraph_WeaponShovelProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponShovelProgression_C::ExecuteUbergraph_WeaponShovelProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponShovelProgression.WeaponShovelProgression_C.ExecuteUbergraph_WeaponShovelProgression"));

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
