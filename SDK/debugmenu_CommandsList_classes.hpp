#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "debugmenu_CommandsList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass debugmenu_CommandsList.debugmenu_CommandsList_C
// 0x0058 (0x02A0 - 0x0248)
class Udebugmenu_CommandsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBLTextBlock*                               GiveWeapon;                                               // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWrapBox*                                    WeaponsBox;                                               // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWrapBox*                                    WrapBox_Commands;                                         // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    CommandListClicked;                                       // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<struct FString>                             CommandsArray;                                            // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<struct FString>                             WeaponsArray;                                             // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass debugmenu_CommandsList.debugmenu_CommandsList_C"));
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature();
	void SetCommandsButtonClicked_Event_1(const struct FText& MapListString);
	void CustomEvent(const struct FText& MapListString);
	void ExecuteUbergraph_debugmenu_CommandsList(int EntryPoint);
	void CommandListClicked__DelegateSignature(const struct FText& MapName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
