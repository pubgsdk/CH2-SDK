#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NativizedAssets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NativizedAssets.__Delegates__ABaseCharacter_C__pf4110416193
// 0x0000 (0x0028 - 0x0028)
class U__Delegates__ABaseCharacter_C__pf4110416193 : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NativizedAssets.__Delegates__ABaseCharacter_C__pf4110416193"));
		return ptr;
	}

};


// Class NativizedAssets.__Delegates__ABaseInventoryItem_C__pf1227878553
// 0x0000 (0x0028 - 0x0028)
class U__Delegates__ABaseInventoryItem_C__pf1227878553 : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NativizedAssets.__Delegates__ABaseInventoryItem_C__pf1227878553"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
