// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponPickAxeProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponPickAxeProgression.WeaponPickAxeProgression_C.OnAssemble_WeaponPickAxeProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponPickAxeProgression_C::OnAssemble_WeaponPickAxeProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponPickAxeProgression.WeaponPickAxeProgression_C.OnAssemble_WeaponPickAxeProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponPickAxeProgression.WeaponPickAxeProgression_C.ExecuteUbergraph_WeaponPickAxeProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponPickAxeProgression_C::ExecuteUbergraph_WeaponPickAxeProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponPickAxeProgression.WeaponPickAxeProgression_C.ExecuteUbergraph_WeaponPickAxeProgression"));

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
