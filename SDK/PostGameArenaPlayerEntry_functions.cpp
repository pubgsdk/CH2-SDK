// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostGameArenaPlayerEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PostGameArenaPlayerEntry.PostGameArenaPlayerEntry_C.UpdatePlatformIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostGameArenaPlayerEntry_C::UpdatePlatformIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameArenaPlayerEntry.PostGameArenaPlayerEntry_C.UpdatePlatformIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameArenaPlayerEntry.PostGameArenaPlayerEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPostGameArenaPlayerEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameArenaPlayerEntry.PostGameArenaPlayerEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameArenaPlayerEntry.PostGameArenaPlayerEntry_C.ExecuteUbergraph_PostGameArenaPlayerEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostGameArenaPlayerEntry_C::ExecuteUbergraph_PostGameArenaPlayerEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameArenaPlayerEntry.PostGameArenaPlayerEntry_C.ExecuteUbergraph_PostGameArenaPlayerEntry"));

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
