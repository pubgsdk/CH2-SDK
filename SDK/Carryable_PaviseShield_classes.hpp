#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_PaviseShield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_PaviseShield.Carryable_PaviseShield_C
// 0x000D (0x1331 - 0x1324)
class ACarryable_PaviseShield_C : public ABaseCarryable_Deployable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1324(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	EFaction                                           Faction;                                                  // 0x1330(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_PaviseShield.Carryable_PaviseShield_C"));
		return ptr;
	}


	void OnVisualizationActorSpawned();
	void ExecuteUbergraph_Carryable_PaviseShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
