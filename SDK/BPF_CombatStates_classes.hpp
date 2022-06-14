#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_CombatStates_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_CombatStates.BPF_CombatStates_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_CombatStates_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_CombatStates.BPF_CombatStates_C"));
		return ptr;
	}


	static void IsUsingCrossbow(class AActor* Actor, class UObject* __WorldContext, bool* _);
	static bool IsCrowdControlState(const struct FName& State, class UObject* __WorldContext);
	static void DoesAttackContainName(class UObject* Object, const struct FString& Substring, class UObject* __WorldContext, bool* _);
	static void IsUninterruptableInRelease(class UAttackType* Attack_Type, class UObject* __WorldContext, bool* _);
	static void HorseInterpCategory(TEnumAsByte<EHorseInterpCategory> _, class UObject* __WorldContext, float* __);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
