// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MRMesh_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MRMesh.MeshReconstructorBase.StopReconstruction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMeshReconstructorBase::StopReconstruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.StopReconstruction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MRMesh.MeshReconstructorBase.StartReconstruction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMeshReconstructorBase::StartReconstruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.StartReconstruction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MRMesh.MeshReconstructorBase.PauseReconstruction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMeshReconstructorBase::PauseReconstruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.PauseReconstruction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.IsReconstructionStarted"));

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


// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.IsReconstructionPaused"));

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


// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
// (FUNC_Native, FUNC_Public)

void UMeshReconstructorBase::DisconnectMRMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.DisconnectMRMesh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UMRMeshComponent*        Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.ConnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        Mesh;
	} params = {};

	params.Mesh = Mesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector>         Vertices                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector>         Normals                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  Confidence                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature"));

	struct
	{
		int                            Index;
		TArray<struct FVector>         Vertices;
		TArray<int>                    Triangles;
		TArray<struct FVector>         Normals;
		TArray<float>                  Confidence;
	} params = {};

	params.Index = Index;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMockDataMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        InMRMeshPtr;
	} params = {};

	params.InMRMeshPtr = InMRMeshPtr;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMRMeshComponent*        InMRMeshPtr                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMockDataMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh"));

	struct
	{
		class UMRMeshComponent*        InMRMeshPtr;
	} params = {};

	params.InMRMeshPtr = InMRMeshPtr;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MRMesh.MRMeshComponent.IsConnected
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMRMeshComponent::IsConnected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MRMeshComponent.IsConnected"));

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


// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMRMeshComponent::ForceNavMeshUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MRMesh.MRMeshComponent.Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMRMeshComponent::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MRMeshComponent.Clear"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
