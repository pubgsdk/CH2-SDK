// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_Gamemodes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPF_Gamemodes.BPF_Gamemodes_C.Is Map Brawl Gamemode
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 In_Map_Name                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBPF_Gamemodes_C::Is_Map_Brawl_Gamemode(const struct FString& In_Map_Name, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gamemodes.BPF_Gamemodes_C.Is Map Brawl Gamemode"));

	struct
	{
		struct FString                 In_Map_Name;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params = {};

	params.In_Map_Name = In_Map_Name;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BPF_Gamemodes.BPF_Gamemodes_C.IsGamemodeFFA
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPF_Gamemodes_C::IsGamemodeFFA(class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPF_Gamemodes.BPF_Gamemodes_C.IsGamemodeFFA"));

	struct
	{
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
