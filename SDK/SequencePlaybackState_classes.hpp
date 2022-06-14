#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SequencePlaybackState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SequencePlaybackState.SequencePlaybackState_C
// 0x0010 (0x0038 - 0x0028)
class USequencePlaybackState_C : public UCinematicState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ALevelSequenceActor*                         Sequence_to_play;                                         // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SequencePlaybackState.SequencePlaybackState_C"));
		return ptr;
	}


	void ShouldRequestCinematicMode(bool* Return_Value);
	void BeginState(const struct FGameplayTag& PreviousState);
	void HandleGameCinematicStateChanged(ECinematicGameState GameStateCinematicState);
	void Start_sequence();
	void Stop_sequence();
	void EndState(const struct FGameplayTag& NextState);
	void HandleCharacterAllowControl();
	void ExecuteUbergraph_SequencePlaybackState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
