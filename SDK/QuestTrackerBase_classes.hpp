#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestTrackerBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestTrackerBase.QuestTrackerBase_C
// 0x0000 (0x0320 - 0x0320)
class UQuestTrackerBase_C : public UTBLUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass QuestTrackerBase.QuestTrackerBase_C"));
		return ptr;
	}


	void SetFontMaterial(class UTBLTextBlock* TextBlock, class UMaterial* FontMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
