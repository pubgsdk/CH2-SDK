#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_Gamemodes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_Gamemodes.BPF_Gamemodes_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Gamemodes_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_Gamemodes.BPF_Gamemodes_C"));
		return ptr;
	}


	static bool Is_Map_Brawl_Gamemode(const struct FString& In_Map_Name, class UObject* __WorldContext);
	static void IsGamemodeFFA(class UObject* __WorldContext, bool* _);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
