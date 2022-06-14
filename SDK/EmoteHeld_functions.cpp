// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EmoteHeld_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EmoteHeld.EmoteHeld_C.OnAssemble_EmoteHeld
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEmoteHeld_C::OnAssemble_EmoteHeld()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EmoteHeld.EmoteHeld_C.OnAssemble_EmoteHeld"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EmoteHeld.EmoteHeld_C.ExecuteUbergraph_EmoteHeld
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEmoteHeld_C::ExecuteUbergraph_EmoteHeld(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EmoteHeld.EmoteHeld_C.ExecuteUbergraph_EmoteHeld"));

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
