#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BreakableGate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BreakableGate.BP_BreakableGate_C
// 0x009B (0x0514 - 0x0479)
class ABP_BreakableGate_C : public ABP_BaseBreakableGate_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHudMarkerDisplayComponent*                  HudMarkerDisplay;                                         // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UActorInfoDisplayComponent*                  ActorInfoDisplay;                                         // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Door_Left;                                                // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene2;                                                   // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene1;                                                   // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Door_Right;                                               // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                    // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_Inwards_9D94F82646F471F091626D9326EF1BBC;      // 0x04C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_9D94F82646F471F091626D9326EF1BBC;   // 0x04C4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_0_Impact1_DBCBCC92419E45AC2182A8BAAB8F7742;    // 0x04D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_DBCBCC92419E45AC2182A8BAAB8F7742; // 0x04D4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_2_Impact1_68125BB443373B539139A79D80853C80;      // 0x04E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_68125BB443373B539139A79D80853C80;   // 0x04E4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_1_Inwards_B2ACE73A48FD174617C2ACA2920E890D;      // 0x04F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_B2ACE73A48FD174617C2ACA2920E890D;   // 0x04F4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              rotation_amount;                                          // 0x0500(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    worldrotations;                                           // 0x0504(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              right_rot_mult;                                           // 0x0510(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BreakableGate.BP_BreakableGate_C"));
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void DamageFx(const struct FDamageTakenEvent& DamageTakenEvent);
	void ForceOpened(TEnumAsByte<EGateDirection> OpenGateDirection);
	void OpenGate(TEnumAsByte<EGateDirection> OpenGateDirection);
	void ForceBrokenState();
	void SetInwardTimeline(float Time);
	void SetOutwardTimeline(float Time);
	void ReverseActiveTimeline();
	void ReverseInwardTimelime();
	void ReverseOutwardTimelime();
	void ExecuteUbergraph_BP_BreakableGate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
