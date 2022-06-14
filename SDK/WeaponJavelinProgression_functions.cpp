// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponJavelinProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponJavelinProgression.WeaponJavelinProgression_C.OnAssemble_WeaponJavelinProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponJavelinProgression_C::OnAssemble_WeaponJavelinProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponJavelinProgression.WeaponJavelinProgression_C.OnAssemble_WeaponJavelinProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponJavelinProgression.WeaponJavelinProgression_C.ExecuteUbergraph_WeaponJavelinProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponJavelinProgression_C::ExecuteUbergraph_WeaponJavelinProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponJavelinProgression.WeaponJavelinProgression_C.ExecuteUbergraph_WeaponJavelinProgression"));

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
