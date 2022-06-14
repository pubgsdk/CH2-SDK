// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FadeWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FadeWidget.FadeWidget_C.Handle requests changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFadeWidget_C::Handle_requests_changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.Handle requests changed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FadeWidget.FadeWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFadeWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FadeWidget.FadeWidget_C.FadeIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Playback_Speed                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFadeWidget_C::FadeIn(float Playback_Speed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.FadeIn"));

	struct
	{
		float                          Playback_Speed;
	} params = {};

	params.Playback_Speed = Playback_Speed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FadeWidget.FadeWidget_C.FadeOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Playback_Speed                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFadeWidget_C::FadeOut(float Playback_Speed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.FadeOut"));

	struct
	{
		float                          Playback_Speed;
	} params = {};

	params.Playback_Speed = Playback_Speed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FadeWidget.FadeWidget_C.Add requester
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFadeWidget_C::Add_requester(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.Add requester"));

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


// Function FadeWidget.FadeWidget_C.Remove requester
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Requester                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFadeWidget_C::Remove_requester(class UObject* Requester)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.Remove requester"));

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


// Function FadeWidget.FadeWidget_C.Update requests soon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFadeWidget_C::Update_requests_soon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.Update requests soon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FadeWidget.FadeWidget_C.Snap Fade In
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFadeWidget_C::Snap_Fade_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.Snap Fade In"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FadeWidget.FadeWidget_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UFadeWidget_C::WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FadeWidget.FadeWidget_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_2
// (FUNC_BlueprintEvent)

void UFadeWidget_C::WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FadeWidget.FadeWidget_C.ExecuteUbergraph_FadeWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFadeWidget_C::ExecuteUbergraph_FadeWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.ExecuteUbergraph_FadeWidget"));

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


// Function FadeWidget.FadeWidget_C.Fade out finished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFadeWidget_C::Fade_out_finished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.Fade out finished__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FadeWidget.FadeWidget_C.Fade out started__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFadeWidget_C::Fade_out_started__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.Fade out started__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FadeWidget.FadeWidget_C.On Is Faded? Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Faded_                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFadeWidget_C::On_Is_Faded__Changed__DelegateSignature(bool Is_Faded_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FadeWidget.FadeWidget_C.On Is Faded? Changed__DelegateSignature"));

	struct
	{
		bool                           Is_Faded_;
	} params = {};

	params.Is_Faded_ = Is_Faded_;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
