// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutLevelRadialWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutLevelRadialWidget.LoadoutLevelRadialWidget_C.UpdateRadialProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EOnlineStat                    OnlineStat                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutLevelRadialWidget_C::UpdateRadialProgress(EOnlineStat OnlineStat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutLevelRadialWidget.LoadoutLevelRadialWidget_C.UpdateRadialProgress"));

	struct
	{
		EOnlineStat                    OnlineStat;
	} params = {};

	params.OnlineStat = OnlineStat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutLevelRadialWidget.LoadoutLevelRadialWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutLevelRadialWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutLevelRadialWidget.LoadoutLevelRadialWidget_C.PreConstruct"));

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


// Function LoadoutLevelRadialWidget.LoadoutLevelRadialWidget_C.ExecuteUbergraph_LoadoutLevelRadialWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutLevelRadialWidget_C::ExecuteUbergraph_LoadoutLevelRadialWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutLevelRadialWidget.LoadoutLevelRadialWidget_C.ExecuteUbergraph_LoadoutLevelRadialWidget"));

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
