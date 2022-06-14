#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AudioMixer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioMixer.SynthComponent
// 0x04E0 (0x0750 - 0x0270)
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      bAutoDestroy : 1;                                         // 0x0270(0x0001) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                              // 0x0270(0x0001) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bAllowSpatialization : 1;                                 // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideAttenuation : 1;                                 // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	unsigned char                                      bOutputToBusOnly : 1;                                     // 0x0274(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0275(0x0003) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x0280(0x03A0) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x0620(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>                     ConcurrencySet;                                           // 0x0628(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	class USoundClass*                                 SoundClass;                                               // 0x0678(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0680(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USoundSubmixBase*                            SoundSubmix;                                              // 0x0688(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                         // 0x0690(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>             BusSends;                                                 // 0x06A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSoundModulation                            Modulation;                                               // 0x06B0(0x0010) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                        // 0x06C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bIsUISound : 1;                                           // 0x06D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bIsPreviewSound : 1;                                      // 0x06D0(0x0001) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06D1(0x0003) MISSED OFFSET
	int                                                EnvelopeFollowerAttackTime;                               // 0x06D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                EnvelopeFollowerReleaseTime;                              // 0x06D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnAudioEnvelopeValue;                                     // 0x06E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x20];                                      // 0x06F0(0x0020) MISSED OFFSET
	class USynthSound*                                 Synth;                                                    // 0x0710(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UAudioComponent*                             AudioComponent;                                           // 0x0718(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x30];                                      // 0x0720(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioMixer.SynthComponent"));
		return ptr;
	}


	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	bool IsPlaying();
};


// Class AudioMixer.AudioGenerator
// 0x0080 (0x00A8 - 0x0028)
class UAudioGenerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioMixer.AudioGenerator"));
		return ptr;
	}

};


// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioMixer.AudioMixerBlueprintLibrary"));
		return ptr;
	}


	static float TrimAudioCache(float InMegabytesToFree);
	static class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	static void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	static void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	static void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize);
	static void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	static void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex);
	static void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	static void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void PrimeSoundForPlayback(class USoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion);
	static void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	static void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Phases);
	static int GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	static void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Magnitudes);
	static void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
	static void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	static int AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	static void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x00C8 (0x0108 - 0x0040)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0040(0x0078) MISSED OFFSET
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // 0x00B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioMixer.SubmixEffectDynamicsProcessorPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings);
	void SetExternalSubmix(class USoundSubmix* Submix);
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x0088 - 0x0040)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioMixer.SubmixEffectSubmixEQPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (0x00D0 - 0x0040)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0040(0x005C) MISSED OFFSET
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x009C(0x0034) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioMixer.SubmixEffectReverbPreset"));
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};


// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x0098 (0x00D8 - 0x0040)
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET
	struct FSubmixEffectReverbFastSettings             Settings;                                                 // 0x00A0(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioMixer.SubmixEffectReverbFastPreset"));
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings);
};


// Class AudioMixer.SynthSound
// 0x0020 (0x0380 - 0x0360)
class USynthSound : public USoundWaveProcedural
{
public:
	class USynthComponent*                             OwningSynthComponent;                                     // 0x0360(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0368(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioMixer.SynthSound"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
