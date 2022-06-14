// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponDaggerProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDaggerProgression.WeaponDaggerProgression_C.OnAssemble_WeaponDaggerProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponDaggerProgression_C::OnAssemble_WeaponDaggerProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponDaggerProgression.WeaponDaggerProgression_C.OnAssemble_WeaponDaggerProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponDaggerProgression.WeaponDaggerProgression_C.ExecuteUbergraph_WeaponDaggerProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponDaggerProgression_C::ExecuteUbergraph_WeaponDaggerProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponDaggerProgression.WeaponDaggerProgression_C.ExecuteUbergraph_WeaponDaggerProgression"));

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
