// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseMovementState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseMovementState.BaseMovementState_C.GetTargetOrientationOffset
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Min                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Max                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EMovementDirection> Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseMovementState_C::GetTargetOrientationOffset(TEnumAsByte<EMovementDirection> Direction, float* Min, float* Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.GetTargetOrientationOffset"));

	struct
	{
		float                          Min;
		float                          Max;
		TEnumAsByte<EMovementDirection> Direction;
	} params = {};

	params.Direction = Direction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function BaseMovementState.BaseMovementState_C.GetOrbitTurnScale
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          LookAtDistance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          StrafeSpeed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TurnRate                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UBaseMovementState_C::GetOrbitTurnScale(float LookAtDistance, float StrafeSpeed, float TurnRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.GetOrbitTurnScale"));

	struct
	{
		float                          LookAtDistance;
		float                          StrafeSpeed;
		float                          TurnRate;
		float                          ReturnValue;
	} params = {};

	params.LookAtDistance = LookAtDistance;
	params.StrafeSpeed = StrafeSpeed;
	params.TurnRate = TurnRate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseMovementState.BaseMovementState_C.GetTurnInputScale
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EHorseTurnInput                TurnInput                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OrientationOffset              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UBaseMovementState_C::GetTurnInputScale(EHorseTurnInput TurnInput, float OrientationOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.GetTurnInputScale"));

	struct
	{
		EHorseTurnInput                TurnInput;
		float                          OrientationOffset;
		float                          ReturnValue;
	} params = {};

	params.TurnInput = TurnInput;
	params.OrientationOffset = OrientationOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BaseMovementState.BaseMovementState_C.GetMovementStateFromInput
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Input                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FInputMovementStateRange> InputMovementRanges            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FInputMovementStateRange BoostInputMovementRange        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FInputMovementStateRange ControlInputMovementRange      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FName                   MovementState                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SpeedPercentage                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseMovementState_C::GetMovementStateFromInput(float Input, const struct FInputMovementStateRange& BoostInputMovementRange, const struct FInputMovementStateRange& ControlInputMovementRange, TArray<struct FInputMovementStateRange>* InputMovementRanges, struct FName* MovementState, float* SpeedPercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.GetMovementStateFromInput"));

	struct
	{
		float                          Input;
		TArray<struct FInputMovementStateRange> InputMovementRanges;
		struct FInputMovementStateRange BoostInputMovementRange;
		struct FInputMovementStateRange ControlInputMovementRange;
		struct FName                   MovementState;
		float                          SpeedPercentage;
	} params = {};

	params.Input = Input;
	params.BoostInputMovementRange = BoostInputMovementRange;
	params.ControlInputMovementRange = ControlInputMovementRange;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InputMovementRanges != nullptr)
		*InputMovementRanges = params.InputMovementRanges;
	if (MovementState != nullptr)
		*MovementState = params.MovementState;
	if (SpeedPercentage != nullptr)
		*SpeedPercentage = params.SpeedPercentage;
}


// Function BaseMovementState.BaseMovementState_C.SetTurn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHorseInterpCategory> _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Boost_Scale                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHorseInterpCategory> __                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Control_Scale                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHorseInterpCategory> ___                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseMovementState_C::SetTurn(float Scale, TEnumAsByte<EHorseInterpCategory> _, float Boost_Scale, TEnumAsByte<EHorseInterpCategory> __, float Control_Scale, TEnumAsByte<EHorseInterpCategory> ___)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.SetTurn"));

	struct
	{
		float                          Scale;
		TEnumAsByte<EHorseInterpCategory> _;
		float                          Boost_Scale;
		TEnumAsByte<EHorseInterpCategory> __;
		float                          Control_Scale;
		TEnumAsByte<EHorseInterpCategory> ___;
	} params = {};

	params.Scale = Scale;
	params._ = _;
	params.Boost_Scale = Boost_Scale;
	params.__ = __;
	params.Control_Scale = Control_Scale;
	params.___ = ___;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseMovementState.BaseMovementState_C.SetAcceleration
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHorseInterpCategory> _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Boost_Scale                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHorseInterpCategory> __                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Control_Scale                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EHorseInterpCategory> ___                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseMovementState_C::SetAcceleration(float Scale, TEnumAsByte<EHorseInterpCategory> _, float Boost_Scale, TEnumAsByte<EHorseInterpCategory> __, float Control_Scale, TEnumAsByte<EHorseInterpCategory> ___)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.SetAcceleration"));

	struct
	{
		float                          Scale;
		TEnumAsByte<EHorseInterpCategory> _;
		float                          Boost_Scale;
		TEnumAsByte<EHorseInterpCategory> __;
		float                          Control_Scale;
		TEnumAsByte<EHorseInterpCategory> ___;
	} params = {};

	params.Scale = Scale;
	params._ = _;
	params.Boost_Scale = Boost_Scale;
	params.__ = __;
	params.Control_Scale = Control_Scale;
	params.___ = ___;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseMovementState.BaseMovementState_C.SetTargetSpeedState (percentage)
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseMovementState_C::SetTargetSpeedState__percentage_(const struct FName& State, float Percent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.SetTargetSpeedState (percentage)"));

	struct
	{
		struct FName                   State;
		float                          Percent;
	} params = {};

	params.State = State;
	params.Percent = Percent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseMovementState.BaseMovementState_C.SetTargetSpeedState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseMovementState_C::SetTargetSpeedState(const struct FName& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.SetTargetSpeedState"));

	struct
	{
		struct FName                   State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseMovementState.BaseMovementState_C.SetMovement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AccelScale                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AccelInterp                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AccelBoostModifier             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TurnScale                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TurnInterp                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TurnBoostModifier              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseMovementState_C::SetMovement(float AccelScale, float AccelInterp, float AccelBoostModifier, float TurnScale, float TurnInterp, float TurnBoostModifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.SetMovement"));

	struct
	{
		float                          AccelScale;
		float                          AccelInterp;
		float                          AccelBoostModifier;
		float                          TurnScale;
		float                          TurnInterp;
		float                          TurnBoostModifier;
	} params = {};

	params.AccelScale = AccelScale;
	params.AccelInterp = AccelInterp;
	params.AccelBoostModifier = AccelBoostModifier;
	params.TurnScale = TurnScale;
	params.TurnInterp = TurnInterp;
	params.TurnBoostModifier = TurnBoostModifier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseMovementState.BaseMovementState_C.OnAssemble_BaseMovementState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseMovementState_C::OnAssemble_BaseMovementState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.OnAssemble_BaseMovementState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseMovementState.BaseMovementState_C.UpdateMovement
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBaseMovementState_C::UpdateMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.UpdateMovement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BaseMovementState.BaseMovementState_C.ExecuteUbergraph_BaseMovementState
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseMovementState_C::ExecuteUbergraph_BaseMovementState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseMovementState.BaseMovementState_C.ExecuteUbergraph_BaseMovementState"));

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
