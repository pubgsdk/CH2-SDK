// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GoldInventoryWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GoldInventoryWidget.GoldInventoryWidget_C.Update Gold
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGoldInventoryWidget_C::Update_Gold()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GoldInventoryWidget.GoldInventoryWidget_C.Update Gold"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GoldInventoryWidget.GoldInventoryWidget_C.Update Crowns
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGoldInventoryWidget_C::Update_Crowns()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GoldInventoryWidget.GoldInventoryWidget_C.Update Crowns"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GoldInventoryWidget.GoldInventoryWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGoldInventoryWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GoldInventoryWidget.GoldInventoryWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GoldInventoryWidget.GoldInventoryWidget_C.OnLogin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsLoaded                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGoldInventoryWidget_C::OnLogin(bool bIsLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GoldInventoryWidget.GoldInventoryWidget_C.OnLogin"));

	struct
	{
		bool                           bIsLoaded;
	} params = {};

	params.bIsLoaded = bIsLoaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GoldInventoryWidget.GoldInventoryWidget_C.OnCurrencyChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGoldInventoryWidget_C::OnCurrencyChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GoldInventoryWidget.GoldInventoryWidget_C.OnCurrencyChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GoldInventoryWidget.GoldInventoryWidget_C.OnPurchaseCompleted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           WasPurchaseSuccessful          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<struct FPrimaryAssetId> AssetIds                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UGoldInventoryWidget_C::OnPurchaseCompleted(bool WasPurchaseSuccessful, TArray<struct FPrimaryAssetId> AssetIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GoldInventoryWidget.GoldInventoryWidget_C.OnPurchaseCompleted"));

	struct
	{
		bool                           WasPurchaseSuccessful;
		TArray<struct FPrimaryAssetId> AssetIds;
	} params = {};

	params.WasPurchaseSuccessful = WasPurchaseSuccessful;
	params.AssetIds = AssetIds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GoldInventoryWidget.GoldInventoryWidget_C.FadeInAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGoldInventoryWidget_C::FadeInAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GoldInventoryWidget.GoldInventoryWidget_C.FadeInAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GoldInventoryWidget.GoldInventoryWidget_C.ExecuteUbergraph_GoldInventoryWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGoldInventoryWidget_C::ExecuteUbergraph_GoldInventoryWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GoldInventoryWidget.GoldInventoryWidget_C.ExecuteUbergraph_GoldInventoryWidget"));

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
