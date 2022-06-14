#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeakParry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeakParry.WeakParry_C
// 0x0008 (0x0188 - 0x0180)
class UWeakParry_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass WeakParry.WeakParry_C"));
		return ptr;
	}


	void OnAssemble_WeakParry();
	void EventEndAnimation();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void SoftRecovery();
	void ExecuteUbergraph_WeakParry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
