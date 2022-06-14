// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TutorialActionList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutorialActionList.TutorialActionList_C.GetActionEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTutorialActionEntry_C*  Action_Entry                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialActionList_C::GetActionEntry(class UTutorialActionEntry_C** Action_Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionList.TutorialActionList_C.GetActionEntry"));

	struct
	{
		class UTutorialActionEntry_C*  Action_Entry;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Action_Entry != nullptr)
		*Action_Entry = params.Action_Entry;
}


// Function TutorialActionList.TutorialActionList_C.EntryFailed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   EntryText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTutorialActionList_C::EntryFailed(const struct FText& EntryText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionList.TutorialActionList_C.EntryFailed"));

	struct
	{
		struct FText                   EntryText;
	} params = {};

	params.EntryText = EntryText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionList.TutorialActionList_C.ResetEntries
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialActionList_C::ResetEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionList.TutorialActionList_C.ResetEntries"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionList.TutorialActionList_C.GetPercentTasksDone
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ProgressPercent                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialActionList_C::GetPercentTasksDone(float* ProgressPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionList.TutorialActionList_C.GetPercentTasksDone"));

	struct
	{
		float                          ProgressPercent;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ProgressPercent != nullptr)
		*ProgressPercent = params.ProgressPercent;
}


// Function TutorialActionList.TutorialActionList_C.ClearEntries
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorialActionList_C::ClearEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionList.TutorialActionList_C.ClearEntries"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionList.TutorialActionList_C.UpdateEntryCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 EntryText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            NewCount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialActionList_C::UpdateEntryCount(const struct FString& EntryText, int NewCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionList.TutorialActionList_C.UpdateEntryCount"));

	struct
	{
		struct FString                 EntryText;
		int                            NewCount;
	} params = {};

	params.EntryText = EntryText;
	params.NewCount = NewCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionList.TutorialActionList_C.AddEntry
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 EntryText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ControllerEntryText            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 EntryKeyboardCallout           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 EntryControllerCallout         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FText                   EntryDesc                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            EntryCount                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialActionList_C::AddEntry(const struct FString& EntryText, const struct FString& ControllerEntryText, const struct FString& EntryKeyboardCallout, const struct FString& EntryControllerCallout, const struct FText& EntryDesc, int EntryCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionList.TutorialActionList_C.AddEntry"));

	struct
	{
		struct FString                 EntryText;
		struct FString                 ControllerEntryText;
		struct FString                 EntryKeyboardCallout;
		struct FString                 EntryControllerCallout;
		struct FText                   EntryDesc;
		int                            EntryCount;
	} params = {};

	params.EntryText = EntryText;
	params.ControllerEntryText = ControllerEntryText;
	params.EntryKeyboardCallout = EntryKeyboardCallout;
	params.EntryControllerCallout = EntryControllerCallout;
	params.EntryDesc = EntryDesc;
	params.EntryCount = EntryCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionList.TutorialActionList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTutorialActionList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionList.TutorialActionList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialActionList.TutorialActionList_C.ExecuteUbergraph_TutorialActionList
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialActionList_C::ExecuteUbergraph_TutorialActionList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialActionList.TutorialActionList_C.ExecuteUbergraph_TutorialActionList"));

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
