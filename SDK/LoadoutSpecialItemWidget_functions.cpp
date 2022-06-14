// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutSpecialItemWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C.UpdateItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Desc                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ChargingTitle                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ChargingDesc                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULoadoutSpecialItemWidget_C::UpdateItem(class UTexture2D* Icon, const struct FText& Name, const struct FText& Desc, const struct FText& ChargingTitle, const struct FText& ChargingDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C.UpdateItem"));

	struct
	{
		class UTexture2D*              Icon;
		struct FText                   Name;
		struct FText                   Desc;
		struct FText                   ChargingTitle;
		struct FText                   ChargingDesc;
	} params = {};

	params.Icon = Icon;
	params.Name = Name;
	params.Desc = Desc;
	params.ChargingTitle = ChargingTitle;
	params.ChargingDesc = ChargingDesc;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C.ExecuteUbergraph_LoadoutSpecialItemWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSpecialItemWidget_C::ExecuteUbergraph_LoadoutSpecialItemWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C.ExecuteUbergraph_LoadoutSpecialItemWidget"));

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
