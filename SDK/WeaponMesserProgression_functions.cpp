// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponMesserProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponMesserProgression.WeaponMesserProgression_C.OnAssemble_WeaponMesserProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponMesserProgression_C::OnAssemble_WeaponMesserProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMesserProgression.WeaponMesserProgression_C.OnAssemble_WeaponMesserProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponMesserProgression.WeaponMesserProgression_C.ExecuteUbergraph_WeaponMesserProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponMesserProgression_C::ExecuteUbergraph_WeaponMesserProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMesserProgression.WeaponMesserProgression_C.ExecuteUbergraph_WeaponMesserProgression"));

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
