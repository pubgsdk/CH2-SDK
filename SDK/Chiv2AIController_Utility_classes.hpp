#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Chiv2AIController_Utility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Chiv2AIController_Utility.Chiv2AIController_Utility_C
// 0x0008 (0x0928 - 0x0920)
class AChiv2AIController_Utility_C : public ATBLAICombatController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Chiv2AIController_Utility.Chiv2AIController_Utility_C"));
		return ptr;
	}


	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_Chiv2AIController_Utility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
