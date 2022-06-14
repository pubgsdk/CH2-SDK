#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UniversalKeyBindingWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UniversalKeyBindingWidget.UniversalKeyBindingWidget_C
// 0x00BC (0x0304 - 0x0248)
class UUniversalKeyBindingWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Background_Multi;                                         // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Background_SingleCharacter;                               // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      IconKey;                                                  // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScaleBox*                                   ScaleBox_1;                                               // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  TextKey;                                                  // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       keyText;                                                  // 0x0278(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FString                                     Input_Action_Name;                                        // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FKey                                        Key;                                                      // 0x02A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              Height;                                                   // 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UDataTable>                   Key_Display_Table;                                        // 0x02C0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UTexture*                                    Key_Texture;                                              // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EGamepadInputMode                                  Gamepad_Mode;                                             // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Is_Design_Time;                                           // 0x02F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02F2(0x0002) MISSED OFFSET
	struct FVector2D                                   IconSize;                                                 // 0x02F4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               MakeTextBlack;                                            // 0x02FC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HideBackground;                                           // 0x02FD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02FE(0x0002) MISSED OFFSET
	int                                                OverrideFontSize;                                         // 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UniversalKeyBindingWidget.UniversalKeyBindingWidget_C"));
		return ptr;
	}


	void ShouldEnlargeKey(bool* ShouldEnlarge);
	struct FKeyDisplayInfo Get_Key_Display_Info(TSoftObjectPtr<class UDataTable> Input, const struct FKey& Key);
	void OnLoaded_B23D298343850A5F730299A5DD8185E0(class UObject* Loaded);
	void OnLoaded_1F3ECE964E80CC3296476998C717835D(class UObject* Loaded);
	void PreConstruct(bool IsDesignTime);
	void Set_Keybinding_or_Action(const struct FString& In_Action, const struct FKey& In_Key);
	void Construct();
	void SetKeybinding(const struct FKey& Key, float Height, const struct FVector2D& IconSize);
	void OnGamepadInputModeChanged_Event_1(EGamepadInputMode GamepadInputMode);
	void SetKeybindingByActionMapping(const struct FInputActionKeyMapping& ActionMapping);
	void UpdateIcon();
	void On_Key_Bind_Changed(const struct FName& ActionName);
	void UpdateStyle(const struct FText& Binding);
	void UpdateFontSizeOverride();
	void ExecuteUbergraph_UniversalKeyBindingWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
