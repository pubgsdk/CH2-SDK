#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GamepadOnlyVisibilityWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C
// 0x0041 (0x0361 - 0x0320)
class UGamepadOnlyVisibilityWidget_C : public UTBLUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNamedSlot*                                  Content;                                                  // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnFadedIn;                                                // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnFadedOut;                                               // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               ShouldAlwaysShowKeyBinding;                               // 0x0360(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass GamepadOnlyVisibilityWidget.GamepadOnlyVisibilityWidget_C"));
		return ptr;
	}


	void IsFadedOut(bool* bReturnValue);
	void Construct();
	void Fade_In();
	void Fade_Out();
	void OnGamepadInputModeChanged_Event_1(EGamepadInputMode GamepadInputMode);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_GamepadOnlyVisibilityWidget(int EntryPoint);
	void OnFadedOut__DelegateSignature();
	void OnFadedIn__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
