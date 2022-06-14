// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BaseInventoryItem_Interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseInventoryItem_Interface.BaseInventoryItem_Interface_C.Get Gore Params
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FBaseInventoryItem_GoreParams bpp__Params__pf                (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBaseInventoryItem_Interface_C::Get_Gore_Params(struct FBaseInventoryItem_GoreParams* bpp__Params__pf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BaseInventoryItem_Interface.BaseInventoryItem_Interface_C.Get Gore Params"));

	struct
	{
		struct FBaseInventoryItem_GoreParams bpp__Params__pf;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bpp__Params__pf != nullptr)
		*bpp__Params__pf = params.bpp__Params__pf;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
