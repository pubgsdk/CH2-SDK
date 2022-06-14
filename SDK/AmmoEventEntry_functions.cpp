// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AmmoEventEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmmoEventEntry.AmmoEventEntry_C.Add Amount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAmmoEventEntry_C::Add_Amount(int Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoEventEntry.AmmoEventEntry_C.Add Amount"));

	struct
	{
		int                            Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AmmoEventEntry.AmmoEventEntry_C.On Fade Out Timer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAmmoEventEntry_C::On_Fade_Out_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoEventEntry.AmmoEventEntry_C.On Fade Out Timer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AmmoEventEntry.AmmoEventEntry_C.ExecuteUbergraph_AmmoEventEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAmmoEventEntry_C::ExecuteUbergraph_AmmoEventEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AmmoEventEntry.AmmoEventEntry_C.ExecuteUbergraph_AmmoEventEntry"));

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
