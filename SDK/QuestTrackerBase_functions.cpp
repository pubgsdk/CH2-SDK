// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "QuestTrackerBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestTrackerBase.QuestTrackerBase_C.SetFontMaterial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBLTextBlock*           TextBlock                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterial*               FontMaterial                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UQuestTrackerBase_C::SetFontMaterial(class UTBLTextBlock* TextBlock, class UMaterial* FontMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function QuestTrackerBase.QuestTrackerBase_C.SetFontMaterial"));

	struct
	{
		class UTBLTextBlock*           TextBlock;
		class UMaterial*               FontMaterial;
	} params = {};

	params.TextBlock = TextBlock;
	params.FontMaterial = FontMaterial;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
