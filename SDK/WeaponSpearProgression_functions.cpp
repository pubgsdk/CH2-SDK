// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponSpearProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponSpearProgression.WeaponSpearProgression_C.OnAssemble_WeaponSpearProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponSpearProgression_C::OnAssemble_WeaponSpearProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponSpearProgression.WeaponSpearProgression_C.OnAssemble_WeaponSpearProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponSpearProgression.WeaponSpearProgression_C.ExecuteUbergraph_WeaponSpearProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponSpearProgression_C::ExecuteUbergraph_WeaponSpearProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponSpearProgression.WeaponSpearProgression_C.ExecuteUbergraph_WeaponSpearProgression"));

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
