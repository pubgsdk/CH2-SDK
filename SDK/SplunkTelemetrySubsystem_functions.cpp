// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SplunkTelemetrySubsystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SplunkTelemetrySubsystem.BPTelemetrySource.SetStringField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPTelemetrySource::SetStringField(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SplunkTelemetrySubsystem.BPTelemetrySource.SetStringField"));

	struct
	{
		struct FString                 Key;
		struct FString                 Value;
	} params = {};

	params.Key = Key;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SplunkTelemetrySubsystem.BPTelemetrySource.SetNumberField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UBPTelemetrySource::SetNumberField(const struct FString& Key, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SplunkTelemetrySubsystem.BPTelemetrySource.SetNumberField"));

	struct
	{
		struct FString                 Key;
		float                          Value;
	} params = {};

	params.Key = Key;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SplunkTelemetrySubsystem.BPTelemetrySource.Reset_BP
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBPTelemetrySource::Reset_BP()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SplunkTelemetrySubsystem.BPTelemetrySource.Reset_BP"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SplunkTelemetrySubsystem.BPTelemetrySource.OnTakeSample_BP
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBPTelemetrySource::OnTakeSample_BP()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SplunkTelemetrySubsystem.BPTelemetrySource.OnTakeSample_BP"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SplunkTelemetrySubsystem.BPTelemetrySource.GetKeyName
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UBPTelemetrySource::GetKeyName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SplunkTelemetrySubsystem.BPTelemetrySource.GetKeyName"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function SplunkTelemetrySubsystem.BPTelemetrySource.GenerateReportJSON_BP
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBPTelemetrySource::GenerateReportJSON_BP()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SplunkTelemetrySubsystem.BPTelemetrySource.GenerateReportJSON_BP"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SplunkTelemetrySubsystem.SplunkTelemetrySubsystem.OnWorldDestroy
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UWorld*                  World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USplunkTelemetrySubsystem::OnWorldDestroy(class UWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SplunkTelemetrySubsystem.SplunkTelemetrySubsystem.OnWorldDestroy"));

	struct
	{
		class UWorld*                  World;
	} params = {};

	params.World = World;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SplunkTelemetrySubsystem.SplunkTelemetrySubsystem.OnWorldCreation
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UWorld*                  World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USplunkTelemetrySubsystem::OnWorldCreation(class UWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SplunkTelemetrySubsystem.SplunkTelemetrySubsystem.OnWorldCreation"));

	struct
	{
		class UWorld*                  World;
	} params = {};

	params.World = World;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
