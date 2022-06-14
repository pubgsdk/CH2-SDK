// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponMaulProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponMaulProgression.WeaponMaulProgression_C.OnAssemble_WeaponMaulProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponMaulProgression_C::OnAssemble_WeaponMaulProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMaulProgression.WeaponMaulProgression_C.OnAssemble_WeaponMaulProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponMaulProgression.WeaponMaulProgression_C.ExecuteUbergraph_WeaponMaulProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponMaulProgression_C::ExecuteUbergraph_WeaponMaulProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMaulProgression.WeaponMaulProgression_C.ExecuteUbergraph_WeaponMaulProgression"));

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
