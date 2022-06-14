// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponThrowingMalletProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponThrowingMalletProgression.WeaponThrowingMalletProgression_C.OnAssemble_WeaponThrowingMalletProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponThrowingMalletProgression_C::OnAssemble_WeaponThrowingMalletProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponThrowingMalletProgression.WeaponThrowingMalletProgression_C.OnAssemble_WeaponThrowingMalletProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponThrowingMalletProgression.WeaponThrowingMalletProgression_C.ExecuteUbergraph_WeaponThrowingMalletProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponThrowingMalletProgression_C::ExecuteUbergraph_WeaponThrowingMalletProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponThrowingMalletProgression.WeaponThrowingMalletProgression_C.ExecuteUbergraph_WeaponThrowingMalletProgression"));

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
