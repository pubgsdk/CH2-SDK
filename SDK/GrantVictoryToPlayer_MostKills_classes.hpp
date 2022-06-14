#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GrantVictoryToPlayer_MostKills_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GrantVictoryToPlayer_MostKills.GrantVictoryToPlayer_MostKills_C
// 0x000C (0x004C - 0x0040)
class UGrantVictoryToPlayer_MostKills_C : public UGrantVictoryToPlayer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                MaxKills;                                                 // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GrantVictoryToPlayer_MostKills.GrantVictoryToPlayer_MostKills_C"));
		return ptr;
	}


	void StartStage();
	void ExecuteUbergraph_GrantVictoryToPlayer_MostKills(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
