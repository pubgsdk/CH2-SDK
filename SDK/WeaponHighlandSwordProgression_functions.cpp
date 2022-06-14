// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponHighlandSwordProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponHighlandSwordProgression.WeaponHighlandSwordProgression_C.OnAssemble_WeaponHighlandSwordProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponHighlandSwordProgression_C::OnAssemble_WeaponHighlandSwordProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHighlandSwordProgression.WeaponHighlandSwordProgression_C.OnAssemble_WeaponHighlandSwordProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponHighlandSwordProgression.WeaponHighlandSwordProgression_C.ExecuteUbergraph_WeaponHighlandSwordProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponHighlandSwordProgression_C::ExecuteUbergraph_WeaponHighlandSwordProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHighlandSwordProgression.WeaponHighlandSwordProgression_C.ExecuteUbergraph_WeaponHighlandSwordProgression"));

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
