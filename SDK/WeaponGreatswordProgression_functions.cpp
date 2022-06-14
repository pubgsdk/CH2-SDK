// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponGreatswordProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponGreatswordProgression.WeaponGreatswordProgression_C.OnAssemble_WeaponGreatswordProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponGreatswordProgression_C::OnAssemble_WeaponGreatswordProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponGreatswordProgression.WeaponGreatswordProgression_C.OnAssemble_WeaponGreatswordProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponGreatswordProgression.WeaponGreatswordProgression_C.ExecuteUbergraph_WeaponGreatswordProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponGreatswordProgression_C::ExecuteUbergraph_WeaponGreatswordProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponGreatswordProgression.WeaponGreatswordProgression_C.ExecuteUbergraph_WeaponGreatswordProgression"));

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
