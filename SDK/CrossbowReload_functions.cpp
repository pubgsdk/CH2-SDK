// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CrossbowReload_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrossbowReload.CrossbowReload_C.DisableCameraModifier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrossbowReload_C::DisableCameraModifier(const struct FName& NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowReload.CrossbowReload_C.DisableCameraModifier"));

	struct
	{
		struct FName                   NextState;
	} params = {};

	params.NextState = NextState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrossbowReload.CrossbowReload_C.EnableCameraModifier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrossbowReload_C::EnableCameraModifier()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowReload.CrossbowReload_C.EnableCameraModifier"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrossbowReload.CrossbowReload_C.OnAssemble_CrossbowReload
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrossbowReload_C::OnAssemble_CrossbowReload()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowReload.CrossbowReload_C.OnAssemble_CrossbowReload"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrossbowReload.CrossbowReload_C.EventEndAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCrossbowReload_C::EventEndAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowReload.CrossbowReload_C.EventEndAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrossbowReload.CrossbowReload_C.EventBeginState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PreviousStateTime              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AnimationLength                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrossbowReload_C::EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowReload.CrossbowReload_C.EventBeginState"));

	struct
	{
		struct FName                   PreviousState;
		float                          PreviousStateTime;
		float                          AnimationLength;
	} params = {};

	params.PreviousState = PreviousState;
	params.PreviousStateTime = PreviousStateTime;
	params.AnimationLength = AnimationLength;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrossbowReload.CrossbowReload_C.EventBeginFire
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AttackName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHeldQueue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrossbowReload_C::EventBeginFire(const struct FName& AttackName, bool bHeldQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowReload.CrossbowReload_C.EventBeginFire"));

	struct
	{
		struct FName                   AttackName;
		bool                           bHeldQueue;
	} params = {};

	params.AttackName = AttackName;
	params.bHeldQueue = bHeldQueue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrossbowReload.CrossbowReload_C.SoftRecovery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCrossbowReload_C::SoftRecovery()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowReload.CrossbowReload_C.SoftRecovery"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrossbowReload.CrossbowReload_C.EventEndState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NextState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bStartAttack                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCrossbowReload_C::EventEndState(const struct FName& NextState, bool bStartAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowReload.CrossbowReload_C.EventEndState"));

	struct
	{
		struct FName                   NextState;
		bool                           bStartAttack;
	} params = {};

	params.NextState = NextState;
	params.bStartAttack = bStartAttack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CrossbowReload.CrossbowReload_C.ExecuteUbergraph_CrossbowReload
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCrossbowReload_C::ExecuteUbergraph_CrossbowReload(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CrossbowReload.CrossbowReload_C.ExecuteUbergraph_CrossbowReload"));

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
