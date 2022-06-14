// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OnlineConfig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineConfig.OnlineConfig_C.IsRanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInventoryType                 InventoryItemType              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnlineConfig_C::IsRanged(EInventoryType InventoryItemType, bool* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineConfig.OnlineConfig_C.IsRanged"));

	struct
	{
		EInventoryType                 InventoryItemType;
		bool                           Return_Value;
	} params = {};

	params.InventoryItemType = InventoryItemType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function OnlineConfig.OnlineConfig_C.EventGetAchievementCategory
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FAchievementProgress    InAchievement                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FText                   Category                       (CPF_Parm, CPF_OutParm)
// struct FText                   Subcategory                    (CPF_Parm, CPF_OutParm)
// int                            DisplayPriority                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnlineConfig_C::EventGetAchievementCategory(const struct FAchievementProgress& InAchievement, struct FText* Category, struct FText* Subcategory, int* DisplayPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function OnlineConfig.OnlineConfig_C.EventGetAchievementCategory"));

	struct
	{
		struct FAchievementProgress    InAchievement;
		struct FText                   Category;
		struct FText                   Subcategory;
		int                            DisplayPriority;
	} params = {};

	params.InAchievement = InAchievement;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Category != nullptr)
		*Category = params.Category;
	if (Subcategory != nullptr)
		*Subcategory = params.Subcategory;
	if (DisplayPriority != nullptr)
		*DisplayPriority = params.DisplayPriority;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
