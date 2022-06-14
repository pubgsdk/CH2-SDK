#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBLLoadingScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TBLLoadingScreen.LoadingScreenPanelWidget
// 0x0020 (0x0268 - 0x0248)
class ULoadingScreenPanelWidget : public UUserWidget
{
public:
	struct FMulticastScriptDelegate                    ContinueButtonClickedMC;                                  // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_BlueprintCallable, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ContinueButtonClickedEvent;                               // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TBLLoadingScreen.LoadingScreenPanelWidget"));
		return ptr;
	}


	void StopFadeAnimations();
	void SetStageEntries(TArray<struct FMapSpecificStageEntries> TextEntries);
	void SetMapTexture(class UTexture2D* Texture);
	void SetMapNameText(const struct FText& Text);
	void SetMapDescriptionText(const struct FText& Text);
	void SetContinueButtonVisibility(bool Visible);
	void SetBackGroundImageColorAndOpacity(const struct FLinearColor& ColorOpacity);
	void FadeOutMapTexture();
	void FadeInMapTexture();
	void EnabledScreenInputBlocking(bool Enable);
};


// Class TBLLoadingScreen.MapSpecificLoadingScreenConfig
// 0x0110 (0x0138 - 0x0028)
class UMapSpecificLoadingScreenConfig : public UObject
{
public:
	TArray<struct FMapSpecificLoadingScreenConfigData> Configs;                                                  // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMapSpecificLoadingScreenConfigData         DefaultLoadingScreen;                                     // 0x0038(0x0068) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x80];                                      // 0x00A0(0x0080) MISSED OFFSET
	float                                              Frontend_TitleBar_FadeOutTime;                            // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TitleBar_FadeOutTime;                                     // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Frontend_Widget_FadeOutTime;                              // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Widget_FadeOutTime;                                       // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UBlueprintGeneratedClass* /*UObject*/        DefaultLoadingScreenPanelBlueprint;                       // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TBLLoadingScreen.MapSpecificLoadingScreenConfig"));
		return ptr;
	}


	class UClass* /*ULoadingScreenPanelWidget*/ GetDefaultLoadingScreenPanelWidgetClass();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
