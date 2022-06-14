#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Dismount_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dismount.Dismount_C
// 0x0008 (0x0188 - 0x0180)
class UDismount_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Dismount.Dismount_C"));
		return ptr;
	}


	void OnAssemble_Dismount();
	void EventEndAnimation();
	void ExecuteUbergraph_Dismount(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
