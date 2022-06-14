// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_RankUpMessage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_RankUpMessage.BPI_RankUpMessage_C.StartUnlockMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         Unlocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPI_RankUpMessage_C::StartUnlockMessage(const struct FPrimaryAssetId& Unlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_RankUpMessage.BPI_RankUpMessage_C.StartUnlockMessage"));

	struct
	{
		struct FPrimaryAssetId         Unlocked;
	} params = {};

	params.Unlocked = Unlocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BPI_RankUpMessage.BPI_RankUpMessage_C.StartRankMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRankUpMessage          RankMessage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBPI_RankUpMessage_C::StartRankMessage(const struct FRankUpMessage& RankMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_RankUpMessage.BPI_RankUpMessage_C.StartRankMessage"));

	struct
	{
		struct FRankUpMessage          RankMessage;
	} params = {};

	params.RankMessage = RankMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
