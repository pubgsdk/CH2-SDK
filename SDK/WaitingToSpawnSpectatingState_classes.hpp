#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WaitingToSpawnSpectatingState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C
// 0x0017 (0x0048 - 0x0031)
class UWaitingToSpawnSpectatingState_C : public UBaseCinematicState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ALevelSequenceActor*                         Playing_Sequence;                                         // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WaitingToSpawnSpectatingState.WaitingToSpawnSpectatingState_C"));
		return ptr;
	}


	void EndState(const struct FGameplayTag& NextState);
	void HandleUIStateChanged(const struct FGameplayTag& UIState);
	void BeginState(const struct FGameplayTag& PreviousState);
	void Stop_sequence();
	void Start_sequence();
	void HandlePossessedPawn(class APawn* Pawn);
	void ExecuteUbergraph_WaitingToSpawnSpectatingState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
