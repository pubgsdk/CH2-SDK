// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponWarClubProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponWarClubProgression.WeaponWarClubProgression_C.OnAssemble_WeaponWarClubProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponWarClubProgression_C::OnAssemble_WeaponWarClubProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponWarClubProgression.WeaponWarClubProgression_C.OnAssemble_WeaponWarClubProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponWarClubProgression.WeaponWarClubProgression_C.ExecuteUbergraph_WeaponWarClubProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponWarClubProgression_C::ExecuteUbergraph_WeaponWarClubProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponWarClubProgression.WeaponWarClubProgression_C.ExecuteUbergraph_WeaponWarClubProgression"));

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
