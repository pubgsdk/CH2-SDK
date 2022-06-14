#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FadeWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass FadeWidget.FadeWidget_C
// 0x00C0 (0x0308 - 0x0248)
class UFadeWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Fade_Out;                                                 // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Fade_In;                                                  // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBorder*                                     Border_1;                                                 // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TSet<class UObject*>                               Requesters;                                               // 0x0268(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<ECinematicBarsMode>                    Current_mode;                                             // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    On_Is_Faded__Changed;                                     // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               Is_faded_out_;                                            // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    Fade_out_started;                                         // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    Fade_out_finished;                                        // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<TScriptInterface<class UCinematicFadeOutListenerInterface_C>> Listeners;                                                // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass FadeWidget.FadeWidget_C"));
		return ptr;
	}


	void Handle_requests_changed();
	void Construct();
	void FadeIn(float Playback_Speed);
	void FadeOut(float Playback_Speed);
	void Add_requester(class UObject* Requester);
	void Remove_requester(class UObject* Requester);
	void Update_requests_soon();
	void Snap_Fade_In();
	void WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_2();
	void ExecuteUbergraph_FadeWidget(int EntryPoint);
	void Fade_out_finished__DelegateSignature();
	void Fade_out_started__DelegateSignature();
	void On_Is_Faded__Changed__DelegateSignature(bool Is_Faded_);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
