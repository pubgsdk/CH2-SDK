#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ReleaseStab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReleaseStab.ReleaseStab_C
// 0x0008 (0x0188 - 0x0180)
class UReleaseStab_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ReleaseStab.ReleaseStab_C"));
		return ptr;
	}


	void OnAssemble_ReleaseStab();
	void EventEndAnimation();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void ExecuteUbergraph_ReleaseStab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
