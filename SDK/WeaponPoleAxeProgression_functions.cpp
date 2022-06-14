// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponPoleAxeProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponPoleAxeProgression.WeaponPoleAxeProgression_C.OnAssemble_WeaponPoleAxeProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponPoleAxeProgression_C::OnAssemble_WeaponPoleAxeProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponPoleAxeProgression.WeaponPoleAxeProgression_C.OnAssemble_WeaponPoleAxeProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponPoleAxeProgression.WeaponPoleAxeProgression_C.ExecuteUbergraph_WeaponPoleAxeProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponPoleAxeProgression_C::ExecuteUbergraph_WeaponPoleAxeProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponPoleAxeProgression.WeaponPoleAxeProgression_C.ExecuteUbergraph_WeaponPoleAxeProgression"));

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
