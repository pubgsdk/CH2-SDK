#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ammo_HeavyCrossbowBolt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ammo_HeavyCrossbowBolt.Ammo_HeavyCrossbowBolt_C
// 0x001D (0x1241 - 0x1224)
class AAmmo_HeavyCrossbowBolt_C : public ABaseArrow_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1224(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             AttachRagdoll;                                            // 0x1230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereComponent*                            CloseCallCollisionSphere;                                 // 0x1238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               StopSoundPlayed;                                          // 0x1240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Ammo_HeavyCrossbowBolt.Ammo_HeavyCrossbowBolt_C"));
		return ptr;
	}


	void UserConstructionScript();
	void CrossbowBolt_AssignProjectileEvents();
	void OnMovementStarted_Event_Bolt();
	void OnMovementFinished_Event_Bolt();
	void ExecuteUbergraph_Ammo_HeavyCrossbowBolt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
