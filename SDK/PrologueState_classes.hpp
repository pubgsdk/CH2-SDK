#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PrologueState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrologueState.PrologueState_C
// 0x0040 (0x0068 - 0x0028)
class UPrologueState_C : public UCinematicState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPrologueEpilogueWidget_C*                   Prologue_widget;                                          // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UClass* /*UPrologueEpilogueWidget_C*/        Prologue_widget_class;                                    // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ALevelSequenceActor*                         Prologue_sequence;                                        // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Time_to_stay_in_prologue;                                 // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FTimerHandle                                Stop_Prologue_Handle;                                     // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Fadeout_Prologue_Handle;                                  // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Check_Screen_Manager_Handle;                              // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PrologueState.PrologueState_C"));
		return ptr;
	}


	void On_Fade_Out_Started();
	void BeginState(const struct FGameplayTag& PreviousState);
	void Stop_Prologue();
	void EndState(const struct FGameplayTag& NextState);
	void Check_for_Screen_Manager();
	void Actually_start();
	void FadeOutPrologue();
	void On_Fade_Out_Finished();
	void ForceEndState();
	void ExecuteUbergraph_PrologueState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
