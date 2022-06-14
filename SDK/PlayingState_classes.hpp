#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayingState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayingState.PlayingState_C
// 0x000F (0x0040 - 0x0031)
class UPlayingState_C : public UBaseCinematicState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlayingState.PlayingState_C"));
		return ptr;
	}


	void On_Fade_Out_Finished();
	void On_Fade_Out_Started();
	void BeginState(const struct FGameplayTag& PreviousState);
	void Check_Pawn(class APawn* Pawn);
	void HandlePossessedPawn(class APawn* Pawn);
	void ExecuteUbergraph_PlayingState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
