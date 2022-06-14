#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StoreItemConfig.StoreItemConfig
// 0x0040
struct FStoreItemConfig
{
	TSoftObjectPtr<class UTexture2D>                   StoreImage_7_3D64FD4C4FE07B4F01B68EB7DE84F184;            // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       SellerLabel_13_AA1BDE454673A4403BD02EB69A2BB838;          // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
