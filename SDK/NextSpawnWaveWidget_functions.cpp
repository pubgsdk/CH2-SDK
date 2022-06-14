// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NextSpawnWaveWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNextSpawnWaveWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.NextSpawnWaveReplicated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpawnWave*              SpawnWave                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNextSpawnWaveWidget_C::NextSpawnWaveReplicated_Event_1(class ASpawnWave* SpawnWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.NextSpawnWaveReplicated_Event_1"));

	struct
	{
		class ASpawnWave*              SpawnWave;
	} params = {};

	params.SpawnWave = SpawnWave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.ExecuteUbergraph_NextSpawnWaveWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNextSpawnWaveWidget_C::ExecuteUbergraph_NextSpawnWaveWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.ExecuteUbergraph_NextSpawnWaveWidget"));

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
