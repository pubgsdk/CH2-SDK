// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponCudgelProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponCudgelProgression.WeaponCudgelProgression_C.OnAssemble_WeaponCudgelProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponCudgelProgression_C::OnAssemble_WeaponCudgelProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponCudgelProgression.WeaponCudgelProgression_C.OnAssemble_WeaponCudgelProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponCudgelProgression.WeaponCudgelProgression_C.ExecuteUbergraph_WeaponCudgelProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponCudgelProgression_C::ExecuteUbergraph_WeaponCudgelProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponCudgelProgression.WeaponCudgelProgression_C.ExecuteUbergraph_WeaponCudgelProgression"));

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
