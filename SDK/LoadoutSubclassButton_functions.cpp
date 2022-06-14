// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutSubclassButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutSubclassButton.LoadoutSubclassButton_C.GetClassLocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLocked                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutSubclassButton_C::GetClassLocked(bool* IsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.GetClassLocked"));

	struct
	{
		bool                           IsLocked;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.InitSubclassButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Subclass                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSubclassButton_C::InitSubclassButton(class UClass* /*ATBLCharacter*/ Subclass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.InitSubclassButton"));

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


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.BndEvt__SubclassButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadoutSubclassButton_C::BndEvt__SubclassButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.BndEvt__SubclassButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.SetSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelected                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bSkipAnim                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutSubclassButton_C::SetSelected(bool bSelected, bool bSkipAnim)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.SetSelected"));

	struct
	{
		bool                           bSelected;
		bool                           bSkipAnim;
	} params = {};

	params.bSelected = bSelected;
	params.bSkipAnim = bSkipAnim;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSubclassButton_C::Clicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.Clicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.BndEvt__SubclassButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadoutSubclassButton_C::BndEvt__SubclassButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.BndEvt__SubclassButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.BndEvt__SubclassButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadoutSubclassButton_C::BndEvt__SubclassButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.BndEvt__SubclassButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.SetLevelLocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Locked                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutSubclassButton_C::SetLevelLocked(bool Locked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.SetLevelLocked"));

	struct
	{
		bool                           Locked;
	} params = {};

	params.Locked = Locked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.UpdateNewItemsOverlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutSubclassButton_C::UpdateNewItemsOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.UpdateNewItemsOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.SetClassCapUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutSubclassButton_C::SetClassCapUI(bool IsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.SetClassCapUI"));

	struct
	{
		bool                           IsLocked;
	} params = {};

	params.IsLocked = IsLocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.UpdateClassCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSet<class UClass* /*ATBLCharacter*/> ValidClasses                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULoadoutSubclassButton_C::UpdateClassCount(EFaction Faction, TSet<class UClass* /*ATBLCharacter*/> ValidClasses)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.UpdateClassCount"));

	struct
	{
		EFaction                       Faction;
		TSet<class UClass* /*ATBLCharacter*/> ValidClasses;
	} params = {};

	params.Faction = Faction;
	params.ValidClasses = ValidClasses;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadoutSubclassButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.ExecuteUbergraph_LoadoutSubclassButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSubclassButton_C::ExecuteUbergraph_LoadoutSubclassButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.ExecuteUbergraph_LoadoutSubclassButton"));

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


// Function LoadoutSubclassButton.LoadoutSubclassButton_C.SubclassClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ SubclassClicked                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutSubclassButton_C* LoadoutSubclassButton          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSubclassButton_C::SubclassClicked__DelegateSignature(class UClass* /*ATBLCharacter*/ SubclassClicked, class ULoadoutSubclassButton_C* LoadoutSubclassButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassButton.LoadoutSubclassButton_C.SubclassClicked__DelegateSignature"));

	struct
	{
		class UClass* /*ATBLCharacter*/ SubclassClicked;
		class ULoadoutSubclassButton_C* LoadoutSubclassButton;
	} params = {};

	params.SubclassClicked = SubclassClicked;
	params.LoadoutSubclassButton = LoadoutSubclassButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
