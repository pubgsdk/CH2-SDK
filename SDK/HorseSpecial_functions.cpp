// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseSpecial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseSpecial.HorseSpecial_C.OnAssemble_HorseSpecial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseSpecial_C::OnAssemble_HorseSpecial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecial.HorseSpecial_C.OnAssemble_HorseSpecial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseSpecial.HorseSpecial_C.ExecuteUbergraph_HorseSpecial
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseSpecial_C::ExecuteUbergraph_HorseSpecial(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseSpecial.HorseSpecial_C.ExecuteUbergraph_HorseSpecial"));

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
