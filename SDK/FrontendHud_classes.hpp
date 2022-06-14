#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FrontendHud_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FrontendHud.FrontendHud_C
// 0x0018 (0x0910 - 0x08F8)
class AFrontendHud_C : public ATBLHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0900(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMainMenuManager_C*                          Fake_menu_manager;                                        // 0x0908(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FrontendHud.FrontendHud_C"));
		return ptr;
	}


	void InpActEvt_InGameMenu_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FrontendHud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
