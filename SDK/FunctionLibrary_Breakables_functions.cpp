// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FunctionLibrary_Breakables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FunctionLibrary_Breakables.FunctionLibrary_Breakables_C.AwardScoreOnDamage
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageEvent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class UTBLGameScoringComponent* ScoringComponent               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_Breakables_C::AwardScoreOnDamage(const struct FDamageTakenEvent& DamageEvent, class UTBLGameScoringComponent* ScoringComponent, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_Breakables.FunctionLibrary_Breakables_C.AwardScoreOnDamage"));

	struct
	{
		struct FDamageTakenEvent       DamageEvent;
		class UTBLGameScoringComponent* ScoringComponent;
		class UObject*                 __WorldContext;
	} params = {};

	params.DamageEvent = DamageEvent;
	params.ScoringComponent = ScoringComponent;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
