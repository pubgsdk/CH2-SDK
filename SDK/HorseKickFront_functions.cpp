// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseKickFront_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseKickFront.HorseKickFront_C.OnAssemble_HorseKickFront
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseKickFront_C::OnAssemble_HorseKickFront()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseKickFront.HorseKickFront_C.OnAssemble_HorseKickFront"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseKickFront.HorseKickFront_C.ExecuteUbergraph_HorseKickFront
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseKickFront_C::ExecuteUbergraph_HorseKickFront(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseKickFront.HorseKickFront_C.ExecuteUbergraph_HorseKickFront"));

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
