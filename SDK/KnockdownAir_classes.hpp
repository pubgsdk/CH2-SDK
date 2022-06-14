#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KnockdownAir_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KnockdownAir.KnockdownAir_C
// 0x0008 (0x0190 - 0x0188)
class UKnockdownAir_C : public UBaseKnockdown_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass KnockdownAir.KnockdownAir_C"));
		return ptr;
	}


	void OnAssemble_KnockdownAir();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventLanded(class ACharacter* InTarget);
	void EventEndAnimation();
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_KnockdownAir(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
