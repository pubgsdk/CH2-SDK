#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GRP_StorageGroup_18_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GRP_StorageGroup_18.GRP_StorageGroup_17_C
// 0x0013 (0x0298 - 0x0285)
class AGRP_StorageGroup_17_C : public ABP_PropGRP_01_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0285(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        SM_VC_Storage_Barrel_Open;                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_VC_Storage_Crate;                                      // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GRP_StorageGroup_18.GRP_StorageGroup_17_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
