// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpecialItemAbility_Inspired_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.SendHealAnalyticsEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpecialItemAbility_Inspired_C::SendHealAnalyticsEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.SendHealAnalyticsEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.InspireCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpecialItemAbility_Inspired_C::InspireCharacter(class ATBLCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.InspireCharacter"));

	struct
	{
		class ATBLCharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.OnUseItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpecialItemAbility_Inspired_C::OnUseItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.OnUseItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.ExecuteUbergraph_SpecialItemAbility_Inspired
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpecialItemAbility_Inspired_C::ExecuteUbergraph_SpecialItemAbility_Inspired(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.ExecuteUbergraph_SpecialItemAbility_Inspired"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
