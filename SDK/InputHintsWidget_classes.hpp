#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InputHintsWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InputHintsWidget.InputHintsWidget_C
// 0x0038 (0x0280 - 0x0248)
class UInputHintsWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                CombatConditionsList;                                     // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_1;                                        // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<struct FCrosshairCondition>                 CrosshairConditions;                                      // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<class UCrosshairConditonText_C*>            CrosshairConditionWidgets;                                // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass InputHintsWidget.InputHintsWidget_C"));
		return ptr;
	}


	void FindCrosshairConditionWidget(const struct FString& InActionName, bool* Found, class UCrosshairConditonText_C** Widget, int* Index);
	void FindCrosshairCondition(const struct FName& Tag, bool* bFound, int* ArrayIndex);
	void UpdateCrosshairConditionWidgets();
	void InitCrosshairConditionWidgets();
	void EnableCombatConditions(const struct FString& Keybinding, const struct FName& Tag, const struct FText& HintText, bool Enable, bool AddToTop);
	void ClearAllHints();
	void OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent);
	void Construct();
	void ExecuteUbergraph_InputHintsWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
