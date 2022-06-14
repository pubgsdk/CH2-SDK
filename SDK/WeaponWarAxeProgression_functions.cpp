// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponWarAxeProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponWarAxeProgression.WeaponWarAxeProgression_C.OnAssemble_WeaponWarAxeProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponWarAxeProgression_C::OnAssemble_WeaponWarAxeProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponWarAxeProgression.WeaponWarAxeProgression_C.OnAssemble_WeaponWarAxeProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponWarAxeProgression.WeaponWarAxeProgression_C.ExecuteUbergraph_WeaponWarAxeProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponWarAxeProgression_C::ExecuteUbergraph_WeaponWarAxeProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponWarAxeProgression.WeaponWarAxeProgression_C.ExecuteUbergraph_WeaponWarAxeProgression"));

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
