// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponDaneAxeProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDaneAxeProgression.WeaponDaneAxeProgression_C.OnAssemble_WeaponDaneAxeProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponDaneAxeProgression_C::OnAssemble_WeaponDaneAxeProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponDaneAxeProgression.WeaponDaneAxeProgression_C.OnAssemble_WeaponDaneAxeProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponDaneAxeProgression.WeaponDaneAxeProgression_C.ExecuteUbergraph_WeaponDaneAxeProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponDaneAxeProgression_C::ExecuteUbergraph_WeaponDaneAxeProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponDaneAxeProgression.WeaponDaneAxeProgression_C.ExecuteUbergraph_WeaponDaneAxeProgression"));

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
