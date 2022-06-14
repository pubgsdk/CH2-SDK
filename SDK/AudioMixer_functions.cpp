// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AudioMixer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AudioMixer.SynthComponent.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USynthComponent::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.Stop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SynthComponent.Start
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USynthComponent::Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SynthComponent.SetVolumeMultiplier
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          VolumeMultiplier               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.SetVolumeMultiplier"));

	struct
	{
		float                          VolumeMultiplier;
	} params = {};

	params.VolumeMultiplier = VolumeMultiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundSubmixBase*        Submix                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          SendLevel                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponent::SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.SetSubmixSend"));

	struct
	{
		class USoundSubmixBase*        Submix;
		float                          SendLevel;
	} params = {};

	params.Submix = Submix;
	params.SendLevel = SendLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SynthComponent.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USynthComponent::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.IsPlaying"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMegabytesToFree              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache"));

	struct
	{
		float                          InMegabytesToFree;
		float                          ReturnValue;
	} params = {};

	params.InMegabytesToFree = InMegabytesToFree;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EAudioRecordingExportType      ExportType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Path                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToRecord                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundWave*              ExistingSoundWaveToOverwrite   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundWave*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		EAudioRecordingExportType      ExportType;
		struct FString                 Name;
		struct FString                 Path;
		class USoundSubmix*            SubmixToRecord;
		class USoundWave*              ExistingSoundWaveToOverwrite;
		class USoundWave*              ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ExportType = ExportType;
	params.Name = Name;
	params.Path = Path;
	params.SubmixToRecord = SubmixToRecord;
	params.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToStopAnalyzing          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SubmixToStopAnalyzing;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixToStopAnalyzing = SubmixToStopAnalyzing;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ExpectedDuration               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToRecord                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ExpectedDuration;
		class USoundSubmix*            SubmixToRecord;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ExpectedDuration = ExpectedDuration;
	params.SubmixToRecord = SubmixToRecord;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToAnalyze                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EFFTSize                       FFTSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EFFTPeakInterpolationMethod    InterpolationMethod            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EFFTWindowType                 WindowType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          HopSize                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SubmixToAnalyze;
		EFFTSize                       FFTSize;
		EFFTPeakInterpolationMethod    InterpolationMethod;
		EFFTWindowType                 WindowType;
		float                          HopSize;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixToAnalyze = SubmixToAnalyze;
	params.FFTSize = FFTSize;
	params.InterpolationMethod = InterpolationMethod;
	params.WindowType = WindowType;
	params.HopSize = HopSize;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            EntryIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bBypassed                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		int                            EntryIndex;
		bool                           bBypassed;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;
	params.bBypassed = bBypassed;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToPause                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SubmixToPause;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixToPause = SubmixToPause;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            InSoundSubmix                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SubmixChainIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            InSoundSubmix;
		int                            SubmixChainIndex;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.InSoundSubmix = InSoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;
	params.SubmixEffectPreset = SubmixEffectPreset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SubmixChainIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SoundSubmix;
		int                            SubmixChainIndex;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SoundSubmix;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            EntryIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		int                            EntryIndex;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundWave*              SoundWave                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnLoadCompletion               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(class USoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback"));

	struct
	{
		class USoundWave*              SoundWave;
		struct FScriptDelegate         OnLoadCompletion;
	} params = {};

	params.SoundWave = SoundWave;
	params.OnLoadCompletion = OnLoadCompletion;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundCue*               SoundCue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(class USoundCue* SoundCue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback"));

	struct
	{
		class USoundCue*               SoundCue;
	} params = {};

	params.SoundCue = SoundCue;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToPause                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SubmixToPause;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixToPause = SubmixToPause;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Frequencies                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Phases                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToAnalyze                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Phases)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<float>                  Frequencies;
		TArray<float>                  Phases;
		class USoundSubmix*            SubmixToAnalyze;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Phases != nullptr)
		*Phases = params.Phases;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		int                            ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Frequencies                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Magnitudes                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToAnalyze                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Magnitudes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<float>                  Frequencies;
		TArray<float>                  Magnitudes;
		class USoundSubmix*            SubmixToAnalyze;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Magnitudes != nullptr)
		*Magnitudes = params.Magnitudes;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SoundSubmix;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAudioMixerBlueprintLibrary::AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundSubmix*            SoundSubmix;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
		int                            ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSourceEffectChainEntry Entry                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		struct FSourceEffectChainEntry Entry;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.Entry = Entry;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect"));

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectDynamicsProcessorSettings Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectDynamicsProcessorSettings Settings;
	} params = {};

	params.Settings = Settings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundSubmix*            Submix                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(class USoundSubmix* Submix)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix"));

	struct
	{
		class USoundSubmix*            Submix;
	} params = {};

	params.Submix = Submix;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectSubmixEQSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectSubmixEQSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UReverbEffect*           InReverbEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          WetLevel                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DryLevel                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect"));

	struct
	{
		class UReverbEffect*           InReverbEffect;
		float                          WetLevel;
		float                          DryLevel;
	} params = {};

	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;
	params.DryLevel = DryLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectReverbPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectReverbSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UReverbEffect*           InReverbEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          WetLevel                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DryLevel                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectReverbFastPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect"));

	struct
	{
		class UReverbEffect*           InReverbEffect;
		float                          WetLevel;
		float                          DryLevel;
	} params = {};

	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;
	params.DryLevel = DryLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbFastSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectReverbFastPreset::SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectReverbFastSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
