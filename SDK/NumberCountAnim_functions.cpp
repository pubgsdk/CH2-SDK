// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NumberCountAnim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NumberCountAnim.NumberCountAnim_C.SetNumber
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Num                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          LerpTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNumberCountAnim_C::SetNumber(int Num, float LerpTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NumberCountAnim.NumberCountAnim_C.SetNumber"));

	struct
	{
		int                            Num;
		float                          LerpTime;
	} params = {};

	params.Num = Num;
	params.LerpTime = LerpTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NumberCountAnim.NumberCountAnim_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNumberCountAnim_C::CustomEvent_1(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NumberCountAnim.NumberCountAnim_C.CustomEvent_1"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NumberCountAnim.NumberCountAnim_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNumberCountAnim_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NumberCountAnim.NumberCountAnim_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NumberCountAnim.NumberCountAnim_C.SetFontSize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNumberCountAnim_C::SetFontSize(int Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NumberCountAnim.NumberCountAnim_C.SetFontSize"));

	struct
	{
		int                            Size;
	} params = {};

	params.Size = Size;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NumberCountAnim.NumberCountAnim_C.ExecuteUbergraph_NumberCountAnim
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNumberCountAnim_C::ExecuteUbergraph_NumberCountAnim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NumberCountAnim.NumberCountAnim_C.ExecuteUbergraph_NumberCountAnim"));

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
