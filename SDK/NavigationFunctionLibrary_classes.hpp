#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NavigationFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NavigationFunctionLibrary.NavigationFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UNavigationFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass NavigationFunctionLibrary.NavigationFunctionLibrary_C"));
		return ptr;
	}


	static void CreateQuestsMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void ClearCustomizationNotifications(class UObject* __WorldContext);
	static void UpdateNavigationNotifications(class UNavigationWidget_C* NavigationWidget, class UObject* __WorldContext);
	static void GetCustNotificationStates(const struct FCustomizationEntry& CustEntry, class UObject* __WorldContext, bool* bOwned, bool* bUnviewed, bool* bPurchasable);
	static void CreatePlayMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void CreateProfileMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void GetCustLoadout(TEnumAsByte<EAudioClassType> Class, class UObject* __WorldContext, TArray<EWeaponTag>* Ranged, TArray<EWeaponTag>* TwoHander, TArray<EWeaponTag>* OneHander, TArray<EWeaponTag>* Shield, TArray<EWeaponTag>* Thrown);
	static void GetWeaponNotification(EFaction Faction, class APlayerController* PlayerController, EWeaponTag WeaponTag, TEnumAsByte<EAudioClassType> ClassType, class UObject* __WorldContext, int* Count);
	static void GetCategoryNotification(TEnumAsByte<EAudioClassType> CharacaterType, EFaction Faction, class APlayerController* PlayerController, const struct FName& Category, class UObject* __WorldContext, int* Count);
	static void GetClassNotifications(TEnumAsByte<EAudioClassType> CharacaterType, EFaction Faction, class APlayerController* PlayerController, class UObject* __WorldContext, int* Count);
	static void GetFactionNotifications(EFaction Faction, class APlayerController* PlayerController, class UObject* __WorldContext, int* Count);
	static void GetAllCustNotifications(class APlayerController* PlayerController, class UObject* __WorldContext, int* Count);
	static void CreateNewsSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void CreateTutorialMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void CreateLoreMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void CreateStoreMenuSubMenus(class APlayerController* Controller, bool bShouldUseCamera, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void CreateFriendsMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void CreateServerBrowserSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void CreateCreateGameSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void CreateCustomizationOptions(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void CreateOptionsMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
	static void CreateQuestsMenuTree(class APlayerController* PlayerController, class UObject* __WorldContext, class UNavigationMenuData_C** Item);
	static void CreateStoreMenuTree(class APlayerController* PlayerController, class UObject* __WorldContext, class UNavigationMenuData_C** NewParam);
	static void CreateNewsMenuTree(class APlayerController* PlayerController, class UObject* __WorldContext, class UNavigationMenuData_C** Item);
	static void CreateInGameMenuTree(class APlayerController* OwningPlayer, class UObject* __WorldContext, class UNavigationMenuData_C** HeadMenu);
	static void CreateFrontendMenuTree(class APlayerController* OwningPlayer, class UObject* __WorldContext, class UNavigationMenuData_C** HeadMenu);
	static void PrintStackData(class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack);
	static void GetSubMenuByIndex(int SubMenuIndex, class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack, class UNavigationMenuData_C** Submenu);
	static void GetScreenIDForSubMenu(int SubMenuIndex, class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack, TSoftClassPtr<class UClass>* ScreenID);
	static void GetScreenIDForCurrentMenu(class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack, TSoftClassPtr<class UClass>* ScreenID);
	static void PopScreen(class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack);
	static void PushScreen(class UTBLScreenWidget* Screen, class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack, bool* Success);
	static void CreateMenu(const struct FName& ButtonID, const struct FText& Name, TSoftClassPtr<class UClass> Screen, const struct FString& CameraName, const struct FName& FrontendEvent, TEnumAsByte<ENavigationMenuStyle> Style, class APlayerController* Owner, bool Disable_if_WIP_Features_are_Disallowed, bool bHideRaggedEdge, bool UpdateNavWithSubMenu, bool bBlurScreen, bool bHideBottomBar, bool highlightFirstItem, const struct FText& MenuName, bool bDisableOpenFriends, bool bDisableOpenStore, bool bShowNavGamepadCallouts, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* SubMenus, class UNavigationMenuData_C** Menu);
	static void PopMenu(class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack);
	static void PushMenu(class UNavigationMenuData_C* MenuToPush, int CurrentIndex, class UObject* __WorldContext, struct FNavigationMenuStack* MenuStack, bool* Success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
