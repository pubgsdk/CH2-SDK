// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostGameWidget_UnlockedItems_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PostGameWidget_UnlockedItems.PostGameWidget_UnlockedItems_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPostGameWidget_UnlockedItems_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget_UnlockedItems.PostGameWidget_UnlockedItems_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget_UnlockedItems.PostGameWidget_UnlockedItems_C.InitUnlockList
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FLevelUpResult>  LevelUpResults                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UPostGameWidget_UnlockedItems_C::InitUnlockList(TArray<struct FLevelUpResult> LevelUpResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget_UnlockedItems.PostGameWidget_UnlockedItems_C.InitUnlockList"));

	struct
	{
		TArray<struct FLevelUpResult>  LevelUpResults;
	} params = {};

	params.LevelUpResults = LevelUpResults;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget_UnlockedItems.PostGameWidget_UnlockedItems_C.ExecuteUbergraph_PostGameWidget_UnlockedItems
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostGameWidget_UnlockedItems_C::ExecuteUbergraph_PostGameWidget_UnlockedItems(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget_UnlockedItems.PostGameWidget_UnlockedItems_C.ExecuteUbergraph_PostGameWidget_UnlockedItems"));

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
