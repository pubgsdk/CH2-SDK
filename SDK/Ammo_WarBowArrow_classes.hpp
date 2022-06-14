#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ammo_WarBowArrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ammo_WarBowArrow.Ammo_WarBowArrow_C
// 0x001D (0x1241 - 0x1224)
class AAmmo_WarBowArrow_C : public ABaseArrow_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1224(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             AttachRagdoll;                                            // 0x1230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereComponent*                            CloseCallCollisionSphere;                                 // 0x1238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               StopSoundPlayed;                                          // 0x1240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Ammo_WarBowArrow.Ammo_WarBowArrow_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnMovementStarted_Event_Arrow();
	void OnMovementFinished_Event_Arrow();
	void StandardArrow_AssignProjectileEvents();
	void ExecuteUbergraph_Ammo_WarBowArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
