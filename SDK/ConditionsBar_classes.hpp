#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ConditionsBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ConditionsBar.ConditionsBar_C
// 0x00A8 (0x02F0 - 0x0248)
class UConditionsBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UConditionsBarEntry_C*                       Condition1;                                               // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UConditionsBarEntry_C*                       Condition2;                                               // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UConditionsBarEntry_C*                       Condition3;                                               // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UConditionsBarEntry_C*                       Condition4;                                               // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UConditionsBarEntry_C*                       Condition5;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UConditionsBarEntry_C*                       Condition6;                                               // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UConditionsBarEntry_C*                       Condition7;                                               // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TMap<EConditionType, class UConditionsBarEntry_C*> ConditionList;                                            // 0x0288(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               HasActiveCondition;                                       // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    IsShowingCondition;                                       // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ConditionsBar.ConditionsBar_C"));
		return ptr;
	}


	void GetFreeConditionsWidget(bool* Success, class UConditionsBarEntry_C** Widget);
	void RemoveCondition(EConditionType RemovedCondition);
	void AddCondition(EConditionType NewCondition);
	void GetConditionWidgets(TArray<class UConditionsBarEntry_C*>* Array);
	void ClearConditionsBar();
	void Construct();
	void OnApplyCondition_Event_1(class AActor* Actor, EConditionType Condition);
	void OnRemoveCondition_Event_1(class AActor* Actor, EConditionType Condition, class AActor* ConditionRemover);
	void OnPossessedPawn_Event_1(class APawn* NewPawn);
	void OnClientPossessedPawn_Event_1(class APawn* NewPawn);
	void BindOnUpdatedEvents(class UConditionsComponent* Comp);
	void ExecuteUbergraph_ConditionsBar(int EntryPoint);
	void IsShowingCondition__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
