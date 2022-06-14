// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnalyticsBlueprintLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FAnalyticsEventAttr> Attributes                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAnalyticsBlueprintLibrary::StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes"));

	struct
	{
		TArray<struct FAnalyticsEventAttr> Attributes;
		bool                           ReturnValue;
	} params = {};

	params.Attributes = Attributes;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAnalyticsBlueprintLibrary::StartSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetUserId(const struct FString& UserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId"));

	struct
	{
		struct FString                 UserId;
	} params = {};

	params.UserId = UserId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SessionId                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetSessionId(const struct FString& SessionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId"));

	struct
	{
		struct FString                 SessionId;
	} params = {};

	params.SessionId = SessionId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetLocation(const struct FString& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation"));

	struct
	{
		struct FString                 Location;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Gender                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetGender(const struct FString& Gender)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender"));

	struct
	{
		struct FString                 Gender;
	} params = {};

	params.Gender = Gender;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 BuildInfo                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetBuildInfo(const struct FString& BuildInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo"));

	struct
	{
		struct FString                 BuildInfo;
	} params = {};

	params.BuildInfo = BuildInfo;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Age                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetAge(int Age)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge"));

	struct
	{
		int                            Age;
	} params = {};

	params.Age = Age;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ItemQuantity                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchaseWithAttributes(const struct FString& ItemId, int ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes"));

	struct
	{
		struct FString                 ItemId;
		int                            ItemQuantity;
		TArray<struct FAnalyticsEventAttr> Attributes;
	} params = {};

	params.ItemId = ItemId;
	params.ItemQuantity = ItemQuantity;
	params.Attributes = Attributes;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ItemQuantity                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchase(const struct FString& ItemId, int ItemQuantity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase"));

	struct
	{
		struct FString                 ItemId;
		int                            ItemQuantity;
	} params = {};

	params.ItemId = ItemId;
	params.ItemQuantity = ItemQuantity;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GameCurrencyAmount             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchaseWithAttributes(const struct FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes"));

	struct
	{
		struct FString                 GameCurrencyType;
		int                            GameCurrencyAmount;
		TArray<struct FAnalyticsEventAttr> Attributes;
	} params = {};

	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.Attributes = Attributes;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GameCurrencyAmount             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchase(const struct FString& GameCurrencyType, int GameCurrencyAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase"));

	struct
	{
		struct FString                 GameCurrencyType;
		int                            GameCurrencyAmount;
	} params = {};

	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ProgressType                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         ProgressNames                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordProgressWithFullHierarchyAndAttributes(const struct FString& ProgressType, TArray<struct FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes"));

	struct
	{
		struct FString                 ProgressType;
		TArray<struct FString>         ProgressNames;
		TArray<struct FAnalyticsEventAttr> Attributes;
	} params = {};

	params.ProgressType = ProgressType;
	params.ProgressNames = ProgressNames;
	params.Attributes = Attributes;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ProgressType                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ProgressName                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordProgressWithAttributes(const struct FString& ProgressType, const struct FString& ProgressName, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes"));

	struct
	{
		struct FString                 ProgressType;
		struct FString                 ProgressName;
		TArray<struct FAnalyticsEventAttr> Attributes;
	} params = {};

	params.ProgressType = ProgressType;
	params.ProgressName = ProgressName;
	params.Attributes = Attributes;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ProgressType                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ProgressName                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordProgress(const struct FString& ProgressType, const struct FString& ProgressName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress"));

	struct
	{
		struct FString                 ProgressType;
		struct FString                 ProgressName;
	} params = {};

	params.ProgressType = ProgressType;
	params.ProgressName = ProgressName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PerItemCost                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ItemQuantity                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordItemPurchase(const struct FString& ItemId, const struct FString& Currency, int PerItemCost, int ItemQuantity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase"));

	struct
	{
		struct FString                 ItemId;
		struct FString                 Currency;
		int                            PerItemCost;
		int                            ItemQuantity;
	} params = {};

	params.ItemId = ItemId;
	params.Currency = Currency;
	params.PerItemCost = PerItemCost;
	params.ItemQuantity = ItemQuantity;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordEventWithAttributes(const struct FString& EventName, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes"));

	struct
	{
		struct FString                 EventName;
		TArray<struct FAnalyticsEventAttr> Attributes;
	} params = {};

	params.EventName = EventName;
	params.Attributes = Attributes;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 AttributeValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordEventWithAttribute(const struct FString& EventName, const struct FString& AttributeName, const struct FString& AttributeValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute"));

	struct
	{
		struct FString                 EventName;
		struct FString                 AttributeName;
		struct FString                 AttributeValue;
	} params = {};

	params.EventName = EventName;
	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordEvent(const struct FString& EventName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent"));

	struct
	{
		struct FString                 EventName;
	} params = {};

	params.EventName = EventName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Error                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordErrorWithAttributes(const struct FString& Error, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes"));

	struct
	{
		struct FString                 Error;
		TArray<struct FAnalyticsEventAttr> Attributes;
	} params = {};

	params.Error = Error;
	params.Attributes = Attributes;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Error                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordError(const struct FString& Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError"));

	struct
	{
		struct FString                 Error;
	} params = {};

	params.Error = Error;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GameCurrencyAmount             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 RealCurrencyType               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          RealMoneyCost                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PaymentProvider                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordCurrencyPurchase(const struct FString& GameCurrencyType, int GameCurrencyAmount, const struct FString& RealCurrencyType, float RealMoneyCost, const struct FString& PaymentProvider)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase"));

	struct
	{
		struct FString                 GameCurrencyType;
		int                            GameCurrencyAmount;
		struct FString                 RealCurrencyType;
		float                          RealMoneyCost;
		struct FString                 PaymentProvider;
	} params = {};

	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.RealCurrencyType = RealCurrencyType;
	params.RealMoneyCost = RealMoneyCost;
	params.PaymentProvider = PaymentProvider;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GameCurrencyAmount             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordCurrencyGivenWithAttributes(const struct FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes"));

	struct
	{
		struct FString                 GameCurrencyType;
		int                            GameCurrencyAmount;
		TArray<struct FAnalyticsEventAttr> Attributes;
	} params = {};

	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.Attributes = Attributes;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GameCurrencyAmount             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordCurrencyGiven(const struct FString& GameCurrencyType, int GameCurrencyAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven"));

	struct
	{
		struct FString                 GameCurrencyType;
		int                            GameCurrencyAmount;
	} params = {};

	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 AttributeName                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 AttributeValue                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAnalyticsEventAttr     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FAnalyticsEventAttr UAnalyticsBlueprintLibrary::MakeEventAttribute(const struct FString& AttributeName, const struct FString& AttributeValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute"));

	struct
	{
		struct FString                 AttributeName;
		struct FString                 AttributeValue;
		struct FAnalyticsEventAttr     ReturnValue;
	} params = {};

	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAnalyticsBlueprintLibrary::GetUserId()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAnalyticsBlueprintLibrary::GetSessionId()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAnalyticsBlueprintLibrary::FlushEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAnalyticsBlueprintLibrary::EndSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
