#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OptionsSpinBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass OptionsSpinBox.OptionsSpinBox_C
// 0x0038 (0x0280 - 0x0248)
class UOptionsSpinBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UEditableTextBox*                            EditableTextBox_1;                                        // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Text;                                                     // 0x0258(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FMulticastScriptDelegate                    OnTextCommitted;                                          // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass OptionsSpinBox.OptionsSpinBox_C"));
		return ptr;
	}


	void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_34_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void SetText(const struct FText& InText);
	void ExecuteUbergraph_OptionsSpinBox(int EntryPoint);
	void OnTextCommitted__DelegateSignature(const struct FText& Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
