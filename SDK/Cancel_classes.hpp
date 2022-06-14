#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Cancel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cancel.Cancel_C
// 0x0008 (0x0188 - 0x0180)
class UCancel_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Cancel.Cancel_C"));
		return ptr;
	}


	void OnAssemble_Cancel();
	void EventEndAnimation();
	void ExecuteUbergraph_Cancel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
