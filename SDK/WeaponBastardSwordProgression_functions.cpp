// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponBastardSwordProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponBastardSwordProgression.WeaponBastardSwordProgression_C.OnAssemble_WeaponBastardSwordProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponBastardSwordProgression_C::OnAssemble_WeaponBastardSwordProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponBastardSwordProgression.WeaponBastardSwordProgression_C.OnAssemble_WeaponBastardSwordProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponBastardSwordProgression.WeaponBastardSwordProgression_C.ExecuteUbergraph_WeaponBastardSwordProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponBastardSwordProgression_C::ExecuteUbergraph_WeaponBastardSwordProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponBastardSwordProgression.WeaponBastardSwordProgression_C.ExecuteUbergraph_WeaponBastardSwordProgression"));

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
