#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DebugMacros_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DebugMacros.DebugMacros_C
// 0x0030 (0x0278 - 0x0248)
class UDebugMacros_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               bFoundCameras;                                            // 0x0250(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	int                                                currentCam;                                               // 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AActor*>                              SightlineCameras;                                         // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<struct FKey>                                FKeys;                                                    // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass DebugMacros.DebugMacros_C"));
		return ptr;
	}


	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void FKeyDown(const struct FKey& FKey);
	void Construct();
	void SpectateAndHideHUD();
	void ExecuteUbergraph_DebugMacros(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
