#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FunctionLibrary_Breakables_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FunctionLibrary_Breakables.FunctionLibrary_Breakables_C
// 0x0000 (0x0028 - 0x0028)
class UFunctionLibrary_Breakables_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FunctionLibrary_Breakables.FunctionLibrary_Breakables_C"));
		return ptr;
	}


	static void AwardScoreOnDamage(const struct FDamageTakenEvent& DamageEvent, class UTBLGameScoringComponent* ScoringComponent, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
