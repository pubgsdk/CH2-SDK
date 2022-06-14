// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TutorialCalloutAction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutorialCalloutAction.TutorialCalloutAction_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTutorialCalloutAction_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialCalloutAction.TutorialCalloutAction_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialCalloutAction.TutorialCalloutAction_C.UsableFade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           FadeIn                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTutorialCalloutAction_C::UsableFade(bool FadeIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialCalloutAction.TutorialCalloutAction_C.UsableFade"));

	struct
	{
		bool                           FadeIn;
	} params = {};

	params.FadeIn = FadeIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialCalloutAction.TutorialCalloutAction_C.ExecuteUbergraph_TutorialCalloutAction
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialCalloutAction_C::ExecuteUbergraph_TutorialCalloutAction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialCalloutAction.TutorialCalloutAction_C.ExecuteUbergraph_TutorialCalloutAction"));

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
