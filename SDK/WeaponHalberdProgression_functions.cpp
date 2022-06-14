// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponHalberdProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponHalberdProgression.WeaponHalberdProgression_C.OnAssemble_WeaponHalberdProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponHalberdProgression_C::OnAssemble_WeaponHalberdProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHalberdProgression.WeaponHalberdProgression_C.OnAssemble_WeaponHalberdProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponHalberdProgression.WeaponHalberdProgression_C.ExecuteUbergraph_WeaponHalberdProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponHalberdProgression_C::ExecuteUbergraph_WeaponHalberdProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHalberdProgression.WeaponHalberdProgression_C.ExecuteUbergraph_WeaponHalberdProgression"));

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
