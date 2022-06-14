// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponSwordProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponSwordProgression.WeaponSwordProgression_C.OnAssemble_WeaponSwordProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSwordProgression_C::OnAssemble_WeaponSwordProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponSwordProgression.WeaponSwordProgression_C.OnAssemble_WeaponSwordProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponSwordProgression.WeaponSwordProgression_C.ExecuteUbergraph_WeaponSwordProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponSwordProgression_C::ExecuteUbergraph_WeaponSwordProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponSwordProgression.WeaponSwordProgression_C.ExecuteUbergraph_WeaponSwordProgression"));

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
