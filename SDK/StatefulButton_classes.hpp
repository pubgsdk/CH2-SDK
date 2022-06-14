#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StatefulButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatefulButton.StatefulButton_C
// 0x0110 (0x0430 - 0x0320)
class UStatefulButton_C : public UTBLUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               Hovered;                                                  // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Selected;                                                 // 0x0329(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x032A(0x0006) MISSED OFFSET
	class UWidgetAnimation*                            Anim_Hover;                                               // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim_Unhover;                                             // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim_Select;                                              // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim_Deselect;                                            // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim_Click;                                               // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnClicked;                                                // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TEnumAsByte<EStatefulButtonSelectionEnum>          SelectionMode;                                            // 0x0368(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	struct FName                                       Radio_Group;                                              // 0x036C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnSelected;                                               // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnDeselected;                                             // 0x0388(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnHovered;                                                // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnUnhovered;                                              // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnReleased;                                               // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               CurrentAnimation;                                         // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class UButton*                                     Inner_Button;                                             // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim_SelectedHover;                                       // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim_SelectedUnhover;                                     // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim_DeselectedHover;                                     // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim_DeselectedUnhover;                                   // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         OnUseSound;                                               // 0x03F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FDataTableRowHandle                         HoverSound;                                               // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    OnFocused;                                                // 0x0418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UWidgetAnimation*                            Anim_InitialState;                                        // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass StatefulButton.StatefulButton_C"));
		return ptr;
	}


	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ResetAnims();
	class UWidget* Get_Normal_StatefulButton_ToolTipWidget();
	void GetSelected(bool* Selected);
	void SetSelected(bool Selected);
	void SetHovered(bool Hovered);
	void On_Highlight_Event(bool Hovered);
	void OnSelectedChanged(bool Selected);
	void Init_Animations(class UWidgetAnimation* Hover, class UWidgetAnimation* Unhover, class UWidgetAnimation* Select, class UWidgetAnimation* Deselect, class UWidgetAnimation* Click, class UButton* Button, class UWidgetAnimation* SelectedHover, class UWidgetAnimation* DeselectedHover, class UWidgetAnimation* SelectedUnhover, class UWidgetAnimation* DeslectedUnhover, class UWidgetAnimation* InitialState);
	void INTERNAL_OnClicked_Button();
	void INTERNAL_OnReleased_Button();
	void PreConstruct(bool IsDesignTime);
	void ResetButtonAnimations();
	void K2_Unhighlight();
	void K2_Highlight();
	void Match_Anims_To_Current_State();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_StatefulButton(int EntryPoint);
	void OnFocused__DelegateSignature(class UStatefulButton_C* StatefulButton);
	void OnReleased__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnDeselected__DelegateSignature();
	void OnSelected__DelegateSignature();
	void OnClicked__DelegateSignature(class UStatefulButton_C* Button);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
