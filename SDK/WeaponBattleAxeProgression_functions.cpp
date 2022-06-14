// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponBattleAxeProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponBattleAxeProgression.WeaponBattleAxeProgression_C.OnAssemble_WeaponBattleAxeProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponBattleAxeProgression_C::OnAssemble_WeaponBattleAxeProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponBattleAxeProgression.WeaponBattleAxeProgression_C.OnAssemble_WeaponBattleAxeProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponBattleAxeProgression.WeaponBattleAxeProgression_C.ExecuteUbergraph_WeaponBattleAxeProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponBattleAxeProgression_C::ExecuteUbergraph_WeaponBattleAxeProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponBattleAxeProgression.WeaponBattleAxeProgression_C.ExecuteUbergraph_WeaponBattleAxeProgression"));

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
