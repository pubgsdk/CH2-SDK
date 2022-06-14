// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CinematicBars_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CinematicBars.CinematicBars_C.Handle requests changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematicBars_C::Handle_requests_changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicBars.CinematicBars_C.Handle requests changed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicBars.CinematicBars_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematicBars_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicBars.CinematicBars_C.FadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicBars.CinematicBars_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematicBars_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicBars.CinematicBars_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicBars.CinematicBars_C.Add bar requester
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicBarsMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicBars_C::Add_bar_requester(TEnumAsByte<ECinematicBarsMode> Mode, class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicBars.CinematicBars_C.Add bar requester"));

	struct
	{
		TEnumAsByte<ECinematicBarsMode> Mode;
		class UObject*                 Requester;
	} params = {};

	params.Mode = Mode;
	params.Requester = Requester;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicBars.CinematicBars_C.Remove bar requester
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicBars_C::Remove_bar_requester(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicBars.CinematicBars_C.Remove bar requester"));

	struct
	{
		class UObject*                 Requester;
	} params = {};

	params.Requester = Requester;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicBars.CinematicBars_C.Update requests soon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematicBars_C::Update_requests_soon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicBars.CinematicBars_C.Update requests soon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicBars.CinematicBars_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCinematicBars_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicBars.CinematicBars_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicBars.CinematicBars_C.ExecuteUbergraph_CinematicBars
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicBars_C::ExecuteUbergraph_CinematicBars(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicBars.CinematicBars_C.ExecuteUbergraph_CinematicBars"));

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


// Function CinematicBars.CinematicBars_C.On Mode Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicBarsMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicBars_C::On_Mode_Changed__DelegateSignature(TEnumAsByte<ECinematicBarsMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicBars.CinematicBars_C.On Mode Changed__DelegateSignature"));

	struct
	{
		TEnumAsByte<ECinematicBarsMode> Mode;
	} params = {};

	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
