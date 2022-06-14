#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ForwardSpawning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ForwardSpawning.ForwardSpawning_C
// 0x000F (0x0040 - 0x0031)
class UForwardSpawning_C : public UBaseCinematicState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ForwardSpawning.ForwardSpawning_C"));
		return ptr;
	}


	void BeginState(const struct FGameplayTag& PreviousState);
	void EndState(const struct FGameplayTag& NextState);
	void HandleNextSpawnWaveChanged(class ASpawnWave* SpawnWave);
	void HandlePossessedPawn(class APawn* Pawn);
	void CleanupPostProcessEffects();
	void ExecuteUbergraph_ForwardSpawning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
