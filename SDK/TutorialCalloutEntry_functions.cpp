// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TutorialCalloutEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutorialCalloutEntry.TutorialCalloutEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTutorialCalloutEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialCalloutEntry.TutorialCalloutEntry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialCalloutEntry.TutorialCalloutEntry_C.ExecuteUbergraph_TutorialCalloutEntry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialCalloutEntry_C::ExecuteUbergraph_TutorialCalloutEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialCalloutEntry.TutorialCalloutEntry_C.ExecuteUbergraph_TutorialCalloutEntry"));

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
