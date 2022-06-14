#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ammo_Fire_WarBowArrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C
// 0x0017 (0x1258 - 0x1241)
class AAmmo_Fire_WarBowArrow_C : public AAmmo_WarBowArrow_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1241(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBLParticleSystemComponent*                 PassiveEffect;                                            // 0x1250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnMovementFinished_Event_FireArrow();
	void FireArrow_AssignProjectileEvents();
	void ExecuteUbergraph_Ammo_Fire_WarBowArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
