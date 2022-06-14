#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Inventory_Chicken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Inventory_Chicken.Inventory_Chicken_C
// 0x000F (0x1270 - 0x1261)
class AInventory_Chicken_C : public ABaseCarryable_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Inventory_Chicken.Inventory_Chicken_C"));
		return ptr;
	}


	void BndEvt__ProjectileCollision_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform);
	void OnInitialize();
	void ExecuteUbergraph_Inventory_Chicken(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
