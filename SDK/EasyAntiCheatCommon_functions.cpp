// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EasyAntiCheatCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TArray<unsigned char>          Message                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UEasyAntiCheatNetComponent::ServerMessage(TArray<unsigned char> Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage"));

	struct
	{
		TArray<unsigned char>          Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TArray<unsigned char>          Message                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UEasyAntiCheatNetComponent::ClientMessage(TArray<unsigned char> Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage"));

	struct
	{
		TArray<unsigned char>          Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
