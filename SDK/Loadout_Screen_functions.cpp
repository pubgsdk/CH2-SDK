// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Loadout_Screen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Loadout_Screen.Loadout_Screen_C.K2_GetFocusWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* ULoadout_Screen_C::K2_GetFocusWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.K2_GetFocusWidget"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Loadout_Screen.Loadout_Screen_C.TryResolveShouldHaveShield
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::TryResolveShouldHaveShield(class UClass* /*AInventoryItem*/ Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.TryResolveShouldHaveShield"));

	struct
	{
		class UClass* /*AInventoryItem*/ Item;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.CanWeaponUseShield
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           CanUseShield                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadout_Screen_C::CanWeaponUseShield(class UClass* /*AInventoryItem*/ Weapon, bool* CanUseShield)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.CanWeaponUseShield"));

	struct
	{
		class UClass* /*AInventoryItem*/ Weapon;
		bool                           CanUseShield;
	} params = {};

	params.Weapon = Weapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanUseShield != nullptr)
		*CanUseShield = params.CanUseShield;
}


// Function Loadout_Screen.Loadout_Screen_C.UpdateContentVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::UpdateContentVisibility(ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.UpdateContentVisibility"));

	struct
	{
		ESlateVisibility               InVisibility;
	} params = {};

	params.InVisibility = InVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.GetLoadoutSubclassButton
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Subclass                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutSubclassButton_C* SubclassButton                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::GetLoadoutSubclassButton(class UClass* /*ATBLCharacter*/ Subclass, class ULoadoutSubclassButton_C** SubclassButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.GetLoadoutSubclassButton"));

	struct
	{
		class UClass* /*ATBLCharacter*/ Subclass;
		class ULoadoutSubclassButton_C* SubclassButton;
	} params = {};

	params.Subclass = Subclass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SubclassButton != nullptr)
		*SubclassButton = params.SubclassButton;
}


// Function Loadout_Screen.Loadout_Screen_C.SelectNextSubclass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsNext                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadout_Screen_C::SelectNextSubclass(bool bIsNext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.SelectNextSubclass"));

	struct
	{
		bool                           bIsNext;
	} params = {};

	params.bIsNext = bIsNext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULoadout_Screen_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.OnPreviewKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Loadout_Screen.Loadout_Screen_C.ConstructLoadoutClassButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::ConstructLoadoutClassButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.ConstructLoadoutClassButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.GetSpawnableClasses
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UClass* /*ATBLCharacter*/> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash)

TArray<class UClass* /*ATBLCharacter*/> ULoadout_Screen_C::GetSpawnableClasses()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.GetSpawnableClasses"));

	struct
	{
		TArray<class UClass* /*ATBLCharacter*/> ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Loadout_Screen.Loadout_Screen_C.GetCurrentWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ CurrentLoadoutItemClass        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UClass* /*UWeaponGroup*/> WeaponGroup                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// class ATBLPlayerController*    Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*ULoadoutSelection*/ Loadout                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ CurrentWeaponClass             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::GetCurrentWeapon(class UClass* /*AInventoryItem*/ CurrentLoadoutItemClass, class ATBLPlayerController* Controller, class UClass* /*ULoadoutSelection*/ Loadout, TArray<class UClass* /*UWeaponGroup*/>* WeaponGroup, class UClass* /*AInventoryItem*/* CurrentWeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.GetCurrentWeapon"));

	struct
	{
		class UClass* /*AInventoryItem*/ CurrentLoadoutItemClass;
		TArray<class UClass* /*UWeaponGroup*/> WeaponGroup;
		class ATBLPlayerController*    Controller;
		class UClass* /*ULoadoutSelection*/ Loadout;
		class UClass* /*AInventoryItem*/ CurrentWeaponClass;
	} params = {};

	params.CurrentLoadoutItemClass = CurrentLoadoutItemClass;
	params.Controller = Controller;
	params.Loadout = Loadout;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (WeaponGroup != nullptr)
		*WeaponGroup = params.WeaponGroup;
	if (CurrentWeaponClass != nullptr)
		*CurrentWeaponClass = params.CurrentWeaponClass;
}


// Function Loadout_Screen.Loadout_Screen_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULoadout_Screen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Loadout_Screen.Loadout_Screen_C.FindCurrentSubclass
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Subclass                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SaveLoadout                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadout_Screen_C::FindCurrentSubclass(class UClass* /*ATBLCharacter*/* Subclass, bool* SaveLoadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.FindCurrentSubclass"));

	struct
	{
		class UClass* /*ATBLCharacter*/ Subclass;
		bool                           SaveLoadout;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Subclass != nullptr)
		*Subclass = params.Subclass;
	if (SaveLoadout != nullptr)
		*SaveLoadout = params.SaveLoadout;
}


// Function Loadout_Screen.Loadout_Screen_C.GetWeaponSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            WeaponSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UClass* /*UWeaponGroup*/> WeaponList                     (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::GetWeaponSelection(class UClass* /*ATBLCharacter*/ CharacterClass, int WeaponSlot, TArray<class UClass* /*UWeaponGroup*/>* WeaponList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.GetWeaponSelection"));

	struct
	{
		class UClass* /*ATBLCharacter*/ CharacterClass;
		int                            WeaponSlot;
		TArray<class UClass* /*UWeaponGroup*/> WeaponList;
	} params = {};

	params.CharacterClass = CharacterClass;
	params.WeaponSlot = WeaponSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (WeaponList != nullptr)
		*WeaponList = params.WeaponList;
}


// Function Loadout_Screen.Loadout_Screen_C.GetDefaultWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UClass* /*UWeaponGroup*/> WeaponGroupArray               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ Weapon                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::GetDefaultWeapon(TArray<class UClass* /*UWeaponGroup*/>* WeaponGroupArray, class UClass* /*AInventoryItem*/* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.GetDefaultWeapon"));

	struct
	{
		TArray<class UClass* /*UWeaponGroup*/> WeaponGroupArray;
		class UClass* /*AInventoryItem*/ Weapon;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (WeaponGroupArray != nullptr)
		*WeaponGroupArray = params.WeaponGroupArray;
	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


// Function Loadout_Screen.Loadout_Screen_C.GetCurrentLoadoutForClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ CurrentClass                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLoadout                Loadout                        (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void ULoadout_Screen_C::GetCurrentLoadoutForClass(class UClass* /*ATBLCharacter*/ CurrentClass, struct FLoadout* Loadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.GetCurrentLoadoutForClass"));

	struct
	{
		class UClass* /*ATBLCharacter*/ CurrentClass;
		struct FLoadout                Loadout;
	} params = {};

	params.CurrentClass = CurrentClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Loadout != nullptr)
		*Loadout = params.Loadout;
}


// Function Loadout_Screen.Loadout_Screen_C.SaveLoadout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::SaveLoadout(class UClass* /*ATBLCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.SaveLoadout"));

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


// Function Loadout_Screen.Loadout_Screen_C.PlayNewLoadoutAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::PlayNewLoadoutAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.PlayNewLoadoutAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.NextSpawnWaveReplicated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::NextSpawnWaveReplicated_Event_1(class ASpawnWave* SpawnWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.NextSpawnWaveReplicated_Event_1"));

	struct
	{
		class ASpawnWave*              SpawnWave;
	} params = {};

	params.SpawnWave = SpawnWave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.OnOpenedScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::OnOpenedScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.OnOpenedScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadout_Screen_C::BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.SetAllowedClasses
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::SetAllowedClasses(class ASpawnWave* SpawnWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.SetAllowedClasses"));

	struct
	{
		class ASpawnWave*              SpawnWave;
	} params = {};

	params.SpawnWave = SpawnWave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadout_Screen_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.NewBaseClassSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::NewBaseClassSelected(class UClass* /*ATBLCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.NewBaseClassSelected"));

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


// Function Loadout_Screen.Loadout_Screen_C.InitSpawnableClasses
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::InitSpawnableClasses()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.InitSpawnableClasses"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.InitLoadout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::InitLoadout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.InitLoadout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.InitClassSelectBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::InitClassSelectBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.InitClassSelectBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.InitUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::InitUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.InitUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.InitLoadoutScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::InitLoadoutScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.InitLoadoutScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.CloseAndConfirmLoadout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::CloseAndConfirmLoadout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.CloseAndConfirmLoadout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.Spectate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::Spectate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.Spectate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.OpenTeamSelect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::OpenTeamSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.OpenTeamSelect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.PostYouWillRespawnAsNotification
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::PostYouWillRespawnAsNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.PostYouWillRespawnAsNotification"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.OnInputChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGamepadInputMode              GamepadInputMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::OnInputChanged(EGamepadInputMode GamepadInputMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.OnInputChanged"));

	struct
	{
		EGamepadInputMode              GamepadInputMode;
	} params = {};

	params.GamepadInputMode = GamepadInputMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.NewSubclassSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Subclass                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::NewSubclassSelected(class UClass* /*ATBLCharacter*/ Subclass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.NewSubclassSelected"));

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


// Function Loadout_Screen.Loadout_Screen_C.OnStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EOverviewScreenState> NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EOverviewScreenState> PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::OnStateChanged(TEnumAsByte<EOverviewScreenState> NewState, TEnumAsByte<EOverviewScreenState> PreviousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.OnStateChanged"));

	struct
	{
		TEnumAsByte<EOverviewScreenState> NewState;
		TEnumAsByte<EOverviewScreenState> PreviousState;
	} params = {};

	params.NewState = NewState;
	params.PreviousState = PreviousState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.BindWidgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::BindWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.BindWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.SubclassSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Subclass                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutClassSelectionWidget_C* LoadoutClassSelectionWidget    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutSubclassButton_C* LoadoutClassButton             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsLocked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadout_Screen_C::SubclassSelected(class UClass* /*ATBLCharacter*/ Subclass, class ULoadoutClassSelectionWidget_C* LoadoutClassSelectionWidget, class ULoadoutSubclassButton_C* LoadoutClassButton, bool bIsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.SubclassSelected"));

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


// Function Loadout_Screen.Loadout_Screen_C.ItemClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInventoryItemSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutButton_C*        LoadoutButton                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::ItemClicked(EInventoryItemSlot Slot, class UClass* /*AInventoryItem*/ Item, class ULoadoutButton_C* LoadoutButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.ItemClicked"));

	struct
	{
		EInventoryItemSlot             Slot;
		class UClass* /*AInventoryItem*/ Item;
		class ULoadoutButton_C*        LoadoutButton;
	} params = {};

	params.Slot = Slot;
	params.Item = Item;
	params.LoadoutButton = LoadoutButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.OnItemClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInventoryItemSlot             Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*AInventoryItem*/ InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::OnItemClicked(EInventoryItemSlot Slot, class UClass* /*AInventoryItem*/ InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.OnItemClicked"));

	struct
	{
		EInventoryItemSlot             Slot;
		class UClass* /*AInventoryItem*/ InventoryItem;
	} params = {};

	params.Slot = Slot;
	params.InventoryItem = InventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.PostShuffleModeMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::PostShuffleModeMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.PostShuffleModeMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.RandomClass
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::RandomClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.RandomClass"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.ToggleShuffle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::ToggleShuffle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.ToggleShuffle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.BackToInGameMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::BackToInGameMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.BackToInGameMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadout_Screen_C::BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadout_Screen_C::BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadout_Screen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.PreConstruct"));

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


// Function Loadout_Screen.Loadout_Screen_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadout_Screen_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadout_Screen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.LockedSubclassSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Subclass                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bLevelLocked                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadout_Screen_C::LockedSubclassSelected(class UClass* /*ATBLCharacter*/ Subclass, bool bLevelLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.LockedSubclassSelected"));

	struct
	{
		class UClass* /*ATBLCharacter*/ Subclass;
		bool                           bLevelLocked;
	} params = {};

	params.Subclass = Subclass;
	params.bLevelLocked = bLevelLocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadout_Screen_C::BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadout_Screen_C::BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.UpdateShuffleButtons
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShuffle                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadout_Screen_C::UpdateShuffleButtons(bool bShuffle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.UpdateShuffleButtons"));

	struct
	{
		bool                           bShuffle;
	} params = {};

	params.bShuffle = bShuffle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.ExecuteUbergraph_Loadout_Screen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadout_Screen_C::ExecuteUbergraph_Loadout_Screen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.ExecuteUbergraph_Loadout_Screen"));

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


// Function Loadout_Screen.Loadout_Screen_C.Loadout confirmed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::Loadout_confirmed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.Loadout confirmed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Loadout_Screen.Loadout_Screen_C.Class Selected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadout_Screen_C::Class_Selected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Loadout_Screen.Loadout_Screen_C.Class Selected__DelegateSignature"));

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
