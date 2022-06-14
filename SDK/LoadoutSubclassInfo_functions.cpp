// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutSubclassInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.UpdateSubclass
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Subclass                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSubclassInfo_C::UpdateSubclass(class UClass* /*ATBLCharacter*/ Subclass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.UpdateSubclass"));

	struct
	{
		class UClass* /*ATBLCharacter*/ Subclass;
	} params = {};

	params.Subclass = Subclass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateSubclassPerk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSubclassInfo_C::CreateSubclassPerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateSubclassPerk"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateAbilityPerk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSubclassInfo_C::CreateAbilityPerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateAbilityPerk"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateVunerabilityPerk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSubclassInfo_C::CreateVunerabilityPerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateVunerabilityPerk"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadoutSubclassInfo_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.ExecuteUbergraph_LoadoutSubclassInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSubclassInfo_C::ExecuteUbergraph_LoadoutSubclassInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.ExecuteUbergraph_LoadoutSubclassInfo"));

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


// Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.OnPlayButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSubclassInfo_C::OnPlayButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.OnPlayButtonClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
