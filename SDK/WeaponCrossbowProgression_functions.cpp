// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponCrossbowProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponCrossbowProgression.WeaponCrossbowProgression_C.OnAssemble_WeaponCrossbowProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponCrossbowProgression_C::OnAssemble_WeaponCrossbowProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponCrossbowProgression.WeaponCrossbowProgression_C.OnAssemble_WeaponCrossbowProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponCrossbowProgression.WeaponCrossbowProgression_C.ExecuteUbergraph_WeaponCrossbowProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponCrossbowProgression_C::ExecuteUbergraph_WeaponCrossbowProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponCrossbowProgression.WeaponCrossbowProgression_C.ExecuteUbergraph_WeaponCrossbowProgression"));

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
