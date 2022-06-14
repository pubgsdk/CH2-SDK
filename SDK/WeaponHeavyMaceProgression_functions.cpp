// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponHeavyMaceProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponHeavyMaceProgression.WeaponHeavyMaceProgression_C.OnAssemble_WeaponHeavyMaceProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponHeavyMaceProgression_C::OnAssemble_WeaponHeavyMaceProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHeavyMaceProgression.WeaponHeavyMaceProgression_C.OnAssemble_WeaponHeavyMaceProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponHeavyMaceProgression.WeaponHeavyMaceProgression_C.ExecuteUbergraph_WeaponHeavyMaceProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponHeavyMaceProgression_C::ExecuteUbergraph_WeaponHeavyMaceProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHeavyMaceProgression.WeaponHeavyMaceProgression_C.ExecuteUbergraph_WeaponHeavyMaceProgression"));

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
