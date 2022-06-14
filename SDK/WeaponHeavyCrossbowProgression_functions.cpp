// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponHeavyCrossbowProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponHeavyCrossbowProgression.WeaponHeavyCrossbowProgression_C.OnAssemble_WeaponHeavyCrossbowProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponHeavyCrossbowProgression_C::OnAssemble_WeaponHeavyCrossbowProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHeavyCrossbowProgression.WeaponHeavyCrossbowProgression_C.OnAssemble_WeaponHeavyCrossbowProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponHeavyCrossbowProgression.WeaponHeavyCrossbowProgression_C.ExecuteUbergraph_WeaponHeavyCrossbowProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponHeavyCrossbowProgression_C::ExecuteUbergraph_WeaponHeavyCrossbowProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponHeavyCrossbowProgression.WeaponHeavyCrossbowProgression_C.ExecuteUbergraph_WeaponHeavyCrossbowProgression"));

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
