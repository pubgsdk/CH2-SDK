#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Reload_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Reload.Reload_C
// 0x0009 (0x0189 - 0x0180)
class UReload_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               IsSoftRecovery;                                           // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Reload.Reload_C"));
		return ptr;
	}


	bool CanSprint();
	void OnAssemble_Reload();
	void EventEndAnimation();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void SoftRecovery();
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_Reload(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
