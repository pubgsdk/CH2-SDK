#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AutomatedTestingState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AutomatedTestingState.AutomatedTestingState_C
// 0x000F (0x0040 - 0x0031)
class UAutomatedTestingState_C : public UBaseCinematicState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AutomatedTestingState.AutomatedTestingState_C"));
		return ptr;
	}


	void BeginState(const struct FGameplayTag& PreviousState);
	void ExecuteUbergraph_AutomatedTestingState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
