// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ClassRankUpWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClassRankUpWidget.ClassRankUpWidget_C.OnLoaded_BCDCF48A44C07F102861D792F4D507D0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UClassRankUpWidget_C::OnLoaded_BCDCF48A44C07F102861D792F4D507D0(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClassRankUpWidget.ClassRankUpWidget_C.OnLoaded_BCDCF48A44C07F102861D792F4D507D0"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ClassRankUpWidget.ClassRankUpWidget_C.StartRankMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRankUpMessage          RankMessage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UClassRankUpWidget_C::StartRankMessage(const struct FRankUpMessage& RankMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClassRankUpWidget.ClassRankUpWidget_C.StartRankMessage"));

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


// Function ClassRankUpWidget.ClassRankUpWidget_C.ExecuteUbergraph_ClassRankUpWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UClassRankUpWidget_C::ExecuteUbergraph_ClassRankUpWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ClassRankUpWidget.ClassRankUpWidget_C.ExecuteUbergraph_ClassRankUpWidget"));

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
