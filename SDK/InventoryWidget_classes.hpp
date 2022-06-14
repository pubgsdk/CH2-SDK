#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InventoryWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InventoryWidget.InventoryWidget_C
// 0x01E8 (0x0430 - 0x0248)
class UInventoryWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            FadeInInventoryList;                                      // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              ActionInventoryList;                                      // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_2;                                          // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBorder*                                     InventoryBorder;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInventoryIconEntry_C*                       InventoryIconEntry;                                       // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInventoryIconEntry_C*                       InventoryIconEntry_96;                                    // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ULanceInventoryEntry_C*                      LanceLoadoutEntry;                                        // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    LanceOverlay;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<EInventoryItemSlot>                         InventorySlotOrder;                                       // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UInventory*                                  CurrentInventory;                                         // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UInventoryEntry_C*>                   InventoryEntryPoolWidgets;                                // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TMap<class AInventoryItem*, class UInventoryEntry_C*> InventoryItemsByWIdget;                                   // 0x02B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FTimerHandle                                FadeOutTimerHandle;                                       // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CachedAnimProgress;                                       // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsMounting;                                               // 0x0314(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	TArray<class UInventoryEntry_C*>                   ActionInventoryWidgets;                                   // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<TSoftClassPtr<class UClass>>                PersistenItemSlots;                                       // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<EInventoryItemSlot>                         ActionInventorySlotList;                                  // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class AInventoryItem*                              ShieldItem;                                               // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInventoryEntry_C*                           EquippedInventoryEntry;                                   // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    IsInventoryOpen;                                          // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bIsClassItem;                                             // 0x0368(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class UClass* /*ATBLCharacter*/                    CurrentClass;                                             // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLoadout                                    CurrentLoadout;                                           // 0x0378(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TArray<class AInventoryItem*>                      UnequippingItems;                                         // 0x03B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class AInventoryItem*>                      EquippingItems;                                           // 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TMap<class UClass* /*AInventoryItem*/, class UInventoryEntry_C*> ActionInventoryItemsByWIdget;                             // 0x03D0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               InventoryUpdating;                                        // 0x0420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               FirstUpdate;                                              // 0x0421(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CommittingSuicide;                                        // 0x0422(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0423(0x0005) MISSED OFFSET
	class UClass* /*AInventoryItem*/                   NoveltyItemClass;                                         // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass InventoryWidget.InventoryWidget_C"));
		return ptr;
	}


	void GetOrAddActionEntryWidget(class AInventoryItem* InventoryItem, EInventoryItemSlot SlotOverride, class UInventoryEntry_C** InventoryEntryWidget);
	void GetOrAddInventoryEntryWidget(class AInventoryItem* InventoryItem, class UInventoryEntry_C** InventoryEntryWidget);
	void Construct();
	void OnPossessedPawn_Event_1(class APawn* NewPawn);
	void OnInventorySlotsUpdated_Event();
	void EquipInventoryItem(class AInventoryItem* InventoryItem);
	void UnequippedInventoryItem(class AInventoryItem* InventoryItem);
	void ResetInventory(bool ResetActionInventory);
	void FadeIn_Inventory();
	void FadeOut_Inventory();
	void StartFadeIn();
	void StartFadeOut();
	void OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event);
	void ForceImmediateFadeOut();
	void OnInventoryItemToBeEquipped_Event_1(class AInventoryItem* InventoryItem);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void CustomEvent_1(bool IsMountingHorse);
	void AddPersistentItemIcons(class ATBLCharacter* NewPawn);
	void UpdateActionItems();
	void OnEquippedItemsChanged_Event();
	void OnItemStackChanged(class AInventoryItem* Item, int Delta);
	void OnUnequipItem(class AInventoryItem* InventoryItem);
	void OnEquipItem(class AInventoryItem* InventoryItem);
	void InventoryUpdated();
	void OnClientNotifySuicide_Event_1(EKillReason Reason);
	void UpdateLanceState();
	void OnInventoryItemDamaged_Event_1(class AInventoryItem* Item, const struct FInventoryItemDamagedParams& Params);
	void ExecuteUbergraph_InventoryWidget(int EntryPoint);
	void IsInventoryOpen__DelegateSignature(bool _);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
