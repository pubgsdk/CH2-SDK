// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostGameStageTimeEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PostGameStageTimeEntry.PostGameStageTimeEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPostGameStageTimeEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameStageTimeEntry.PostGameStageTimeEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameStageTimeEntry.PostGameStageTimeEntry_C.ExecuteUbergraph_PostGameStageTimeEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostGameStageTimeEntry_C::ExecuteUbergraph_PostGameStageTimeEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameStageTimeEntry.PostGameStageTimeEntry_C.ExecuteUbergraph_PostGameStageTimeEntry"));

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
