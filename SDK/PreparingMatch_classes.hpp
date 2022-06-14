#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PreparingMatch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PreparingMatch.PreparingMatch_C
// 0x0020 (0x0051 - 0x0031)
class UPreparingMatch_C : public UBaseCinematicState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidget*                                     Waiting_widget;                                           // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ALevelSequenceActor*                         Sequence;                                                 // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Skipped;                                                  // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PreparingMatch.PreparingMatch_C"));
		return ptr;
	}


	void IsTdmWithLts(bool* IsTdmWithLts);
	void On_Fade_Out_Started();
	void HandleMatchStateChanged(const struct FName& MatchState);
	void BeginState(const struct FGameplayTag& PreviousState);
	void EndState(const struct FGameplayTag& NextState);
	void On_Fade_Out_Finished();
	void ExecuteUbergraph_PreparingMatch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
