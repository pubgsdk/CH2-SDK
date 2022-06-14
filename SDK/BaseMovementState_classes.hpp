#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseMovementState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseMovementState.BaseMovementState_C
// 0x00C8 (0x0240 - 0x0178)
class UBaseMovementState_C : public UHorseMovementState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FInputMovementStateRange>            ForwardInputMovementRanges;                               // 0x0180(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<struct FInputMovementStateRange>            BackwardInputMovementRanges;                              // 0x0190(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FInputMovementStateRange                    ForwardBoostInputMovementRange;                           // 0x01A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FInputMovementStateRange                    ForwardControlInputMovementRange;                         // 0x01B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FInputMovementStateRange                    BackwardControlInputMovementRange;                        // 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FInputMovementStateRange                    BackwardBoostInputMovementRange;                          // 0x01D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	TArray<struct FInputMovementStateRange>            ForwardStrafingInputMovementRanges;                       // 0x01E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<struct FInputMovementStateRange>            BackwardStrafingInputMovementRanges;                      // 0x01F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FInputMovementStateRange                    ForwardStrafingControlInputMovementRange;                 // 0x0200(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FInputMovementStateRange                    ForwardStrafingBoostInputMovementRange;                   // 0x0210(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FInputMovementStateRange                    BackwardStrafingControlInputMovementRange;                // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FInputMovementStateRange                    BackwardStrafingBoostInputMovementRange;                  // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BaseMovementState.BaseMovementState_C"));
		return ptr;
	}


	void GetTargetOrientationOffset(TEnumAsByte<EMovementDirection> Direction, float* Min, float* Max);
	float GetOrbitTurnScale(float LookAtDistance, float StrafeSpeed, float TurnRate);
	float GetTurnInputScale(EHorseTurnInput TurnInput, float OrientationOffset);
	void GetMovementStateFromInput(float Input, const struct FInputMovementStateRange& BoostInputMovementRange, const struct FInputMovementStateRange& ControlInputMovementRange, TArray<struct FInputMovementStateRange>* InputMovementRanges, struct FName* MovementState, float* SpeedPercentage);
	void SetTurn(float Scale, TEnumAsByte<EHorseInterpCategory> _, float Boost_Scale, TEnumAsByte<EHorseInterpCategory> __, float Control_Scale, TEnumAsByte<EHorseInterpCategory> ___);
	void SetAcceleration(float Scale, TEnumAsByte<EHorseInterpCategory> _, float Boost_Scale, TEnumAsByte<EHorseInterpCategory> __, float Control_Scale, TEnumAsByte<EHorseInterpCategory> ___);
	void SetTargetSpeedState__percentage_(const struct FName& State, float Percent);
	void SetTargetSpeedState(const struct FName& State);
	void SetMovement(float AccelScale, float AccelInterp, float AccelBoostModifier, float TurnScale, float TurnInterp, float TurnBoostModifier);
	void OnAssemble_BaseMovementState();
	void UpdateMovement();
	void ExecuteUbergraph_BaseMovementState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
