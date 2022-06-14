#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ClimbingDismountBottom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClimbingDismountBottom.ClimbingDismountBottom_C
// 0x0008 (0x0190 - 0x0188)
class UClimbingDismountBottom_C : public UClimbing_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ClimbingDismountBottom.ClimbingDismountBottom_C"));
		return ptr;
	}


	void OnAssemble_ClimbingDismountBottom();
	void ExecuteUbergraph_ClimbingDismountBottom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
