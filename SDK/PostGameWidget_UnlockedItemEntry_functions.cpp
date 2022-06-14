// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostGameWidget_UnlockedItemEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PostGameWidget_UnlockedItemEntry.PostGameWidget_UnlockedItemEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPostGameWidget_UnlockedItemEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget_UnlockedItemEntry.PostGameWidget_UnlockedItemEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget_UnlockedItemEntry.PostGameWidget_UnlockedItemEntry_C.ExecuteUbergraph_PostGameWidget_UnlockedItemEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostGameWidget_UnlockedItemEntry_C::ExecuteUbergraph_PostGameWidget_UnlockedItemEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget_UnlockedItemEntry.PostGameWidget_UnlockedItemEntry_C.ExecuteUbergraph_PostGameWidget_UnlockedItemEntry"));

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
