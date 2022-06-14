// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponKnifeProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponKnifeProgression.WeaponKnifeProgression_C.OnAssemble_WeaponKnifeProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponKnifeProgression_C::OnAssemble_WeaponKnifeProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponKnifeProgression.WeaponKnifeProgression_C.OnAssemble_WeaponKnifeProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponKnifeProgression.WeaponKnifeProgression_C.ExecuteUbergraph_WeaponKnifeProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponKnifeProgression_C::ExecuteUbergraph_WeaponKnifeProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponKnifeProgression.WeaponKnifeProgression_C.ExecuteUbergraph_WeaponKnifeProgression"));

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
