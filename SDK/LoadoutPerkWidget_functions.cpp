// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutPerkWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdatePerk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PerkName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   PerkDesc                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           isAbility                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutPerkWidget_C::UpdatePerk(const struct FText& PerkName, const struct FText& PerkDesc, bool isAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdatePerk"));

	struct
	{
		struct FText                   PerkName;
		struct FText                   PerkDesc;
		bool                           isAbility;
	} params = {};

	params.PerkName = PerkName;
	params.PerkDesc = PerkDesc;
	params.isAbility = isAbility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdateWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PerkName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   PerkDesc                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULoadoutPerkWidget_C::UpdateWidget(const struct FText& PerkName, const struct FText& PerkDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdateWidget"));

	struct
	{
		struct FText                   PerkName;
		struct FText                   PerkDesc;
	} params = {};

	params.PerkName = PerkName;
	params.PerkDesc = PerkDesc;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdateWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PerkName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   PerkDesc                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutPerkWidget_C::UpdateWeapon(const struct FText& PerkName, const struct FText& PerkDesc, class UTexture2D* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdateWeapon"));

	struct
	{
		struct FText                   PerkName;
		struct FText                   PerkDesc;
		class UTexture2D*              Icon;
	} params = {};

	params.PerkName = PerkName;
	params.PerkDesc = PerkDesc;
	params.Icon = Icon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutPerkWidget.LoadoutPerkWidget_C.ExecuteUbergraph_LoadoutPerkWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutPerkWidget_C::ExecuteUbergraph_LoadoutPerkWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutPerkWidget.LoadoutPerkWidget_C.ExecuteUbergraph_LoadoutPerkWidget"));

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
