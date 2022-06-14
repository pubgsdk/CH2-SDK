#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CinematicMenuManagerInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CinematicMenuManagerInterface.CinematicMenuManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UCinematicMenuManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CinematicMenuManagerInterface.CinematicMenuManagerInterface_C"));
		return ptr;
	}


	void RequestSpecificHint(const struct FName& HintKey);
	void RequestRandomHint(float Chance, TEnumAsByte<EHintType> HintKey, TEnumAsByte<EHintInputType> HintInputType);
	void GetFadeDuration(float* Duration);
	void Snap_Fade_In();
	void Add_Cinematic_Mode_Change_Listener(const TScriptInterface<class UCinematicModeChangeListenerInterface_C>& Listener);
	void Release_fade_out__fade_in_(class UObject* Requester);
	void Request_fade_out(class UObject* Requester);
	void Release_cinematic_HUD_mode(class UObject* Requester, TEnumAsByte<ECinematicMenuMode> Mode);
	void Request_cinematic_HUD_mode(class UObject* Requester, TEnumAsByte<ECinematicMenuMode> Mode);
	void Release_cinematic_bars(class UObject* Requester);
	void Request_cinematic_bars(class UObject* Requester, TEnumAsByte<ECinematicBarsMode> Mode);
	void Remove_Cinematic_Widget(class UWidget* Widget);
	void Push_Cinematic_Widget(class UClass* /*UWidget*/ Widget_class, class UWidget** Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
