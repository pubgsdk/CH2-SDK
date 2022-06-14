// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponRapierProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponRapierProgression.WeaponRapierProgression_C.OnAssemble_WeaponRapierProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponRapierProgression_C::OnAssemble_WeaponRapierProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponRapierProgression.WeaponRapierProgression_C.OnAssemble_WeaponRapierProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponRapierProgression.WeaponRapierProgression_C.ExecuteUbergraph_WeaponRapierProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponRapierProgression_C::ExecuteUbergraph_WeaponRapierProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponRapierProgression.WeaponRapierProgression_C.ExecuteUbergraph_WeaponRapierProgression"));

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
