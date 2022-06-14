#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CarryableDrunkComp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CarryableDrunkComp.CarryableDrunkComp_C
// 0x0010 (0x0118 - 0x0108)
class UCarryableDrunkComp_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AInventoryItem*                              OwningItem;                                               // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CarryableDrunkComp.CarryableDrunkComp_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnBattleCryTriggered_Event_1();
	void ExecuteUbergraph_CarryableDrunkComp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
