#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FistSpecial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FistSpecial.FistSpecial_C
// 0x0008 (0x0030 - 0x0028)
class UFistSpecial_C : public UAssemblyInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FistSpecial.FistSpecial_C"));
		return ptr;
	}


	void OnAssemble_FistSpecial();
	void ExecuteUbergraph_FistSpecial(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
