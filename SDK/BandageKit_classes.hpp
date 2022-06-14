#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BandageKit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BandageKit.BandageKit_C
// 0x0008 (0x0030 - 0x0028)
class UBandageKit_C : public UAssemblyInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BandageKit.BandageKit_C"));
		return ptr;
	}


	void OnAssemble_BandageKit();
	void ExecuteUbergraph_BandageKit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
