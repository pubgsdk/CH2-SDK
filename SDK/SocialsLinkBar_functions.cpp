// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SocialsLinkBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SocialsLinkBar.SocialsLinkBar_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USocialsLinkBar_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__CloseDevMessage_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)

void USocialsLinkBar_C::BndEvt__CloseDevMessage_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__CloseDevMessage_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USocialsLinkBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__FacebookButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialsLinkBar_C::BndEvt__FacebookButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__FacebookButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

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


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__TwitterButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialsLinkBar_C::BndEvt__TwitterButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__TwitterButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

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


// Function SocialsLinkBar.SocialsLinkBar_C.OnMotdUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USocialsLinkBar_C::OnMotdUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.OnMotdUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.UpdateMotd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USocialsLinkBar_C::UpdateMotd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.UpdateMotd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.UpdateHoverText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Clear                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USocialsLinkBar_C::UpdateHoverText(const struct FText& Text, bool Clear)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.UpdateHoverText"));

	struct
	{
		struct FText                   Text;
		bool                           Clear;
	} params = {};

	params.Text = Text;
	params.Clear = Clear;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__WebsiteButton_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void USocialsLinkBar_C::BndEvt__WebsiteButton_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__WebsiteButton_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__YoutubeButton_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void USocialsLinkBar_C::BndEvt__YoutubeButton_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__YoutubeButton_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.AttemptOpenURL
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 URL                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void USocialsLinkBar_C::AttemptOpenURL(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.AttemptOpenURL"));

	struct
	{
		struct FString                 URL;
	} params = {};

	params.URL = URL;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__FacebookButton_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void USocialsLinkBar_C::BndEvt__FacebookButton_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__FacebookButton_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__TwitterButton_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void USocialsLinkBar_C::BndEvt__TwitterButton_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__TwitterButton_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__DevMsgLinkButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialsLinkBar_C::BndEvt__DevMsgLinkButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__DevMsgLinkButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature"));

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


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__RedditButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void USocialsLinkBar_C::BndEvt__RedditButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__RedditButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialsLinkBar_C::BndEvt__DiscordButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

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


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void USocialsLinkBar_C::BndEvt__DiscordButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__RedditButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialsLinkBar_C::BndEvt__RedditButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__RedditButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

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


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__WebsiteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialsLinkBar_C::BndEvt__WebsiteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__WebsiteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature"));

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


// Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__YoutubeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UStatefulButton_C*       Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialsLinkBar_C::BndEvt__YoutubeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.BndEvt__YoutubeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

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


// Function SocialsLinkBar.SocialsLinkBar_C.ExecuteUbergraph_SocialsLinkBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialsLinkBar_C::ExecuteUbergraph_SocialsLinkBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SocialsLinkBar.SocialsLinkBar_C.ExecuteUbergraph_SocialsLinkBar"));

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
