// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FunctionLibrary_UI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTextureFromSlateBrush
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Texture                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetTextureFromSlateBrush(const struct FSlateBrush& Brush, class UObject* __WorldContext, class UTexture2D** Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTextureFromSlateBrush"));

	struct
	{
		struct FSlateBrush             Brush;
		class UObject*                 __WorldContext;
		class UTexture2D*              Texture;
	} params = {};

	params.Brush = Brush;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetStoreSellerLabel
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   SellerLabelText                (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::GetStoreSellerLabel(const struct FString& ItemId, class UObject* __WorldContext, struct FText* SellerLabelText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetStoreSellerLabel"));

	struct
	{
		struct FString                 ItemId;
		class UObject*                 __WorldContext;
		struct FText                   SellerLabelText;
	} params = {};

	params.ItemId = ItemId;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SellerLabelText != nullptr)
		*SellerLabelText = params.SellerLabelText;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetQuestDifficultyText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EQuestDifficulty               DifficultyLevel                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::GetQuestDifficultyText(EQuestDifficulty DifficultyLevel, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetQuestDifficultyText"));

	struct
	{
		EQuestDifficulty               DifficultyLevel;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.DifficultyLevel = DifficultyLevel;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetQuestDifficultyColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EQuestDifficulty               DifficultyLevel                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetQuestDifficultyColor(EQuestDifficulty DifficultyLevel, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetQuestDifficultyColor"));

	struct
	{
		EQuestDifficulty               DifficultyLevel;
		class UObject*                 __WorldContext;
		struct FLinearColor            Color;
	} params = {};

	params.DifficultyLevel = DifficultyLevel;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Color != nullptr)
		*Color = params.Color;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Team Order
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFaction                       TeamA                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       TeamB                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<EFaction>               SortedTeams                    (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::Get_Team_Order(EFaction TeamA, EFaction TeamB, class UObject* __WorldContext, TArray<EFaction>* SortedTeams)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Team Order"));

	struct
	{
		EFaction                       TeamA;
		EFaction                       TeamB;
		class UObject*                 __WorldContext;
		TArray<EFaction>               SortedTeams;
	} params = {};

	params.TeamA = TeamA;
	params.TeamB = TeamB;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SortedTeams != nullptr)
		*SortedTeams = params.SortedTeams;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetStoreItemImage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> Image                          (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetStoreItemImage(const struct FString& ItemId, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetStoreItemImage"));

	struct
	{
		struct FString                 ItemId;
		class UObject*                 __WorldContext;
		TSoftObjectPtr<class UTexture2D> Image;
	} params = {};

	params.ItemId = ItemId;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Image != nullptr)
		*Image = params.Image;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamIcon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> Icon                           (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetTeamIcon(EFaction Faction, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamIcon"));

	struct
	{
		EFaction                       Faction;
		class UObject*                 __WorldContext;
		TSoftObjectPtr<class UTexture2D> Icon;
	} params = {};

	params.Faction = Faction;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformPC
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EHardwarePlatform              Platform                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFunctionLibrary_UI_C::IsProvidedPlatformPC(EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformPC"));

	struct
	{
		EHardwarePlatform              Platform;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params = {};

	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformXBox
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EHardwarePlatform              Platform                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFunctionLibrary_UI_C::IsProvidedPlatformXBox(EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformXBox"));

	struct
	{
		EHardwarePlatform              Platform;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params = {};

	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformPlayStation
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EHardwarePlatform              Platform                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFunctionLibrary_UI_C::IsProvidedPlatformPlayStation(EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformPlayStation"));

	struct
	{
		EHardwarePlatform              Platform;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params = {};

	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.AreProvidedPlatformsSimilar
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EHardwarePlatform              OwningPlayerHardwarePlatform   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EHardwarePlatform              TargetPlayerHardwarePlatform   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Similar                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFunctionLibrary_UI_C::AreProvidedPlatformsSimilar(EHardwarePlatform OwningPlayerHardwarePlatform, EHardwarePlatform TargetPlayerHardwarePlatform, class UObject* __WorldContext, bool* Similar)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.AreProvidedPlatformsSimilar"));

	struct
	{
		EHardwarePlatform              OwningPlayerHardwarePlatform;
		EHardwarePlatform              TargetPlayerHardwarePlatform;
		class UObject*                 __WorldContext;
		bool                           Similar;
	} params = {};

	params.OwningPlayerHardwarePlatform = OwningPlayerHardwarePlatform;
	params.TargetPlayerHardwarePlatform = TargetPlayerHardwarePlatform;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Similar != nullptr)
		*Similar = params.Similar;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.ScrollWithVelocity
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UScrollBox*              ScrollBox                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Velocity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::ScrollWithVelocity(class UScrollBox* ScrollBox, float Velocity, float DeltaTime, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ScrollWithVelocity"));

	struct
	{
		class UScrollBox*              ScrollBox;
		float                          Velocity;
		float                          DeltaTime;
		class UObject*                 __WorldContext;
	} params = {};

	params.ScrollBox = ScrollBox;
	params.Velocity = Velocity;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.ScrollBy
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UScrollBox*              ScrollBox                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ScrollOffsetDelta              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::ScrollBy(class UScrollBox* ScrollBox, float ScrollOffsetDelta, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ScrollBy"));

	struct
	{
		class UScrollBox*              ScrollBox;
		float                          ScrollOffsetDelta;
		class UObject*                 __WorldContext;
	} params = {};

	params.ScrollBox = ScrollBox;
	params.ScrollOffsetDelta = ScrollOffsetDelta;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetCustomizationHeadCategories
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FName>           Categories                     (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)
// TArray<struct FText>           CategoryTexts                  (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetCustomizationHeadCategories(class UObject* __WorldContext, TArray<struct FName>* Categories, TArray<struct FText>* CategoryTexts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetCustomizationHeadCategories"));

	struct
	{
		class UObject*                 __WorldContext;
		TArray<struct FName>           Categories;
		TArray<struct FText>           CategoryTexts;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Categories != nullptr)
		*Categories = params.Categories;
	if (CategoryTexts != nullptr)
		*CategoryTexts = params.CategoryTexts;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformConsole
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EHardwarePlatform              Platform                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFunctionLibrary_UI_C::IsProvidedPlatformConsole(EHardwarePlatform Platform, class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformConsole"));

	struct
	{
		EHardwarePlatform              Platform;
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.Platform = Platform;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.UpdatePlayerPlatformIcon
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EHardwarePlatform              OwningPlayerHardwarePlatform   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EHardwarePlatform              TargetPlayerHardwarePlatform   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 PlatformIconContainer          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UImage*                  PlatformIconImage              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::UpdatePlayerPlatformIcon(EHardwarePlatform OwningPlayerHardwarePlatform, EHardwarePlatform TargetPlayerHardwarePlatform, class UWidget* PlatformIconContainer, class UImage* PlatformIconImage, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.UpdatePlayerPlatformIcon"));

	struct
	{
		EHardwarePlatform              OwningPlayerHardwarePlatform;
		EHardwarePlatform              TargetPlayerHardwarePlatform;
		class UWidget*                 PlatformIconContainer;
		class UImage*                  PlatformIconImage;
		class UObject*                 __WorldContext;
	} params = {};

	params.OwningPlayerHardwarePlatform = OwningPlayerHardwarePlatform;
	params.TargetPlayerHardwarePlatform = TargetPlayerHardwarePlatform;
	params.PlatformIconContainer = PlatformIconContainer;
	params.PlatformIconImage = PlatformIconImage;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsInParty
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         Player1                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLPlayerState*         Player2                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UFunctionLibrary_UI_C::IsInParty(class ATBLPlayerState* Player1, class ATBLPlayerState* Player2, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsInParty"));

	struct
	{
		class ATBLPlayerState*         Player1;
		class ATBLPlayerState*         Player2;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params = {};

	params.Player1 = Player1;
	params.Player2 = Player2;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAllyColours
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsInParty                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsFriend                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateColor             SlateColor                     (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::GetAllyColours(bool IsInParty, bool IsFriend, class UObject* __WorldContext, struct FSlateColor* SlateColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAllyColours"));

	struct
	{
		bool                           IsInParty;
		bool                           IsFriend;
		class UObject*                 __WorldContext;
		struct FSlateColor             SlateColor;
	} params = {};

	params.IsInParty = IsInParty;
	params.IsFriend = IsFriend;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Group Text from Group Id
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Group_Id                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Weapon_Group_Text              (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::Get_Group_Text_from_Group_Id(const struct FName& Group_Id, class UObject* __WorldContext, struct FText* Weapon_Group_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Group Text from Group Id"));

	struct
	{
		struct FName                   Group_Id;
		class UObject*                 __WorldContext;
		struct FText                   Weapon_Group_Text;
	} params = {};

	params.Group_Id = Group_Id;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Weapon_Group_Text != nullptr)
		*Weapon_Group_Text = params.Weapon_Group_Text;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetSelectedbuttonColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetSelectedbuttonColor(class UObject* __WorldContext, struct FLinearColor* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetSelectedbuttonColor"));

	struct
	{
		class UObject*                 __WorldContext;
		struct FLinearColor            NewParam;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsPlatformConsole
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFunctionLibrary_UI_C::IsPlatformConsole(class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsPlatformConsole"));

	struct
	{
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsPlatformPC
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFunctionLibrary_UI_C::IsPlatformPC(class UObject* __WorldContext, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsPlatformPC"));

	struct
	{
		class UObject*                 __WorldContext;
		bool                           _;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.OnlineStatToText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EOnlineStat                    Stat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::OnlineStatToText(EOnlineStat Stat, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.OnlineStatToText"));

	struct
	{
		EOnlineStat                    Stat;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.Stat = Stat;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.CreateRankUpMessageFromLevelUp
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLevelUpResult          LevelUpResult                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRankUpMessage          RankUpMessage                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::CreateRankUpMessageFromLevelUp(const struct FLevelUpResult& LevelUpResult, class UObject* __WorldContext, struct FRankUpMessage* RankUpMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.CreateRankUpMessageFromLevelUp"));

	struct
	{
		struct FLevelUpResult          LevelUpResult;
		class UObject*                 __WorldContext;
		struct FRankUpMessage          RankUpMessage;
	} params = {};

	params.LevelUpResult = LevelUpResult;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (RankUpMessage != nullptr)
		*RankUpMessage = params.RankUpMessage;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpClassIconFromOnlineStat
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EOnlineStat                    Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> ClassIcon                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetRankUpClassIconFromOnlineStat(EOnlineStat Selection, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* ClassIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpClassIconFromOnlineStat"));

	struct
	{
		EOnlineStat                    Selection;
		class UObject*                 __WorldContext;
		TSoftObjectPtr<class UTexture2D> ClassIcon;
	} params = {};

	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ClassIcon != nullptr)
		*ClassIcon = params.ClassIcon;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpItemFromOnlineStat
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EOnlineStat                    Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftClassPtr<class UClass>    IventoryItem                   (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetRankUpItemFromOnlineStat(EOnlineStat Selection, class UObject* __WorldContext, TSoftClassPtr<class UClass>* IventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpItemFromOnlineStat"));

	struct
	{
		EOnlineStat                    Selection;
		class UObject*                 __WorldContext;
		TSoftClassPtr<class UClass>    IventoryItem;
	} params = {};

	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IventoryItem != nullptr)
		*IventoryItem = params.IventoryItem;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.SetGamepadButtonText
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URadiobutton_C*          Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::SetGamepadButtonText(class URadiobutton_C* Button, const struct FText& Text, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.SetGamepadButtonText"));

	struct
	{
		class URadiobutton_C*          Button;
		struct FText                   Text;
		class UObject*                 __WorldContext;
	} params = {};

	params.Button = Button;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.ItemRarityToColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         PrimaryAsset                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETBLRarity                     Rarity                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateColor             SlateColor                     (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::ItemRarityToColor(const struct FPrimaryAssetId& PrimaryAsset, ETBLRarity Rarity, class UObject* __WorldContext, struct FSlateColor* SlateColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ItemRarityToColor"));

	struct
	{
		struct FPrimaryAssetId         PrimaryAsset;
		ETBLRarity                     Rarity;
		class UObject*                 __WorldContext;
		struct FSlateColor             SlateColor;
	} params = {};

	params.PrimaryAsset = PrimaryAsset;
	params.Rarity = Rarity;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetPlayersName
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AController*             Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name                           (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::GetPlayersName(class AController* Controller, class UObject* __WorldContext, struct FText* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetPlayersName"));

	struct
	{
		class AController*             Controller;
		class UObject*                 __WorldContext;
		struct FText                   Name;
	} params = {};

	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Name != nullptr)
		*Name = params.Name;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpMessageTypeFromOnlineStat
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EOnlineStat                    Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ERankUpMessageType> RankUpMessageType              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetRankUpMessageTypeFromOnlineStat(EOnlineStat Selection, class UObject* __WorldContext, TEnumAsByte<ERankUpMessageType>* RankUpMessageType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpMessageTypeFromOnlineStat"));

	struct
	{
		EOnlineStat                    Selection;
		class UObject*                 __WorldContext;
		TEnumAsByte<ERankUpMessageType> RankUpMessageType;
	} params = {};

	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (RankUpMessageType != nullptr)
		*RankUpMessageType = params.RankUpMessageType;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.ItemRarityToText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         PrimaryAsset                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETBLRarity                     Rarity                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   _                              (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::ItemRarityToText(const struct FPrimaryAssetId& PrimaryAsset, ETBLRarity Rarity, class UObject* __WorldContext, struct FText* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ItemRarityToText"));

	struct
	{
		struct FPrimaryAssetId         PrimaryAsset;
		ETBLRarity                     Rarity;
		class UObject*                 __WorldContext;
		struct FText                   _;
	} params = {};

	params.PrimaryAsset = PrimaryAsset;
	params.Rarity = Rarity;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayUxSound
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           SoundEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::PlayUxSound(class UAkAudioEvent* SoundEvent, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayUxSound"));

	struct
	{
		class UAkAudioEvent*           SoundEvent;
		class UObject*                 __WorldContext;
	} params = {};

	params.SoundEvent = SoundEvent;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayDataTableSound
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     RowHandle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::PlayDataTableSound(const struct FDataTableRowHandle& RowHandle, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayDataTableSound"));

	struct
	{
		struct FDataTableRowHandle     RowHandle;
		class UObject*                 __WorldContext;
	} params = {};

	params.RowHandle = RowHandle;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.ShouldDisableWidget
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::ShouldDisableWidget(class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ShouldDisableWidget"));

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


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.ConvertTimeToText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   SecondsText                    (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::ConvertTimeToText(float Seconds, class UObject* __WorldContext, struct FText* SecondsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ConvertTimeToText"));

	struct
	{
		float                          Seconds;
		class UObject*                 __WorldContext;
		struct FText                   SecondsText;
	} params = {};

	params.Seconds = Seconds;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SecondsText != nullptr)
		*SecondsText = params.SecondsText;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetLocalizedTextFromClass
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAudioClassType>   Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UFunctionLibrary_UI_C::GetLocalizedTextFromClass(TEnumAsByte<EAudioClassType> Class, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetLocalizedTextFromClass"));

	struct
	{
		TEnumAsByte<EAudioClassType>   Class;
		class UObject*                 __WorldContext;
		struct FText                   ReturnValue;
	} params = {};

	params.Class = Class;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetLocalizedTextFromFaction
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UFunctionLibrary_UI_C::GetLocalizedTextFromFaction(EFaction Faction, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetLocalizedTextFromFaction"));

	struct
	{
		EFaction                       Faction;
		class UObject*                 __WorldContext;
		struct FText                   ReturnValue;
	} params = {};

	params.Faction = Faction;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.LimitTextCharacters
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 String                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Limit                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UFunctionLibrary_UI_C::LimitTextCharacters(const struct FString& String, int Limit, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.LimitTextCharacters"));

	struct
	{
		struct FString                 String;
		int                            Limit;
		class UObject*                 __WorldContext;
		struct FString                 ReturnValue;
	} params = {};

	params.String = String;
	params.Limit = Limit;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColorText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EObjMarkerTeam>    Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UFunctionLibrary_UI_C::GetTeamColorText(TEnumAsByte<EObjMarkerTeam> Index, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColorText"));

	struct
	{
		TEnumAsByte<EObjMarkerTeam>    Index;
		class UObject*                 __WorldContext;
		struct FLinearColor            ReturnValue;
	} params = {};

	params.Index = Index;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColorLight
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EObjMarkerTeam>    Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UFunctionLibrary_UI_C::GetTeamColorLight(TEnumAsByte<EObjMarkerTeam> Index, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColorLight"));

	struct
	{
		TEnumAsByte<EObjMarkerTeam>    Index;
		class UObject*                 __WorldContext;
		struct FLinearColor            ReturnValue;
	} params = {};

	params.Index = Index;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAchievementTitle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FAchievementProgress    Achievement                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::GetAchievementTitle(const struct FAchievementProgress& Achievement, class ATBLPlayerState* PlayerState, class UObject* __WorldContext, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAchievementTitle"));

	struct
	{
		struct FAchievementProgress    Achievement;
		class ATBLPlayerState*         PlayerState;
		class UObject*                 __WorldContext;
		struct FText                   Result;
	} params = {};

	params.Achievement = Achievement;
	params.PlayerState = PlayerState;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAchievementDescription
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FAchievementProgress    Achievement                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class ATBLPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::GetAchievementDescription(const struct FAchievementProgress& Achievement, class ATBLPlayerState* PlayerState, class UObject* __WorldContext, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAchievementDescription"));

	struct
	{
		struct FAchievementProgress    Achievement;
		class ATBLPlayerState*         PlayerState;
		class UObject*                 __WorldContext;
		struct FText                   Result;
	} params = {};

	params.Achievement = Achievement;
	params.PlayerState = PlayerState;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.ClearAllInputHints
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::ClearAllInputHints(class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ClearAllInputHints"));

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


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.AddInputHint
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Keybinding                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FName                   Tag                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   HintText                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           AddToTop                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::AddInputHint(const struct FString& Keybinding, const struct FName& Tag, const struct FText& HintText, bool Enable, bool AddToTop, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.AddInputHint"));

	struct
	{
		struct FString                 Keybinding;
		struct FName                   Tag;
		struct FText                   HintText;
		bool                           Enable;
		bool                           AddToTop;
		class UObject*                 __WorldContext;
	} params = {};

	params.Keybinding = Keybinding;
	params.Tag = Tag;
	params.HintText = HintText;
	params.Enable = Enable;
	params.AddToTop = AddToTop;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EObjMarkerTeam>    Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UFunctionLibrary_UI_C::GetTeamColor(TEnumAsByte<EObjMarkerTeam> Index, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColor"));

	struct
	{
		TEnumAsByte<EObjMarkerTeam>    Index;
		class UObject*                 __WorldContext;
		struct FLinearColor            ReturnValue;
	} params = {};

	params.Index = Index;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.Has Child Of Type
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPanelWidget*            Parent                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UUserWidget*/  Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFunctionLibrary_UI_C::Has_Child_Of_Type(class UPanelWidget* Parent, class UClass* /*UUserWidget*/ Class, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.Has Child Of Type"));

	struct
	{
		class UPanelWidget*            Parent;
		class UClass* /*UUserWidget*/  Class;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params = {};

	params.Parent = Parent;
	params.Class = Class;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.Request Account Details
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::Request_Account_Details(class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.Request Account Details"));

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


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayUxSound (Generic)
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::PlayUxSound__Generic_(const struct FName& EventName, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayUxSound (Generic)"));

	struct
	{
		struct FName                   EventName;
		class UObject*                 __WorldContext;
	} params = {};

	params.EventName = EventName;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAttackingDefendingFaction
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       AttackingFaction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFaction                       DefendingFaction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetAttackingDefendingFaction(class UObject* __WorldContext, EFaction* AttackingFaction, EFaction* DefendingFaction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAttackingDefendingFaction"));

	struct
	{
		class UObject*                 __WorldContext;
		EFaction                       AttackingFaction;
		EFaction                       DefendingFaction;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AttackingFaction != nullptr)
		*AttackingFaction = params.AttackingFaction;
	if (DefendingFaction != nullptr)
		*DefendingFaction = params.DefendingFaction;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Icon from Wave
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              Wave                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UFunctionLibrary_UI_C::Get_Icon_from_Wave(class ASpawnWave* Wave, class UObject* __WorldContext, struct FSlateBrush* Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Icon from Wave"));

	struct
	{
		class ASpawnWave*              Wave;
		class UObject*                 __WorldContext;
		struct FSlateBrush             Brush;
	} params = {};

	params.Wave = Wave;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetObjectiveStyleEnum
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EObjectiveMessageStyleType> ObjectiveMessageStyleType      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::GetObjectiveStyleEnum(const struct FGameplayTag& NewParam, class UObject* __WorldContext, TEnumAsByte<EObjectiveMessageStyleType>* ObjectiveMessageStyleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetObjectiveStyleEnum"));

	struct
	{
		struct FGameplayTag            NewParam;
		class UObject*                 __WorldContext;
		TEnumAsByte<EObjectiveMessageStyleType> ObjectiveMessageStyleType;
	} params = {};

	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ObjectiveMessageStyleType != nullptr)
		*ObjectiveMessageStyleType = params.ObjectiveMessageStyleType;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.AnimationExitTimeFromArray
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UImage*>          Images                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UAnimatingButton*> AnimatingButton                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::AnimationExitTimeFromArray(float Value, class UObject* __WorldContext, TArray<class UImage*>* Images, TArray<class UAnimatingButton*>* AnimatingButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.AnimationExitTimeFromArray"));

	struct
	{
		TArray<class UImage*>          Images;
		float                          Value;
		TArray<class UAnimatingButton*> AnimatingButton;
		class UObject*                 __WorldContext;
	} params = {};

	params.Value = Value;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Images != nullptr)
		*Images = params.Images;
	if (AnimatingButton != nullptr)
		*AnimatingButton = params.AnimatingButton;
}


// Function FunctionLibrary_UI.FunctionLibrary_UI_C.AnimationExitTime
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UImage*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFunctionLibrary_UI_C::AnimationExitTime(class UImage* Target, float Value, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FunctionLibrary_UI.FunctionLibrary_UI_C.AnimationExitTime"));

	struct
	{
		class UImage*                  Target;
		float                          Value;
		class UObject*                 __WorldContext;
	} params = {};

	params.Target = Target;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

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
