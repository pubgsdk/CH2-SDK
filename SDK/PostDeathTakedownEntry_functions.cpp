// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostDeathTakedownEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PostDeathTakedownEntry.PostDeathTakedownEntry_C.AddKill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPostDeathTakedownEntry_C::AddKill(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathTakedownEntry.PostDeathTakedownEntry_C.AddKill"));

	struct
	{
		struct FString                 Name;
	} params = {};

	params.Name = Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostDeathTakedownEntry.PostDeathTakedownEntry_C.ExecuteUbergraph_PostDeathTakedownEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostDeathTakedownEntry_C::ExecuteUbergraph_PostDeathTakedownEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostDeathTakedownEntry.PostDeathTakedownEntry_C.ExecuteUbergraph_PostDeathTakedownEntry"));

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
