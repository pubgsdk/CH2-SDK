#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OnlineConfig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OnlineConfig.OnlineConfig_C
// 0x0000 (0x0060 - 0x0060)
class UOnlineConfig_C : public UOnlineConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass OnlineConfig.OnlineConfig_C"));
		return ptr;
	}


	void IsRanged(EInventoryType InventoryItemType, bool* Return_Value);
	void EventGetAchievementCategory(const struct FAchievementProgress& InAchievement, struct FText* Category, struct FText* Subcategory, int* DisplayPriority);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
