// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CrossbowAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrossbowAttack.CrossbowAttack_C.OnAssemble_CrossbowAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrossbowAttack_C::OnAssemble_CrossbowAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowAttack.CrossbowAttack_C.OnAssemble_CrossbowAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrossbowAttack.CrossbowAttack_C.ExecuteUbergraph_CrossbowAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrossbowAttack_C::ExecuteUbergraph_CrossbowAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowAttack.CrossbowAttack_C.ExecuteUbergraph_CrossbowAttack"));

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
