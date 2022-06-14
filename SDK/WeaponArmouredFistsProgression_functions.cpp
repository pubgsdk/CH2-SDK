// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponArmouredFistsProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponArmouredFistsProgression.WeaponArmouredFistsProgression_C.OnAssemble_WeaponArmouredFistsProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponArmouredFistsProgression_C::OnAssemble_WeaponArmouredFistsProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponArmouredFistsProgression.WeaponArmouredFistsProgression_C.OnAssemble_WeaponArmouredFistsProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponArmouredFistsProgression.WeaponArmouredFistsProgression_C.ExecuteUbergraph_WeaponArmouredFistsProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponArmouredFistsProgression_C::ExecuteUbergraph_WeaponArmouredFistsProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponArmouredFistsProgression.WeaponArmouredFistsProgression_C.ExecuteUbergraph_WeaponArmouredFistsProgression"));

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
