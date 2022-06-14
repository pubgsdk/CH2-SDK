#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TournamentGrounds_atmospherics_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TournamentGrounds_atmospherics.TournamentGrounds_atmospherics_C
// 0x0010 (0x0270 - 0x0260)
class ATournamentGrounds_atmospherics_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ABP_AmbientCorpseManager_C*                  BP_AmbientCorpseManager_2_ExecuteUbergraph_TournamentGrounds_atmospherics_RefProperty;// 0x0268(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TournamentGrounds_atmospherics.TournamentGrounds_atmospherics_C"));
		return ptr;
	}


	void AmbientCorpses_Tournamentgrounds();
	void ExecuteUbergraph_TournamentGrounds_atmospherics(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
