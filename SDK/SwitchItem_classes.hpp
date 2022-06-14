#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SwitchItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SwitchItem.SwitchItem_C
// 0x0008 (0x0188 - 0x0180)
class USwitchItem_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SwitchItem.SwitchItem_C"));
		return ptr;
	}


	void OnAssemble_SwitchItem();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void ExecuteUbergraph_SwitchItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
