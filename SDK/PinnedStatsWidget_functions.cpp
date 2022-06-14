// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PinnedStatsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PinnedStatsWidget.PinnedStatsWidget_C.DisableCaching
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInvalidationBox*        InvalidationBox                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedStatsWidget_C::DisableCaching(class UInvalidationBox* InvalidationBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.DisableCaching"));

	struct
	{
		class UInvalidationBox*        InvalidationBox;
	} params = {};

	params.InvalidationBox = InvalidationBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.EnableCaching
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInvalidationBox*        InvalidationBox                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedStatsWidget_C::EnableCaching(class UInvalidationBox* InvalidationBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.EnableCaching"));

	struct
	{
		class UInvalidationBox*        InvalidationBox;
	} params = {};

	params.InvalidationBox = InvalidationBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.CanFadeOut
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPinnedStatsWidget_C::CanFadeOut(bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.CanFadeOut"));

	struct
	{
		bool                           Return;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return != nullptr)
		*Return = params.Return;
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.AssignedToStatsComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStatsComponent*         Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedStatsWidget_C::AssignedToStatsComponent(class UStatsComponent* Stats)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.AssignedToStatsComponent"));

	struct
	{
		class UStatsComponent*         Stats;
	} params = {};

	params.Stats = Stats;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.UnAssignedToStatsComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedStatsWidget_C::UnAssignedToStatsComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.UnAssignedToStatsComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedStatsWidget_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.FadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedStatsWidget_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.FadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedStatsWidget_C::CustomEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.CustomEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedStatsWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.OnAnimationFinished"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.OnAnimationStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedStatsWidget_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.OnAnimationStarted"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.CustomEvent_3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedStatsWidget_C::CustomEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.CustomEvent_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PinnedStatsWidget.PinnedStatsWidget_C.ExecuteUbergraph_PinnedStatsWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPinnedStatsWidget_C::ExecuteUbergraph_PinnedStatsWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PinnedStatsWidget.PinnedStatsWidget_C.ExecuteUbergraph_PinnedStatsWidget"));

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
