// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NavigationFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateQuestsMenuSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateQuestsMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateQuestsMenuSubMenus"));

	struct
	{
		class APlayerController*       Controller;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.ClearCustomizationNotifications
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::ClearCustomizationNotifications(class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.ClearCustomizationNotifications"));

	struct
	{
		class UObject*                 __WorldContext;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.UpdateNavigationNotifications
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNavigationWidget_C*     NavigationWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::UpdateNavigationNotifications(class UNavigationWidget_C* NavigationWidget, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.UpdateNavigationNotifications"));

	struct
	{
		class UNavigationWidget_C*     NavigationWidget;
		class UObject*                 __WorldContext;
	} params = {};

	params.NavigationWidget = NavigationWidget;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCustNotificationStates
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCustomizationEntry     CustEntry                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bOwned                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bUnviewed                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bPurchasable                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationFunctionLibrary_C::GetCustNotificationStates(const struct FCustomizationEntry& CustEntry, class UObject* __WorldContext, bool* bOwned, bool* bUnviewed, bool* bPurchasable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCustNotificationStates"));

	struct
	{
		struct FCustomizationEntry     CustEntry;
		class UObject*                 __WorldContext;
		bool                           bOwned;
		bool                           bUnviewed;
		bool                           bPurchasable;
	} params = {};

	params.CustEntry = CustEntry;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bOwned != nullptr)
		*bOwned = params.bOwned;
	if (bUnviewed != nullptr)
		*bUnviewed = params.bUnviewed;
	if (bPurchasable != nullptr)
		*bPurchasable = params.bPurchasable;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreatePlayMenuSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreatePlayMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreatePlayMenuSubMenus"));

	struct
	{
		class APlayerController*       Controller;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateProfileMenuSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateProfileMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateProfileMenuSubMenus"));

	struct
	{
		class APlayerController*       Controller;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCustLoadout
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAudioClassType>   Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<EWeaponTag>             Ranged                         (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// TArray<EWeaponTag>             TwoHander                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// TArray<EWeaponTag>             OneHander                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// TArray<EWeaponTag>             Shield                         (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// TArray<EWeaponTag>             Thrown                         (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::GetCustLoadout(TEnumAsByte<EAudioClassType> Class, class UObject* __WorldContext, TArray<EWeaponTag>* Ranged, TArray<EWeaponTag>* TwoHander, TArray<EWeaponTag>* OneHander, TArray<EWeaponTag>* Shield, TArray<EWeaponTag>* Thrown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCustLoadout"));

	struct
	{
		TEnumAsByte<EAudioClassType>   Class;
		class UObject*                 __WorldContext;
		TArray<EWeaponTag>             Ranged;
		TArray<EWeaponTag>             TwoHander;
		TArray<EWeaponTag>             OneHander;
		TArray<EWeaponTag>             Shield;
		TArray<EWeaponTag>             Thrown;
	} params = {};

	params.Class = Class;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Ranged != nullptr)
		*Ranged = params.Ranged;
	if (TwoHander != nullptr)
		*TwoHander = params.TwoHander;
	if (OneHander != nullptr)
		*OneHander = params.OneHander;
	if (Shield != nullptr)
		*Shield = params.Shield;
	if (Thrown != nullptr)
		*Thrown = params.Thrown;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetWeaponNotification
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponTag                     WeaponTag                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EAudioClassType>   ClassType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::GetWeaponNotification(EFaction Faction, class APlayerController* PlayerController, EWeaponTag WeaponTag, TEnumAsByte<EAudioClassType> ClassType, class UObject* __WorldContext, int* Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetWeaponNotification"));

	struct
	{
		EFaction                       Faction;
		class APlayerController*       PlayerController;
		EWeaponTag                     WeaponTag;
		TEnumAsByte<EAudioClassType>   ClassType;
		class UObject*                 __WorldContext;
		int                            Count;
	} params = {};

	params.Faction = Faction;
	params.PlayerController = PlayerController;
	params.WeaponTag = WeaponTag;
	params.ClassType = ClassType;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Count != nullptr)
		*Count = params.Count;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCategoryNotification
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EAudioClassType>   CharacaterType                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::GetCategoryNotification(TEnumAsByte<EAudioClassType> CharacaterType, EFaction Faction, class APlayerController* PlayerController, const struct FName& Category, class UObject* __WorldContext, int* Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCategoryNotification"));

	struct
	{
		TEnumAsByte<EAudioClassType>   CharacaterType;
		EFaction                       Faction;
		class APlayerController*       PlayerController;
		struct FName                   Category;
		class UObject*                 __WorldContext;
		int                            Count;
	} params = {};

	params.CharacaterType = CharacaterType;
	params.Faction = Faction;
	params.PlayerController = PlayerController;
	params.Category = Category;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Count != nullptr)
		*Count = params.Count;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetClassNotifications
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EAudioClassType>   CharacaterType                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::GetClassNotifications(TEnumAsByte<EAudioClassType> CharacaterType, EFaction Faction, class APlayerController* PlayerController, class UObject* __WorldContext, int* Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetClassNotifications"));

	struct
	{
		TEnumAsByte<EAudioClassType>   CharacaterType;
		EFaction                       Faction;
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		int                            Count;
	} params = {};

	params.CharacaterType = CharacaterType;
	params.Faction = Faction;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Count != nullptr)
		*Count = params.Count;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetFactionNotifications
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::GetFactionNotifications(EFaction Faction, class APlayerController* PlayerController, class UObject* __WorldContext, int* Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetFactionNotifications"));

	struct
	{
		EFaction                       Faction;
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		int                            Count;
	} params = {};

	params.Faction = Faction;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Count != nullptr)
		*Count = params.Count;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetAllCustNotifications
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::GetAllCustNotifications(class APlayerController* PlayerController, class UObject* __WorldContext, int* Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetAllCustNotifications"));

	struct
	{
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		int                            Count;
	} params = {};

	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Count != nullptr)
		*Count = params.Count;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateNewsSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateNewsSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateNewsSubMenus"));

	struct
	{
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateTutorialMenuSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateTutorialMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateTutorialMenuSubMenus"));

	struct
	{
		class APlayerController*       Controller;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateLoreMenuSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateLoreMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateLoreMenuSubMenus"));

	struct
	{
		class APlayerController*       Controller;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateStoreMenuSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bShouldUseCamera               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateStoreMenuSubMenus(class APlayerController* Controller, bool bShouldUseCamera, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateStoreMenuSubMenus"));

	struct
	{
		class APlayerController*       Controller;
		bool                           bShouldUseCamera;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.Controller = Controller;
	params.bShouldUseCamera = bShouldUseCamera;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateFriendsMenuSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateFriendsMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateFriendsMenuSubMenus"));

	struct
	{
		class APlayerController*       Controller;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateServerBrowserSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateServerBrowserSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateServerBrowserSubMenus"));

	struct
	{
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateCreateGameSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateCreateGameSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateCreateGameSubMenus"));

	struct
	{
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateCustomizationOptions
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateCustomizationOptions(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateCustomizationOptions"));

	struct
	{
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateOptionsMenuSubMenus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> Array                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateOptionsMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateOptionsMenuSubMenus"));

	struct
	{
		class APlayerController*       Controller;
		class UObject*                 __WorldContext;
		TArray<class UNavigationMenuData_C*> Array;
	} params = {};

	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateQuestsMenuTree
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNavigationMenuData_C*   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateQuestsMenuTree(class APlayerController* PlayerController, class UObject* __WorldContext, class UNavigationMenuData_C** Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateQuestsMenuTree"));

	struct
	{
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		class UNavigationMenuData_C*   Item;
	} params = {};

	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Item != nullptr)
		*Item = params.Item;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateStoreMenuTree
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNavigationMenuData_C*   NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateStoreMenuTree(class APlayerController* PlayerController, class UObject* __WorldContext, class UNavigationMenuData_C** NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateStoreMenuTree"));

	struct
	{
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		class UNavigationMenuData_C*   NewParam;
	} params = {};

	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateNewsMenuTree
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNavigationMenuData_C*   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateNewsMenuTree(class APlayerController* PlayerController, class UObject* __WorldContext, class UNavigationMenuData_C** Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateNewsMenuTree"));

	struct
	{
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
		class UNavigationMenuData_C*   Item;
	} params = {};

	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Item != nullptr)
		*Item = params.Item;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateInGameMenuTree
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       OwningPlayer                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNavigationMenuData_C*   HeadMenu                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateInGameMenuTree(class APlayerController* OwningPlayer, class UObject* __WorldContext, class UNavigationMenuData_C** HeadMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateInGameMenuTree"));

	struct
	{
		class APlayerController*       OwningPlayer;
		class UObject*                 __WorldContext;
		class UNavigationMenuData_C*   HeadMenu;
	} params = {};

	params.OwningPlayer = OwningPlayer;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (HeadMenu != nullptr)
		*HeadMenu = params.HeadMenu;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateFrontendMenuTree
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       OwningPlayer                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNavigationMenuData_C*   HeadMenu                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateFrontendMenuTree(class APlayerController* OwningPlayer, class UObject* __WorldContext, class UNavigationMenuData_C** HeadMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateFrontendMenuTree"));

	struct
	{
		class APlayerController*       OwningPlayer;
		class UObject*                 __WorldContext;
		class UNavigationMenuData_C*   HeadMenu;
	} params = {};

	params.OwningPlayer = OwningPlayer;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (HeadMenu != nullptr)
		*HeadMenu = params.HeadMenu;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PrintStackData
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FNavigationMenuStack    MenuStack                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::PrintStackData(class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PrintStackData"));

	struct
	{
		struct FNavigationMenuStack    MenuStack;
		class UObject*                 __WorldContext;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MenuStack != nullptr)
		*MenuStack = params.MenuStack;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetSubMenuByIndex
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FNavigationMenuStack    MenuStack                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            SubMenuIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNavigationMenuData_C*   Submenu                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::GetSubMenuByIndex(int SubMenuIndex, class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack, class UNavigationMenuData_C** Submenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetSubMenuByIndex"));

	struct
	{
		struct FNavigationMenuStack    MenuStack;
		int                            SubMenuIndex;
		class UObject*                 __WorldContext;
		class UNavigationMenuData_C*   Submenu;
	} params = {};

	params.SubMenuIndex = SubMenuIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MenuStack != nullptr)
		*MenuStack = params.MenuStack;
	if (Submenu != nullptr)
		*Submenu = params.Submenu;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetScreenIDForSubMenu
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FNavigationMenuStack    MenuStack                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// int                            SubMenuIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftClassPtr<class UClass>    ScreenID                       (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::GetScreenIDForSubMenu(int SubMenuIndex, class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack, TSoftClassPtr<class UClass>* ScreenID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetScreenIDForSubMenu"));

	struct
	{
		struct FNavigationMenuStack    MenuStack;
		int                            SubMenuIndex;
		class UObject*                 __WorldContext;
		TSoftClassPtr<class UClass>    ScreenID;
	} params = {};

	params.SubMenuIndex = SubMenuIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MenuStack != nullptr)
		*MenuStack = params.MenuStack;
	if (ScreenID != nullptr)
		*ScreenID = params.ScreenID;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetScreenIDForCurrentMenu
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FNavigationMenuStack    MenuStack                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftClassPtr<class UClass>    ScreenID                       (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::GetScreenIDForCurrentMenu(class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack, TSoftClassPtr<class UClass>* ScreenID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetScreenIDForCurrentMenu"));

	struct
	{
		struct FNavigationMenuStack    MenuStack;
		class UObject*                 __WorldContext;
		TSoftClassPtr<class UClass>    ScreenID;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MenuStack != nullptr)
		*MenuStack = params.MenuStack;
	if (ScreenID != nullptr)
		*ScreenID = params.ScreenID;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PopScreen
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FNavigationMenuStack    MenuStack                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::PopScreen(class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PopScreen"));

	struct
	{
		struct FNavigationMenuStack    MenuStack;
		class UObject*                 __WorldContext;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MenuStack != nullptr)
		*MenuStack = params.MenuStack;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PushScreen
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FNavigationMenuStack    MenuStack                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UTBLScreenWidget*        Screen                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationFunctionLibrary_C::PushScreen(class UTBLScreenWidget* Screen, class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PushScreen"));

	struct
	{
		struct FNavigationMenuStack    MenuStack;
		class UTBLScreenWidget*        Screen;
		class UObject*                 __WorldContext;
		bool                           Success;
	} params = {};

	params.Screen = Screen;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MenuStack != nullptr)
		*MenuStack = params.MenuStack;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateMenu
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TSoftClassPtr<class UClass>    Screen                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// TArray<class UNavigationMenuData_C*> SubMenus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FString                 CameraName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FName                   FrontendEvent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ENavigationMenuStyle> Style                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       Owner                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Disable_if_WIP_Features_are_Disallowed (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bHideRaggedEdge                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           UpdateNavWithSubMenu           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bBlurScreen                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bHideBottomBar                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           highlightFirstItem             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   MenuName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bDisableOpenFriends            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bDisableOpenStore              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bShowNavGamepadCallouts        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNavigationMenuData_C*   Menu                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::CreateMenu(const struct FName& ButtonID, const struct FText& Name, TSoftClassPtr<class UClass> Screen, const struct FString& CameraName, const struct FName& FrontendEvent, TEnumAsByte<ENavigationMenuStyle> Style, class APlayerController* Owner, bool Disable_if_WIP_Features_are_Disallowed, bool bHideRaggedEdge, bool UpdateNavWithSubMenu, bool bBlurScreen, bool bHideBottomBar, bool highlightFirstItem, const struct FText& MenuName, bool bDisableOpenFriends, bool bDisableOpenStore, bool bShowNavGamepadCallouts, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* SubMenus, class UNavigationMenuData_C** Menu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateMenu"));

	struct
	{
		struct FName                   ButtonID;
		struct FText                   Name;
		TSoftClassPtr<class UClass>    Screen;
		TArray<class UNavigationMenuData_C*> SubMenus;
		struct FString                 CameraName;
		struct FName                   FrontendEvent;
		TEnumAsByte<ENavigationMenuStyle> Style;
		class APlayerController*       Owner;
		bool                           Disable_if_WIP_Features_are_Disallowed;
		bool                           bHideRaggedEdge;
		bool                           UpdateNavWithSubMenu;
		bool                           bBlurScreen;
		bool                           bHideBottomBar;
		bool                           highlightFirstItem;
		struct FText                   MenuName;
		bool                           bDisableOpenFriends;
		bool                           bDisableOpenStore;
		bool                           bShowNavGamepadCallouts;
		class UObject*                 __WorldContext;
		class UNavigationMenuData_C*   Menu;
	} params = {};

	params.ButtonID = ButtonID;
	params.Name = Name;
	params.Screen = Screen;
	params.CameraName = CameraName;
	params.FrontendEvent = FrontendEvent;
	params.Style = Style;
	params.Owner = Owner;
	params.Disable_if_WIP_Features_are_Disallowed = Disable_if_WIP_Features_are_Disallowed;
	params.bHideRaggedEdge = bHideRaggedEdge;
	params.UpdateNavWithSubMenu = UpdateNavWithSubMenu;
	params.bBlurScreen = bBlurScreen;
	params.bHideBottomBar = bHideBottomBar;
	params.highlightFirstItem = highlightFirstItem;
	params.MenuName = MenuName;
	params.bDisableOpenFriends = bDisableOpenFriends;
	params.bDisableOpenStore = bDisableOpenStore;
	params.bShowNavGamepadCallouts = bShowNavGamepadCallouts;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SubMenus != nullptr)
		*SubMenus = params.SubMenus;
	if (Menu != nullptr)
		*Menu = params.Menu;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PopMenu
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FNavigationMenuStack    MenuStack                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNavigationFunctionLibrary_C::PopMenu(class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PopMenu"));

	struct
	{
		struct FNavigationMenuStack    MenuStack;
		class UObject*                 __WorldContext;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MenuStack != nullptr)
		*MenuStack = params.MenuStack;
}


// Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PushMenu
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FNavigationMenuStack    MenuStack                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UNavigationMenuData_C*   MenuToPush                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CurrentIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNavigationFunctionLibrary_C::PushMenu(class UNavigationMenuData_C* MenuToPush, int CurrentIndex, class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PushMenu"));

	struct
	{
		struct FNavigationMenuStack    MenuStack;
		class UNavigationMenuData_C*   MenuToPush;
		int                            CurrentIndex;
		class UObject*                 __WorldContext;
		bool                           Success;
	} params = {};

	params.MenuToPush = MenuToPush;
	params.CurrentIndex = CurrentIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MenuStack != nullptr)
		*MenuStack = params.MenuStack;
	if (Success != nullptr)
		*Success = params.Success;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
