#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VictoryDefeatState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VictoryDefeatState.VictoryDefeatState_C
// 0x0027 (0x0058 - 0x0031)
class UVictoryDefeatState_C : public UBaseCinematicState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidget*                                     VictoryDefeatWidget;                                      // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ALevelSequenceActor*                         Playing_Sequence;                                         // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Query_Victor_Timer_Handle;                                // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass VictoryDefeatState.VictoryDefeatState_C"));
		return ptr;
	}


	void On_Fade_Out_Started();
	void BeginState(const struct FGameplayTag& PreviousState);
	void EndState(const struct FGameplayTag& NextState);
	void On_Fade_Out_Finished();
	void Query_victor();
	void OnPostMatchEndTimeChanged(float Time);
	void ExecuteUbergraph_VictoryDefeatState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
