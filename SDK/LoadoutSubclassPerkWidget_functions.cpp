// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutSubclassPerkWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutSubclassPerkWidget.LoadoutSubclassPerkWidget_C.UpdatePerk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Desc                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULoadoutSubclassPerkWidget_C::UpdatePerk(class UTexture2D* Icon, const struct FText& Name, const struct FText& Desc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassPerkWidget.LoadoutSubclassPerkWidget_C.UpdatePerk"));

	struct
	{
		class UTexture2D*              Icon;
		struct FText                   Name;
		struct FText                   Desc;
	} params = {};

	params.Icon = Icon;
	params.Name = Name;
	params.Desc = Desc;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutSubclassPerkWidget.LoadoutSubclassPerkWidget_C.ExecuteUbergraph_LoadoutSubclassPerkWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutSubclassPerkWidget_C::ExecuteUbergraph_LoadoutSubclassPerkWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutSubclassPerkWidget.LoadoutSubclassPerkWidget_C.ExecuteUbergraph_LoadoutSubclassPerkWidget"));

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
