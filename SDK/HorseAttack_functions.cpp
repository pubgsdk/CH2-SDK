// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseAttack.HorseAttack_C.OnAssemble_HorseAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseAttack_C::OnAssemble_HorseAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseAttack.HorseAttack_C.OnAssemble_HorseAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseAttack.HorseAttack_C.ExecuteUbergraph_HorseAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseAttack_C::ExecuteUbergraph_HorseAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseAttack.HorseAttack_C.ExecuteUbergraph_HorseAttack"));

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
