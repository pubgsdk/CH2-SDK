// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponRankUpWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponRankUpWidget.WeaponRankUpWidget_C.SetIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponRankUpWidget_C::SetIcon(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponRankUpWidget.WeaponRankUpWidget_C.SetIcon"));

	struct
	{
		class UTexture2D*              Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponRankUpWidget.WeaponRankUpWidget_C.StartRankMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRankUpMessage          RankMessage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponRankUpWidget_C::StartRankMessage(const struct FRankUpMessage& RankMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponRankUpWidget.WeaponRankUpWidget_C.StartRankMessage"));

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


// Function WeaponRankUpWidget.WeaponRankUpWidget_C.ExecuteUbergraph_WeaponRankUpWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponRankUpWidget_C::ExecuteUbergraph_WeaponRankUpWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponRankUpWidget.WeaponRankUpWidget_C.ExecuteUbergraph_WeaponRankUpWidget"));

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
