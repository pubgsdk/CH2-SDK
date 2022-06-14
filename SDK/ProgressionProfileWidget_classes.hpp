#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ProgressionProfileWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ProgressionProfileWidget.ProgressionProfileWidget_C
// 0x0040 (0x0288 - 0x0248)
class UProgressionProfileWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  PlayerNameTextBlock;                                      // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGlobalRankProgressBarWidget_C*              ProgressBar;                                              // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               ShowName;                                                 // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnLeveledUp;                                              // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnProgressCompleted;                                      // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ProgressionProfileWidget.ProgressionProfileWidget_C"));
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Start_Animations();
	void BndEvt__ProgressBar_K2Node_ComponentBoundEvent_0_OnLeveledUp__DelegateSignature();
	void BndEvt__ProgressBar_K2Node_ComponentBoundEvent_1_OnProgressCompleted__DelegateSignature();
	void Set_Data();
	void ExecuteUbergraph_ProgressionProfileWidget(int EntryPoint);
	void OnProgressCompleted__DelegateSignature();
	void OnLeveledUp__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
