// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BreakableGate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BreakableGate.BP_BreakableGate_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakableGate_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.Timeline_1__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableGate_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.Timeline_1__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.Timeline_1__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableGate_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.Timeline_1__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.Timeline_0_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableGate_C::Timeline_0_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.Timeline_0_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.Timeline_0_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableGate_C::Timeline_0_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.Timeline_0_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.Timeline_2__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableGate_C::Timeline_2__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.Timeline_2__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.Timeline_2__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableGate_C::Timeline_2__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.Timeline_2__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableGate_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_BreakableGate_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.DamageFx
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDamageTakenEvent       DamageTakenEvent               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ABP_BreakableGate_C::DamageFx(const struct FDamageTakenEvent& DamageTakenEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.DamageFx"));

	struct
	{
		struct FDamageTakenEvent       DamageTakenEvent;
	} params = {};

	params.DamageTakenEvent = DamageTakenEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.ForceOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGateDirection>    OpenGateDirection              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableGate_C::ForceOpened(TEnumAsByte<EGateDirection> OpenGateDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.ForceOpened"));

	struct
	{
		TEnumAsByte<EGateDirection>    OpenGateDirection;
	} params = {};

	params.OpenGateDirection = OpenGateDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.OpenGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGateDirection>    OpenGateDirection              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableGate_C::OpenGate(TEnumAsByte<EGateDirection> OpenGateDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.OpenGate"));

	struct
	{
		TEnumAsByte<EGateDirection>    OpenGateDirection;
	} params = {};

	params.OpenGateDirection = OpenGateDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.ForceBrokenState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakableGate_C::ForceBrokenState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.ForceBrokenState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.SetInwardTimeline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableGate_C::SetInwardTimeline(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.SetInwardTimeline"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.SetOutwardTimeline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableGate_C::SetOutwardTimeline(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.SetOutwardTimeline"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.ReverseActiveTimeline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakableGate_C::ReverseActiveTimeline()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.ReverseActiveTimeline"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.ReverseInwardTimelime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakableGate_C::ReverseInwardTimelime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.ReverseInwardTimelime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.ReverseOutwardTimelime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BreakableGate_C::ReverseOutwardTimelime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.ReverseOutwardTimelime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_BreakableGate.BP_BreakableGate_C.ExecuteUbergraph_BP_BreakableGate
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BreakableGate_C::ExecuteUbergraph_BP_BreakableGate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BreakableGate.BP_BreakableGate_C.ExecuteUbergraph_BP_BreakableGate"));

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
