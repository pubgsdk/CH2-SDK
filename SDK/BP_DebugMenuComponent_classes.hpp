#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_DebugMenuComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DebugMenuComponent.BP_DebugMenuComponent_C
// 0x0008 (0x0118 - 0x0110)
class UBP_DebugMenuComponent_C : public UBlueprintDebugMenuComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DebugMenuComponent.BP_DebugMenuComponent_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void Force_end_by_time(class AActor* Stage);
	void Force_end_by_score(class AScoredStage_C* Stage);
	void Set_time_left__minutes_(class AActor* Stage, float Minutes);
	void Add_time__minutes_(class AActor* Stage, float Minutes);
	void Add_Score(class AScoredStage_C* Stage, int Score);
	void Set_score(class AScoredStage_C* Stage, int Score);
	void Set_Tickets(class AActor* Actor, EFaction Faction, int Num_tickets);
	void ExecuteUbergraph_BP_DebugMenuComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
