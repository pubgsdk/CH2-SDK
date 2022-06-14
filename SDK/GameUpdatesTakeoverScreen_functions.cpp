// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameUpdatesTakeoverScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.UpdateScroll
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameUpdatesTakeoverScreen_C::UpdateScroll(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.UpdateScroll"));

	struct
	{
		float                          DeltaTime;
	} params = {};

	params.DeltaTime = DeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.SetFocusIfNeeded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameUpdatesTakeoverScreen_C::SetFocusIfNeeded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.SetFocusIfNeeded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UGameUpdatesTakeoverScreen_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnKeyUp"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UGameUpdatesTakeoverScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnLoaded_440A3BAD453533B5A70B58879F504C48
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UObject*/      Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameUpdatesTakeoverScreen_C::OnLoaded_440A3BAD453533B5A70B58879F504C48(class UClass* /*UObject*/ Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnLoaded_440A3BAD453533B5A70B58879F504C48"));

	struct
	{
		class UClass* /*UObject*/      Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.SetupUpdateData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameUpdateData         UpdateData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UGameUpdatesTakeoverScreen_C::SetupUpdateData(const struct FGameUpdateData& UpdateData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.SetupUpdateData"));

	struct
	{
		struct FGameUpdateData         UpdateData;
	} params = {};

	params.UpdateData = UpdateData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Setup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UClass* /*UTBLGameUpdateContentWidget*/ ContentWidgetClass             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameUpdatesTakeoverScreen_C::Setup(const struct FText& Title, class UClass* /*UTBLGameUpdateContentWidget*/ ContentWidgetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Setup"));

	struct
	{
		struct FText                   Title;
		class UClass* /*UTBLGameUpdateContentWidget*/ ContentWidgetClass;
	} params = {};

	params.Title = Title;
	params.ContentWidgetClass = ContentWidgetClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameUpdatesTakeoverScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameUpdatesTakeoverScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.CloseScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameUpdatesTakeoverScreen_C::CloseScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.CloseScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.BndEvt__Radiobutton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameUpdatesTakeoverScreen_C::BndEvt__Radiobutton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.BndEvt__Radiobutton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UStatefulButton_C*       Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.ExecuteUbergraph_GameUpdatesTakeoverScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameUpdatesTakeoverScreen_C::ExecuteUbergraph_GameUpdatesTakeoverScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.ExecuteUbergraph_GameUpdatesTakeoverScreen"));

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
