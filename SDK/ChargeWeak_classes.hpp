#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ChargeWeak_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChargeWeak.ChargeWeak_C
// 0x0008 (0x0198 - 0x0190)
class UChargeWeak_C : public UCharge_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ChargeWeak.ChargeWeak_C"));
		return ptr;
	}


	void OnAssemble_ChargeWeak();
	void CheckOutOfStamina();
	void EventTick(float DeltaSeconds);
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_ChargeWeak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
