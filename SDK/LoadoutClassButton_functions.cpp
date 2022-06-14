// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadoutClassButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadoutClassButton.LoadoutClassButton_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULoadoutClassButton_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.OnMouseButtonDoubleClick"));

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function LoadoutClassButton.LoadoutClassButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadoutClassButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.UpdatePawnClass
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ PawnClass                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassButton_C::UpdatePawnClass(class UClass* /*ATBLCharacter*/ PawnClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.UpdatePawnClass"));

	struct
	{
		class UClass* /*ATBLCharacter*/ PawnClass;
	} params = {};

	params.PawnClass = PawnClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.OnPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassButton_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.OnPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.OnClientPossessedPawn_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassButton_C::OnClientPossessedPawn_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.OnClientPossessedPawn_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.OnSelectedChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutClassButton_C::OnSelectedChanged(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.OnSelectedChanged"));

	struct
	{
		bool                           Selected;
	} params = {};

	params.Selected = Selected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.UpdateSelectable
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSet<TEnumAsByte<EAudioClassType>> ValidClasses                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULoadoutClassButton_C::UpdateSelectable(TSet<TEnumAsByte<EAudioClassType>> ValidClasses)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.UpdateSelectable"));

	struct
	{
		TSet<TEnumAsByte<EAudioClassType>> ValidClasses;
	} params = {};

	params.ValidClasses = ValidClasses;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutClassButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.PreConstruct"));

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


// Function LoadoutClassButton.LoadoutClassButton_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadoutClassButton_C::BndEvt__SelectedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.OnServerApprovedLoadout_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ServerApprovedLoadout          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass* /*ATBLCharacter*/ RequestedSubclass              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLoadout                RequestedLoadout               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULoadoutClassButton_C::OnServerApprovedLoadout_Event_1(bool ServerApprovedLoadout, class UClass* /*ATBLCharacter*/ RequestedSubclass, const struct FLoadout& RequestedLoadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.OnServerApprovedLoadout_Event_1"));

	struct
	{
		bool                           ServerApprovedLoadout;
		class UClass* /*ATBLCharacter*/ RequestedSubclass;
		struct FLoadout                RequestedLoadout;
	} params = {};

	params.ServerApprovedLoadout = ServerApprovedLoadout;
	params.RequestedSubclass = RequestedSubclass;
	params.RequestedLoadout = RequestedLoadout;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoadoutClassButton_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadoutClassButton_C::BndEvt__SelectedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ULoadoutClassButton_C::BndEvt__SelectedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.UnHoverButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Immediate                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutClassButton_C::UnHoverButton(bool Immediate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.UnHoverButton"));

	struct
	{
		bool                           Immediate;
	} params = {};

	params.Immediate = Immediate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.On Highlight Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULoadoutClassButton_C::On_Highlight_Event(bool Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.On Highlight Event"));

	struct
	{
		bool                           Hovered;
	} params = {};

	params.Hovered = Hovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.UpdateRank
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTBLOnlineStats         OnlineStats                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULoadoutClassButton_C::UpdateRank(const struct FTBLOnlineStats& OnlineStats)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.UpdateRank"));

	struct
	{
		struct FTBLOnlineStats         OnlineStats;
	} params = {};

	params.OnlineStats = OnlineStats;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.OnlineStatsLevelUp_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FLevelUpResult>  LevelUpEvents                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void ULoadoutClassButton_C::OnlineStatsLevelUp_Event_1(TArray<struct FLevelUpResult> LevelUpEvents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.OnlineStatsLevelUp_Event_1"));

	struct
	{
		TArray<struct FLevelUpResult>  LevelUpEvents;
	} params = {};

	params.LevelUpEvents = LevelUpEvents;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.ClassSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutClassButton_C::ClassSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.ClassSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.OnAddedToFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULoadoutClassButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.OnAddedToFocusPath"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.OnRemovedFromFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULoadoutClassButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.OnRemovedFromFocusPath"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.ForceHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoadoutClassButton_C::ForceHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.ForceHover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.ExecuteUbergraph_LoadoutClassButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassButton_C::ExecuteUbergraph_LoadoutClassButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.ExecuteUbergraph_LoadoutClassButton"));

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


// Function LoadoutClassButton.LoadoutClassButton_C.Class Previewed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassButton_C::Class_Previewed__DelegateSignature(class UClass* /*ATBLCharacter*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.Class Previewed__DelegateSignature"));

	struct
	{
		class UClass* /*ATBLCharacter*/ Class;
	} params = {};

	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LoadoutClassButton.LoadoutClassButton_C.Class Selected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATBLCharacter*/ Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULoadoutClassButton_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoadoutClassButton_C::Class_Selected__DelegateSignature(class UClass* /*ATBLCharacter*/ Class, class ULoadoutClassButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LoadoutClassButton.LoadoutClassButton_C.Class Selected__DelegateSignature"));

	struct
	{
		class UClass* /*ATBLCharacter*/ Class;
		class ULoadoutClassButton_C*   Button;
	} params = {};

	params.Class = Class;
	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
