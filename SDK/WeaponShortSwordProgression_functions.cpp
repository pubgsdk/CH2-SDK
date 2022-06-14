// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponShortSwordProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponShortSwordProgression.WeaponShortSwordProgression_C.OnAssemble_WeaponShortSwordProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponShortSwordProgression_C::OnAssemble_WeaponShortSwordProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponShortSwordProgression.WeaponShortSwordProgression_C.OnAssemble_WeaponShortSwordProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponShortSwordProgression.WeaponShortSwordProgression_C.ExecuteUbergraph_WeaponShortSwordProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponShortSwordProgression_C::ExecuteUbergraph_WeaponShortSwordProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponShortSwordProgression.WeaponShortSwordProgression_C.ExecuteUbergraph_WeaponShortSwordProgression"));

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
