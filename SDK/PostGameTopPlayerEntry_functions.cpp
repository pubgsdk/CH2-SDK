// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostGameTopPlayerEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PostGameTopPlayerEntry.PostGameTopPlayerEntry_C.UpdatePlatformIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostGameTopPlayerEntry_C::UpdatePlatformIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameTopPlayerEntry.PostGameTopPlayerEntry_C.UpdatePlatformIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameTopPlayerEntry.PostGameTopPlayerEntry_C.AdjustPlayerPointsValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPostGameTopPlayerEntry_C::AdjustPlayerPointsValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameTopPlayerEntry.PostGameTopPlayerEntry_C.AdjustPlayerPointsValue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameTopPlayerEntry.PostGameTopPlayerEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPostGameTopPlayerEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameTopPlayerEntry.PostGameTopPlayerEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameTopPlayerEntry.PostGameTopPlayerEntry_C.ExecuteUbergraph_PostGameTopPlayerEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostGameTopPlayerEntry_C::ExecuteUbergraph_PostGameTopPlayerEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameTopPlayerEntry.PostGameTopPlayerEntry_C.ExecuteUbergraph_PostGameTopPlayerEntry"));

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
