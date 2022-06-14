// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DamageMessage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DamageMessage.DamageMessage_C.Event Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          StartTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ActorName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// EFaction                       Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Multiplier                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDamageMessage_C::Event_Update(float StartTime, float Damage, const struct FName& DamageType, const struct FString& ActorName, EFaction Faction, float Multiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DamageMessage.DamageMessage_C.Event Update"));

	struct
	{
		float                          StartTime;
		float                          Damage;
		struct FName                   DamageType;
		struct FString                 ActorName;
		EFaction                       Faction;
		float                          Multiplier;
	} params = {};

	params.StartTime = StartTime;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.ActorName = ActorName;
	params.Faction = Faction;
	params.Multiplier = Multiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DamageMessage.DamageMessage_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UDamageMessage_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DamageMessage.DamageMessage_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DamageMessage.DamageMessage_C.ExecuteUbergraph_DamageMessage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDamageMessage_C::ExecuteUbergraph_DamageMessage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DamageMessage.DamageMessage_C.ExecuteUbergraph_DamageMessage"));

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
