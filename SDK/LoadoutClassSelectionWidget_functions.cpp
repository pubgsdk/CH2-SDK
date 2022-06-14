// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutClassSelectionWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.GetValidSubclasses
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UClass* /*ATBLCharacter*/> Subclasses                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<class UClass* /*ATBLCharacter*/> ValidSubclasses                (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void ULoadoutClassSelectionWidget_C::GetValidSubclasses(TArray<class UClass* /*ATBLCharacter*/>* Subclasses, TArray<class UClass* /*ATBLCharacter*/>* ValidSubclasses)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.GetValidSubclasses"));

	struct
	{
		TArray<class UClass* /*ATBLCharacter*/> Subclasses;
		TArray<class UClass* /*ATBLCharacter*/> ValidSubclasses;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Subclasses != nullptr)
		*Subclasses = params.Subclasses;
	if (ValidSubclasses != nullptr)
		*ValidSubclasses = params.ValidSubclasses;
}


// Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateClassSelectionWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ ParentClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*ATBLCharacter*/ CurrentSubclass                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassSelectionWidget_C::UpdateClassSelectionWidget(class UClass* /*ATBLCharacter*/ ParentClass, class UClass* /*ATBLCharacter*/ CurrentSubclass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateClassSelectionWidget"));

	struct
	{
		class UClass* /*ATBLCharacter*/ ParentClass;
		class UClass* /*ATBLCharacter*/ CurrentSubclass;
	} params = {};

	params.ParentClass = ParentClass;
	params.CurrentSubclass = CurrentSubclass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadoutClassSelectionWidget_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.OnSubclassClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ SubclassClicked                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutSubclassButton_C* LoadoutSubclassButton          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassSelectionWidget_C::OnSubclassClicked(class UClass* /*ATBLCharacter*/ SubclassClicked, class ULoadoutSubclassButton_C* LoadoutSubclassButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.OnSubclassClicked"));

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


// Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.ClassSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelected                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutClassSelectionWidget_C::ClassSelected(bool bSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.ClassSelected"));

	struct
	{
		bool                           bSelected;
	} params = {};

	params.bSelected = bSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateSelectedSubclass
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Subclass                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutSubclassButton_C* LoadoutClassButton             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassSelectionWidget_C::UpdateSelectedSubclass(class UClass* /*ATBLCharacter*/ Subclass, class ULoadoutSubclassButton_C* LoadoutClassButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateSelectedSubclass"));

	struct
	{
		class UClass* /*ATBLCharacter*/ Subclass;
		class ULoadoutSubclassButton_C* LoadoutClassButton;
	} params = {};

	params.Subclass = Subclass;
	params.LoadoutClassButton = LoadoutClassButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateSubclassLockedState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSet<class UClass* /*ATBLCharacter*/> ValidClasses                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EFaction                       Faction                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassSelectionWidget_C::UpdateSubclassLockedState(TSet<class UClass* /*ATBLCharacter*/> ValidClasses, EFaction Faction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateSubclassLockedState"));

	struct
	{
		TSet<class UClass* /*ATBLCharacter*/> ValidClasses;
		EFaction                       Faction;
	} params = {};

	params.ValidClasses = ValidClasses;
	params.Faction = Faction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.ExecuteUbergraph_LoadoutClassSelectionWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassSelectionWidget_C::ExecuteUbergraph_LoadoutClassSelectionWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.ExecuteUbergraph_LoadoutClassSelectionWidget"));

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


// Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.SubclassSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Subclass                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutClassSelectionWidget_C* LoadoutClassSelectionWidget    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutSubclassButton_C* LoadoutClassButton             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsLocked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutClassSelectionWidget_C::SubclassSelected__DelegateSignature(class UClass* /*ATBLCharacter*/ Subclass, class ULoadoutClassSelectionWidget_C* LoadoutClassSelectionWidget, class ULoadoutSubclassButton_C* LoadoutClassButton, bool bIsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.SubclassSelected__DelegateSignature"));

	struct
	{
		class UClass* /*ATBLCharacter*/ Subclass;
		class ULoadoutClassSelectionWidget_C* LoadoutClassSelectionWidget;
		class ULoadoutSubclassButton_C* LoadoutClassButton;
		bool                           bIsLocked;
	} params = {};

	params.Subclass = Subclass;
	params.LoadoutClassSelectionWidget = LoadoutClassSelectionWidget;
	params.LoadoutClassButton = LoadoutClassButton;
	params.bIsLocked = bIsLocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
