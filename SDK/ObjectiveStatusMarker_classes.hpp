#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ObjectiveStatusMarker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ObjectiveStatusMarker.ObjectiveStatusMarker_C
// 0x0060 (0x02D8 - 0x0278)
class UObjectiveStatusMarker_C : public UHUDMarkerContainerSubWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            VisibilityFade;                                           // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UOverlay*                                    FadeOverlay;                                              // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UObjectiveHudMarker_C*                       ObjectiveHudMarker;                                       // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UObjectiveStatusDisplayComponent*            My_Objective_Status;                                      // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UActorInfoDisplayComponent*                  My_Actor_display_Info;                                    // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LastProgress;                                             // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EObjectiveState                                    LastState;                                                // 0x02AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EFaction                                           LastOwningTeam;                                           // 0x02AD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               LastShowProgress;                                         // 0x02AE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02AF(0x0001) MISSED OFFSET
	struct FText                                       LastStateText;                                            // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UWidgetVisibilityComponent*                  VisibilityComponent;                                      // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UHudMarkerDisplayComponent*                  HUDMarkerComponent;                                       // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ObjectiveStatusMarker.ObjectiveStatusMarker_C"));
		return ptr;
	}


	void UpdateHudMarkerInfo();
	void HasObjectiveStatusChanged(class UHudMarkerDisplayComponent* HUDMarkerComponent, bool* Return_Value);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Objective_Status(bool ForceUpdate);
	void K2_OnPinned();
	void K2_OnUnPinned();
	void K2_OnReturnedToPool();
	void K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component);
	void OnInitialized();
	void K2_OnHovered();
	void K2_OnUnHovered();
	void K2_OnUnClamped();
	void K2_OnClamped();
	void OnVisibilityChanged(bool bNewVisibility);
	void OnReceivedWidgetVisibilityComponent(class UWidgetVisibilityComponent* VisibilityComponent);
	void FadeCompleted();
	void OnObjectiveState(EObjectiveState NewState);
	void ReceiveObjectiveStatusComponent(class UObjectiveStatusDisplayComponent* Component);
	void ReceiveHUDMarkerComponent(class UHudMarkerDisplayComponent* Component);
	void ReceiveActorInfoComponent(class UActorInfoDisplayComponent* Component);
	void OnProgressChanged(float NewProgress);
	void ExecuteUbergraph_ObjectiveStatusMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
