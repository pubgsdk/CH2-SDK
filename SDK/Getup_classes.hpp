#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Getup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Getup.Getup_C
// 0x0008 (0x0190 - 0x0188)
class UGetup_C : public UBaseCrowdControlState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Getup.Getup_C"));
		return ptr;
	}


	void OnAssemble_Getup();
	void ExecuteUbergraph_Getup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
