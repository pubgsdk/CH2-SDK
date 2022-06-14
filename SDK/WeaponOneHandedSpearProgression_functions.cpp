// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponOneHandedSpearProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponOneHandedSpearProgression.WeaponOneHandedSpearProgression_C.OnAssemble_WeaponOneHandedSpearProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponOneHandedSpearProgression_C::OnAssemble_WeaponOneHandedSpearProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponOneHandedSpearProgression.WeaponOneHandedSpearProgression_C.OnAssemble_WeaponOneHandedSpearProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponOneHandedSpearProgression.WeaponOneHandedSpearProgression_C.ExecuteUbergraph_WeaponOneHandedSpearProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponOneHandedSpearProgression_C::ExecuteUbergraph_WeaponOneHandedSpearProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponOneHandedSpearProgression.WeaponOneHandedSpearProgression_C.ExecuteUbergraph_WeaponOneHandedSpearProgression"));

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
