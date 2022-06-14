#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TournamentGrounds_Sound_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TournamentGrounds_Sound.TournamentGrounds_Sound_C
// 0x0028 (0x0288 - 0x0260)
class ATournamentGrounds_Sound_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AAkAmbientSound*                             Play_Crowd_Gen_Surround_R2_35_ExecuteUbergraph_TournamentGrounds_Sound_RefProperty;// 0x0268(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AAkAmbientSound*                             Play_Crowd_Gen_Surround_R1_32_ExecuteUbergraph_TournamentGrounds_Sound_RefProperty;// 0x0270(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AAkAmbientSound*                             Play_Crowd_Gen_Surround_L2_29_ExecuteUbergraph_TournamentGrounds_Sound_RefProperty;// 0x0278(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AAkAmbientSound*                             Play_Crowd_Gen_Surround_L1_26_ExecuteUbergraph_TournamentGrounds_Sound_RefProperty;// 0x0280(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TournamentGrounds_Sound.TournamentGrounds_Sound_C"));
		return ptr;
	}


	void InpActEvt_Insert_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Home_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Equals_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Backslash_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Ctrl_Insert_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TournamentGrounds_Sound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
