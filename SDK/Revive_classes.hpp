#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Revive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Revive.Revive_C
// 0x0010 (0x0190 - 0x0180)
class URevive_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ATBLCharacter*                               DownedCharacter;                                          // 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Revive.Revive_C"));
		return ptr;
	}


	void OnAssemble_Revive();
	void EventEndAnimation();
	void StartRevive(class ATBLCharacter* DownedCharacter);
	void Revive();
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_Revive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
