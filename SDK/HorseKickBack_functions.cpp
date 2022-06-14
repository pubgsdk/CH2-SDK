// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HorseKickBack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorseKickBack.HorseKickBack_C.OnAssemble_HorseKickBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHorseKickBack_C::OnAssemble_HorseKickBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseKickBack.HorseKickBack_C.OnAssemble_HorseKickBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HorseKickBack.HorseKickBack_C.ExecuteUbergraph_HorseKickBack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHorseKickBack_C::ExecuteUbergraph_HorseKickBack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HorseKickBack.HorseKickBack_C.ExecuteUbergraph_HorseKickBack"));

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
