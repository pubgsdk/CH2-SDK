#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EpilogueState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EpilogueState.EpilogueState_C
// 0x001F (0x0050 - 0x0031)
class UEpilogueState_C : public UBaseCinematicState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPrologueEpilogueWidget_C*                   Prologue_widget;                                          // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                ScoreScreenMusicTimer;                                    // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass EpilogueState.EpilogueState_C"));
		return ptr;
	}


	void BeginState(const struct FGameplayTag& PreviousState);
	void EndState(const struct FGameplayTag& NextState);
	void Play_Post_game_music();
	void PlayScoreScreenMusic();
	void ExecuteUbergraph_EpilogueState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
