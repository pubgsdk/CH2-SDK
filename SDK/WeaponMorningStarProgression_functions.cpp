// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponMorningStarProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponMorningStarProgression.WeaponMorningStarProgression_C.OnAssemble_WeaponMorningStarProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponMorningStarProgression_C::OnAssemble_WeaponMorningStarProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMorningStarProgression.WeaponMorningStarProgression_C.OnAssemble_WeaponMorningStarProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponMorningStarProgression.WeaponMorningStarProgression_C.ExecuteUbergraph_WeaponMorningStarProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponMorningStarProgression_C::ExecuteUbergraph_WeaponMorningStarProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMorningStarProgression.WeaponMorningStarProgression_C.ExecuteUbergraph_WeaponMorningStarProgression"));

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
