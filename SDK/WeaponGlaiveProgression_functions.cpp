// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponGlaiveProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponGlaiveProgression.WeaponGlaiveProgression_C.OnAssemble_WeaponGlaiveProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponGlaiveProgression_C::OnAssemble_WeaponGlaiveProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponGlaiveProgression.WeaponGlaiveProgression_C.OnAssemble_WeaponGlaiveProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponGlaiveProgression.WeaponGlaiveProgression_C.ExecuteUbergraph_WeaponGlaiveProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponGlaiveProgression_C::ExecuteUbergraph_WeaponGlaiveProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponGlaiveProgression.WeaponGlaiveProgression_C.ExecuteUbergraph_WeaponGlaiveProgression"));

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
