// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponLanceProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponLanceProgression.WeaponLanceProgression_C.OnAssemble_WeaponLanceProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponLanceProgression_C::OnAssemble_WeaponLanceProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponLanceProgression.WeaponLanceProgression_C.OnAssemble_WeaponLanceProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponLanceProgression.WeaponLanceProgression_C.ExecuteUbergraph_WeaponLanceProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponLanceProgression_C::ExecuteUbergraph_WeaponLanceProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponLanceProgression.WeaponLanceProgression_C.ExecuteUbergraph_WeaponLanceProgression"));

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
