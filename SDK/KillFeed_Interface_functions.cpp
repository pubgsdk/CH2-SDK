// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "KillFeed_Interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KillFeed_Interface.KillFeed_Interface_C.BeginRemove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKillFeed_Interface_C::BeginRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function KillFeed_Interface.KillFeed_Interface_C.BeginRemove"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
