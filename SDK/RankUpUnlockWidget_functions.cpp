// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RankUpUnlockWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RankUpUnlockWidget.RankUpUnlockWidget_C.StartUnlockMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         Unlocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URankUpUnlockWidget_C::StartUnlockMessage(const struct FPrimaryAssetId& Unlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankUpUnlockWidget.RankUpUnlockWidget_C.StartUnlockMessage"));

	struct
	{
		struct FPrimaryAssetId         Unlocked;
	} params = {};

	params.Unlocked = Unlocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function RankUpUnlockWidget.RankUpUnlockWidget_C.ExecuteUbergraph_RankUpUnlockWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URankUpUnlockWidget_C::ExecuteUbergraph_RankUpUnlockWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function RankUpUnlockWidget.RankUpUnlockWidget_C.ExecuteUbergraph_RankUpUnlockWidget"));

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
