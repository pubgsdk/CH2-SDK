// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BombardAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BombardAttack.BombardAttack_C.OnAssemble_BombardAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBombardAttack_C::OnAssemble_BombardAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BombardAttack.BombardAttack_C.OnAssemble_BombardAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BombardAttack.BombardAttack_C.ExecuteUbergraph_BombardAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBombardAttack_C::ExecuteUbergraph_BombardAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BombardAttack.BombardAttack_C.ExecuteUbergraph_BombardAttack"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
