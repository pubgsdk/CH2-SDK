#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_Stats_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_Stats.BPF_Stats_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Stats_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_Stats.BPF_Stats_C"));
		return ptr;
	}


	static void GetMaxHealth(class AActor* Actor, class UObject* __WorldContext, float* Health);
	static void IsAlive(class AActor* Actor, class UObject* __WorldContext, bool* IsAlive);
	static void GetHealthPercent(class AActor* Actor, class UObject* __WorldContext, float* Percent);
	static void GetHealth(class AActor* Actor, class UObject* __WorldContext, float* Health);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
