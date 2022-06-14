#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DialogManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_DialogManager.BP_DialogManager_C
// 0x0010 (0x0460 - 0x0450)
class UBP_DialogManager_C : public UTBLDialogManager
{
public:
	class UOverlay*                                    DialogOverlay;                                            // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    OverrideDialog;                                           // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BP_DialogManager.BP_DialogManager_C"));
		return ptr;
	}


	class UTBLDialogWidget* OnCreateExitDialog(const struct FText& Title, const struct FText& Body);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	class UTBLDialogWidget* OnCreateCancelWorkingDialog(const struct FText& Title, const struct FText& Body);
	class UTBLDialogWidget* OnCreateNoButtonsWorkingDialog(const struct FText& Title, const struct FText& Body);
	class UTBLDialogWidget* OnCreateNoButtonsDialog(const struct FText& Title, const struct FText& Body);
	class UTBLDialogWidget* OnCreateOkCancelDialog(const struct FText& Title, const struct FText& Body);
	class UTBLDialogWidget* OnCreateOkDialog(const struct FText& Title, const struct FText& Body);
	class UTBLDialogWidget* OnCreateYesNoDialog(const struct FText& Title, const struct FText& Body);
	void PushDialog(class UTBLDialogWidget* Dialog, int DialogPriority);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
