// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KillFeedEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KillFeedEntry.KillFeedEntry_C.IsIconSetByStyle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bReturnValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillFeedEntry_C::IsIconSetByStyle(bool* bReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.IsIconSetByStyle"));

	struct
	{
		bool                           bReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bReturnValue != nullptr)
		*bReturnValue = params.bReturnValue;
}


// Function KillFeedEntry.KillFeedEntry_C.GetStyleViaType
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FKillFeedStyle          Style                          (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillFeedEntry_C::GetStyleViaType(struct FKillFeedStyle* Style)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.GetStyleViaType"));

	struct
	{
		struct FKillFeedStyle          Style;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Style != nullptr)
		*Style = params.Style;
}


// Function KillFeedEntry.KillFeedEntry_C.ApplyModifiers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillFeedEntry_C::ApplyModifiers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.ApplyModifiers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.ApplyTextColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKillFeedStyle          Style                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillFeedEntry_C::ApplyTextColor(const struct FKillFeedStyle& Style)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.ApplyTextColor"));

	struct
	{
		struct FKillFeedStyle          Style;
	} params = {};

	params.Style = Style;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.ApplyTextStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillFeedEntry_C::ApplyTextStyle(class UTextBlock* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.ApplyTextStyle"));

	struct
	{
		class UTextBlock*              Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.ApplyStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKillFeedStyle          Style                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillFeedEntry_C::ApplyStyle(const struct FKillFeedStyle& Style)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.ApplyStyle"));

	struct
	{
		struct FKillFeedStyle          Style;
	} params = {};

	params.Style = Style;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.SetState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillFeedEntry_C::SetState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.SetState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UKillFeedEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.PreConstruct"));

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


// Function KillFeedEntry.KillFeedEntry_C.SetupKillFeedEntry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBLPlayerState*         Killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBLPlayerState*         Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AInventoryItem*          KillingBlowWeapon              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillFeedEntry_C::SetupKillFeedEntry(class ATBLPlayerState* Killer, class ATBLPlayerState* Victim, class AInventoryItem* KillingBlowWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.SetupKillFeedEntry"));

	struct
	{
		class ATBLPlayerState*         Killer;
		class ATBLPlayerState*         Victim;
		class AInventoryItem*          KillingBlowWeapon;
	} params = {};

	params.Killer = Killer;
	params.Victim = Victim;
	params.KillingBlowWeapon = KillingBlowWeapon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.RemoveEntry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillFeedEntry_C::RemoveEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.RemoveEntry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.BeginRemove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillFeedEntry_C::BeginRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.BeginRemove"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UKillFeedEntry_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2
// (FUNC_BlueprintEvent)

void UKillFeedEntry_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.SetIconTexture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture*                Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillFeedEntry_C::SetIconTexture(class UTexture* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.SetIconTexture"));

	struct
	{
		class UTexture*                Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.DeathByWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillFeedEntry_C::DeathByWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.DeathByWeapon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.UpdateIconTexture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillFeedEntry_C::UpdateIconTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.UpdateIconTexture"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.AnimateIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillFeedEntry_C::AnimateIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.AnimateIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.SetPlayerNames
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillFeedEntry_C::SetPlayerNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.SetPlayerNames"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function KillFeedEntry.KillFeedEntry_C.ExecuteUbergraph_KillFeedEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillFeedEntry_C::ExecuteUbergraph_KillFeedEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeedEntry.KillFeedEntry_C.ExecuteUbergraph_KillFeedEntry"));

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
