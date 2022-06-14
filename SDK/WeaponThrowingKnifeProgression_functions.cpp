// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponThrowingKnifeProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C.OnAssemble_WeaponThrowingKnifeProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponThrowingKnifeProgression_C::OnAssemble_WeaponThrowingKnifeProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C.OnAssemble_WeaponThrowingKnifeProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C.ExecuteUbergraph_WeaponThrowingKnifeProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponThrowingKnifeProgression_C::ExecuteUbergraph_WeaponThrowingKnifeProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponThrowingKnifeProgression.WeaponThrowingKnifeProgression_C.ExecuteUbergraph_WeaponThrowingKnifeProgression"));

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
