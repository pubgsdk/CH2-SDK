// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponHatchetProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponHatchetProgression.WeaponHatchetProgression_C.OnAssemble_WeaponHatchetProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponHatchetProgression_C::OnAssemble_WeaponHatchetProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHatchetProgression.WeaponHatchetProgression_C.OnAssemble_WeaponHatchetProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponHatchetProgression.WeaponHatchetProgression_C.ExecuteUbergraph_WeaponHatchetProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponHatchetProgression_C::ExecuteUbergraph_WeaponHatchetProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHatchetProgression.WeaponHatchetProgression_C.ExecuteUbergraph_WeaponHatchetProgression"));

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
