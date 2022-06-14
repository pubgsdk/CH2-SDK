// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponFalchionProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponFalchionProgression.WeaponFalchionProgression_C.OnAssemble_WeaponFalchionProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponFalchionProgression_C::OnAssemble_WeaponFalchionProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponFalchionProgression.WeaponFalchionProgression_C.OnAssemble_WeaponFalchionProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponFalchionProgression.WeaponFalchionProgression_C.ExecuteUbergraph_WeaponFalchionProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponFalchionProgression_C::ExecuteUbergraph_WeaponFalchionProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponFalchionProgression.WeaponFalchionProgression_C.ExecuteUbergraph_WeaponFalchionProgression"));

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
