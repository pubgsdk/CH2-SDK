// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CinematicMenuManagerInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.RequestSpecificHint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   HintKey                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::RequestSpecificHint(const struct FName& HintKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.RequestSpecificHint"));

	struct
	{
		struct FName                   HintKey;
	} params = {};

	params.HintKey = HintKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.RequestRandomHint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Chance                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHintType>         HintKey                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHintInputType>    HintInputType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::RequestRandomHint(float Chance, TEnumAsByte<EHintType> HintKey, TEnumAsByte<EHintInputType> HintInputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.RequestRandomHint"));

	struct
	{
		float                          Chance;
		TEnumAsByte<EHintType>         HintKey;
		TEnumAsByte<EHintInputType>    HintInputType;
	} params = {};

	params.Chance = Chance;
	params.HintKey = HintKey;
	params.HintInputType = HintInputType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.GetFadeDuration
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::GetFadeDuration(float* Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.GetFadeDuration"));

	struct
	{
		float                          Duration;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Snap Fade In
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCinematicMenuManagerInterface_C::Snap_Fade_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Snap Fade In"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Add Cinematic Mode Change Listener
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UCinematicModeChangeListenerInterface_C> Listener                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCinematicMenuManagerInterface_C::Add_Cinematic_Mode_Change_Listener(const TScriptInterface<class UCinematicModeChangeListenerInterface_C>& Listener)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Add Cinematic Mode Change Listener"));

	struct
	{
		TScriptInterface<class UCinematicModeChangeListenerInterface_C> Listener;
	} params = {};

	params.Listener = Listener;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release fade out (fade in)
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::Release_fade_out__fade_in_(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release fade out (fade in)"));

	struct
	{
		class UObject*                 Requester;
	} params = {};

	params.Requester = Requester;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request fade out
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::Request_fade_out(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request fade out"));

	struct
	{
		class UObject*                 Requester;
	} params = {};

	params.Requester = Requester;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release cinematic HUD mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicMenuMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::Release_cinematic_HUD_mode(class UObject* Requester, TEnumAsByte<ECinematicMenuMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release cinematic HUD mode"));

	struct
	{
		class UObject*                 Requester;
		TEnumAsByte<ECinematicMenuMode> Mode;
	} params = {};

	params.Requester = Requester;
	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request cinematic HUD mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicMenuMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::Request_cinematic_HUD_mode(class UObject* Requester, TEnumAsByte<ECinematicMenuMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request cinematic HUD mode"));

	struct
	{
		class UObject*                 Requester;
		TEnumAsByte<ECinematicMenuMode> Mode;
	} params = {};

	params.Requester = Requester;
	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release cinematic bars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::Release_cinematic_bars(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release cinematic bars"));

	struct
	{
		class UObject*                 Requester;
	} params = {};

	params.Requester = Requester;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request cinematic bars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ECinematicBarsMode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::Request_cinematic_bars(class UObject* Requester, TEnumAsByte<ECinematicBarsMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request cinematic bars"));

	struct
	{
		class UObject*                 Requester;
		TEnumAsByte<ECinematicBarsMode> Mode;
	} params = {};

	params.Requester = Requester;
	params.Mode = Mode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Remove Cinematic Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::Remove_Cinematic_Widget(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Remove Cinematic Widget"));

	struct
	{
		class UWidget*                 Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Push Cinematic Widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UWidget*/      Widget_class                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCinematicMenuManagerInterface_C::Push_Cinematic_Widget(class UClass* /*UWidget*/ Widget_class, class UWidget** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Push Cinematic Widget"));

	struct
	{
		class UClass* /*UWidget*/      Widget_class;
		class UWidget*                 Widget;
	} params = {};

	params.Widget_class = Widget_class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Widget != nullptr)
		*Widget = params.Widget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
