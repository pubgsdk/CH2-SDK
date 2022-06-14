// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponThrowingAxeProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponThrowingAxeProgression.WeaponThrowingAxeProgression_C.OnAssemble_WeaponThrowingAxeProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponThrowingAxeProgression_C::OnAssemble_WeaponThrowingAxeProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponThrowingAxeProgression.WeaponThrowingAxeProgression_C.OnAssemble_WeaponThrowingAxeProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponThrowingAxeProgression.WeaponThrowingAxeProgression_C.ExecuteUbergraph_WeaponThrowingAxeProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponThrowingAxeProgression_C::ExecuteUbergraph_WeaponThrowingAxeProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponThrowingAxeProgression.WeaponThrowingAxeProgression_C.ExecuteUbergraph_WeaponThrowingAxeProgression"));

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
