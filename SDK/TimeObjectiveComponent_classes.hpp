#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TimeObjectiveComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TimeObjectiveComponent.TimeObjectiveComponent_C
// 0x0078 (0x0180 - 0x0108)
class UTimeObjectiveComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Duration_Seconds;                                         // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Bonus_Duration_Seconds;                                   // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Time_Sharing_Group_Name;                                  // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimespan                                   Time_To_Share;                                            // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Percent_Time_To_Share;                                    // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    On_Duration_Exceeded;                                     // 0x0130(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FTimerHandle                                Timer_Handle;                                             // 0x0140(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Max_Time_To_Share;                                        // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    MinutesRemaining;                                         // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FTimerHandle                                MinutesLeftTimerHandle;                                   // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsTimeObjectiveActive;                                    // 0x0168(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	int                                                LastMinuteTriggered;                                      // 0x016C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Server_Start_Time_Seconds;                                // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               TimeObjectiveInitialized;                                 // 0x0174(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	struct FTimerHandle                                PrintStringTimerHandle;                                   // 0x0178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TimeObjectiveComponent.TimeObjectiveComponent_C"));
		return ptr;
	}


	void GetTimeRemaining(float* TimeSeconds);
	void Create_debug_menu_widget(class UUserWidget** Debug_menu_widget);
	struct FString GetDebugStringInfo();
	void Get_Elapsed_Time_Minutes(float* Elapsed);
	void GetBonusTime(float* BonusTimeSeconds);
	void Get_Elapsed_Time_Seconds(float* Elapsed);
	void Get_Time_Left(float* Time_Left_Seconds);
	void Take_Shared_Time(const struct FName& TimeSharingGroup, struct FTimespan* SharedTime);
	void Get_Total_Duration_Seconds(float* Duration);
	void Add_Bonus_Time(float Delta);
	void Is_Duration_Exceeded(bool* Exceeded);
	void ReceiveBeginPlay();
	void Start();
	void Stop();
	void PRIVATE_Handle_Duration_Exceeded();
	void PRIVATE_Handle_Bonus_Duration_Changed();
	void PRIVATE__Re_Start_Timer();
	void PRIVATE_Add_Shared_Bonus_Time();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TimeObjectiveComponent(int EntryPoint);
	void MinutesRemaining__DelegateSignature(int MinutesRemaining);
	void On_Duration_Exceeded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
