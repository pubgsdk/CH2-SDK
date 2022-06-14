#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_Tankard02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_Tankard02.Carryable_Tankard02_C
// 0x0008 (0x1288 - 0x1280)
class ACarryable_Tankard02_C : public ABaseItem_Drunk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_Tankard02.Carryable_Tankard02_C"));
		return ptr;
	}


	void OnInitialize();
	void ExecuteUbergraph_Carryable_Tankard02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
