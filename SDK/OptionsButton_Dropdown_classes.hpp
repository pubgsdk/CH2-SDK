#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OptionsButton_Dropdown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass OptionsButton_Dropdown.OptionsButton_Dropdown_C
// 0x0088 (0x02D0 - 0x0248)
class UOptionsButton_Dropdown_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      ComboBoxBorder;                                           // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                  // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_1;                                             // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOptionsDropDownEntry_C*                     OptionsDropDownEntry;                                     // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UDropDownComboBoxWidget_C*                   OptionsDropDownList;                                      // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FText>                               Options__default_;                                        // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	int                                                Selected_option_index__default_;                          // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    Selected_option_changed;                                  // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UClass* /*UDropDownComboBoxWidget_C*/        DropDownBoxClass;                                         // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    ComboBoxMID;                                              // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnDropdownOpened;                                         // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnDropdownClosed;                                         // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass OptionsButton_Dropdown.OptionsButton_Dropdown_C"));
		return ptr;
	}


	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	class UWidget* OnGetMenuContent_1();
	void Construct();
	void BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
	void CloseDropDownList();
	void OpenDropDownList();
	void BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void Clear_Options();
	void UpdateOptions(TArray<struct FText> Options);
	void SetSelectedOption(int TextIndex);
	void OnSelectionChanged_Event_1(const struct FText& Text, int Index);
	void GamepadClick();
	void On_Preview_Mouse_Button_Down(const struct FPointerEvent& MouseEvent);
	void OnInitialized();
	void ExecuteUbergraph_OptionsButton_Dropdown(int EntryPoint);
	void OnDropdownClosed__DelegateSignature(class UOptionsButton_Dropdown_C* Dropdown);
	void OnDropdownOpened__DelegateSignature(class UOptionsButton_Dropdown_C* Dropdown);
	void Selected_option_changed__DelegateSignature(int Index, const struct FText& Option_text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
