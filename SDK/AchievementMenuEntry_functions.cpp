// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AchievementMenuEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AchievementMenuEntry.AchievementMenuEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UAchievementMenuEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AchievementMenuEntry.AchievementMenuEntry_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AchievementMenuEntry.AchievementMenuEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAchievementMenuEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AchievementMenuEntry.AchievementMenuEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AchievementMenuEntry.AchievementMenuEntry_C.OpenMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAchievementMenuEntry_C::OpenMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AchievementMenuEntry.AchievementMenuEntry_C.OpenMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AchievementMenuEntry.AchievementMenuEntry_C.Update Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAchievementMenuEntry_C::Update_Widget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AchievementMenuEntry.AchievementMenuEntry_C.Update Widget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AchievementMenuEntry.AchievementMenuEntry_C.SetState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAchievementState> Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAchievementMenuEntry_C::SetState(TEnumAsByte<EAchievementState> Selection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AchievementMenuEntry.AchievementMenuEntry_C.SetState"));

	struct
	{
		TEnumAsByte<EAchievementState> Selection;
	} params = {};

	params.Selection = Selection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AchievementMenuEntry.AchievementMenuEntry_C.CloseMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAchievementMenuEntry_C::CloseMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AchievementMenuEntry.AchievementMenuEntry_C.CloseMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AchievementMenuEntry.AchievementMenuEntry_C.ExecuteUbergraph_AchievementMenuEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAchievementMenuEntry_C::ExecuteUbergraph_AchievementMenuEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AchievementMenuEntry.AchievementMenuEntry_C.ExecuteUbergraph_AchievementMenuEntry"));

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


// Function AchievementMenuEntry.AchievementMenuEntry_C.OnEntryOpened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAchievementMenuEntry_C* Entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAchievementMenuEntry_C::OnEntryOpened__DelegateSignature(class UAchievementMenuEntry_C* Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AchievementMenuEntry.AchievementMenuEntry_C.OnEntryOpened__DelegateSignature"));

	struct
	{
		class UAchievementMenuEntry_C* Entry;
	} params = {};

	params.Entry = Entry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
