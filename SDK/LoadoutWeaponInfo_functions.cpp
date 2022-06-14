// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutWeaponInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.UpdateWeaponInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*AInventoryItem*/ Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*ATBLCharacter*/ CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutWeaponInfo_C::UpdateWeaponInfo(class UClass* /*AInventoryItem*/ Inventory, class UClass* /*ATBLCharacter*/ CharacterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.UpdateWeaponInfo"));

	struct
	{
		class UClass* /*AInventoryItem*/ Inventory;
		class UClass* /*ATBLCharacter*/ CharacterClass;
	} params = {};

	params.Inventory = Inventory;
	params.CharacterClass = CharacterClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.HideAllPerks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutWeaponInfo_C::HideAllPerks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.HideAllPerks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.ExecuteUbergraph_LoadoutWeaponInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutWeaponInfo_C::ExecuteUbergraph_LoadoutWeaponInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.ExecuteUbergraph_LoadoutWeaponInfo"));

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
