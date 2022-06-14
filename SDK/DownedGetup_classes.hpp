#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DownedGetup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DownedGetup.DownedGetup_C
// 0x0008 (0x0190 - 0x0188)
class UDownedGetup_C : public UBaseCrowdControlState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DownedGetup.DownedGetup_C"));
		return ptr;
	}


	void OnAssemble_DownedGetup();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void ExecuteUbergraph_DownedGetup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
