// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PostGameWidget_UnlockedItemHeader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PostGameWidget_UnlockedItemHeader.PostGameWidget_UnlockedItemHeader_C.GetAssetDescriptor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId         AssetId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   DescriptorText                 (CPF_Parm, CPF_OutParm)

void UPostGameWidget_UnlockedItemHeader_C::GetAssetDescriptor(const struct FPrimaryAssetId& AssetId, struct FText* DescriptorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget_UnlockedItemHeader.PostGameWidget_UnlockedItemHeader_C.GetAssetDescriptor"));

	struct
	{
		struct FPrimaryAssetId         AssetId;
		struct FText                   DescriptorText;
	} params = {};

	params.AssetId = AssetId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DescriptorText != nullptr)
		*DescriptorText = params.DescriptorText;
}


// Function PostGameWidget_UnlockedItemHeader.PostGameWidget_UnlockedItemHeader_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPostGameWidget_UnlockedItemHeader_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget_UnlockedItemHeader.PostGameWidget_UnlockedItemHeader_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PostGameWidget_UnlockedItemHeader.PostGameWidget_UnlockedItemHeader_C.ExecuteUbergraph_PostGameWidget_UnlockedItemHeader
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPostGameWidget_UnlockedItemHeader_C::ExecuteUbergraph_PostGameWidget_UnlockedItemHeader(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PostGameWidget_UnlockedItemHeader.PostGameWidget_UnlockedItemHeader_C.ExecuteUbergraph_PostGameWidget_UnlockedItemHeader"));

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
