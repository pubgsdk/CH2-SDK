#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Track_Generator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Track_Generator.Track_Generator_C
// 0x0069 (0x02C1 - 0x0258)
class ATrack_Generator_C : public AActor
{
public:
	class USplineComponent*                            Spline;                                                   // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumberOfSplinePoints;                                     // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	TArray<struct FRoad_Data>                          RoadDataArray;                                            // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	class UStaticMesh*                                 RoadMesh;                                                 // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRoad_Data                                  RoadMeshDefaults;                                         // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Collisions;                                               // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	float                                              Cull_Distance;                                            // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInterface*                          Road_Mesh_Material;                                       // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               MaterialOverride;                                         // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Road_Mesh_Material_Array;                                 // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               Disable_Collision;                                        // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Track_Generator.Track_Generator_C"));
		return ptr;
	}


	void Build_Track_Element(int LoopIndex, class UStaticMesh* TrackElementMesh);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
