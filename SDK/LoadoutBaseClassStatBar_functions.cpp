// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutBaseClassStatBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutBaseClassStatBar.LoadoutBaseClassStatBar_C.UpdateStats
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Stamina                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Speed                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutBaseClassStatBar_C::UpdateStats(int Health, int Stamina, int Speed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutBaseClassStatBar.LoadoutBaseClassStatBar_C.UpdateStats"));

	struct
	{
		int                            Health;
		int                            Stamina;
		int                            Speed;
	} params = {};

	params.Health = Health;
	params.Stamina = Stamina;
	params.Speed = Speed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutBaseClassStatBar.LoadoutBaseClassStatBar_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutBaseClassStatBar_C::Refresh(class UClass* /*ATBLCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutBaseClassStatBar.LoadoutBaseClassStatBar_C.Refresh"));

	struct
	{
		class UClass* /*ATBLCharacter*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutBaseClassStatBar.LoadoutBaseClassStatBar_C.ExecuteUbergraph_LoadoutBaseClassStatBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutBaseClassStatBar_C::ExecuteUbergraph_LoadoutBaseClassStatBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutBaseClassStatBar.LoadoutBaseClassStatBar_C.ExecuteUbergraph_LoadoutBaseClassStatBar"));

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
