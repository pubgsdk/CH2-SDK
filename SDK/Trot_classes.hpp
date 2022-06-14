#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Trot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trot.Trot_C
// 0x0010 (0x0250 - 0x0240)
class UTrot_C : public UBaseMovementState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               MaintainSpeed;                                            // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	float                                              ForwardSpeed;                                             // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Trot.Trot_C"));
		return ptr;
	}


	void OnAssemble_Trot();
	void UpdateMovement();
	void StrafeGearDown();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void GearDown();
	void GearUp();
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void ExecuteUbergraph_Trot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
