#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AC_Riposte_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AC_Riposte.AC_Riposte_C
// 0x0010 (0x0078 - 0x0068)
class UAC_Riposte_C : public UAC_Attack_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector2D                                   RiposteDelay;                                             // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AC_Riposte.AC_Riposte_C"));
		return ptr;
	}


	void PerformAction(const struct FUtilityAI_Context& C);
	void CompleteAction(const struct FUtilityAI_Context& C);
	void ExecuteUbergraph_AC_Riposte(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
