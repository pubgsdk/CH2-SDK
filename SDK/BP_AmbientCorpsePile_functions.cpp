// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AmbientCorpsePile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.RemoveCorpse
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_AmbientCorpsePile_C::RemoveCorpse(bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.RemoveCorpse"));

	struct
	{
		bool                           Success;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.InExclusionVolume
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Loc                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_AmbientCorpsePile_C::InExclusionVolume(const struct FVector& Loc, bool* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.InExclusionVolume"));

	struct
	{
		struct FVector                 Loc;
		bool                           _;
	} params = {};

	params.Loc = Loc;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.SetMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInstancedStaticMeshComponent* Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpsePile_C::SetMesh(class UInstancedStaticMeshComponent* Target, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.SetMesh"));

	struct
	{
		class UInstancedStaticMeshComponent* Target;
		class UObject*                 Object;
	} params = {};

	params.Target = Target;
	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.SetActiveInstance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanProceed                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_AmbientCorpsePile_C::SetActiveInstance(bool* CanProceed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.SetActiveInstance"));

	struct
	{
		bool                           CanProceed;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanProceed != nullptr)
		*CanProceed = params.CanProceed;
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.GetInstanceCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            _                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpsePile_C::GetInstanceCount(int* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.GetInstanceCount"));

	struct
	{
		int                            _;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_ != nullptr)
		*_ = params._;
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.GetLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransform              Transform_                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_AmbientCorpsePile_C::GetLocation(const struct FTransform& Transform, bool* Success, struct FTransform* Transform_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.GetLocation"));

	struct
	{
		struct FTransform              Transform;
		bool                           Success;
		struct FTransform              Transform_;
	} params = {};

	params.Transform = Transform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
	if (Transform_ != nullptr)
		*Transform_ = params.Transform_;
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.AddCorpse
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Num                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_AmbientCorpsePile_C::AddCorpse(int Num, const struct FTransform& Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.AddCorpse"));

	struct
	{
		int                            Num;
		struct FTransform              Transform;
	} params = {};

	params.Num = Num;
	params.Transform = Transform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AmbientCorpsePile_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_C9A25395492F654F757720AC260C7E78
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpsePile_C::OnLoaded_C9A25395492F654F757720AC260C7E78(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_C9A25395492F654F757720AC260C7E78"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_A7CCA1E04232F5E1AF3277835265ACD2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpsePile_C::OnLoaded_A7CCA1E04232F5E1AF3277835265ACD2(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_A7CCA1E04232F5E1AF3277835265ACD2"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_677C30744A1B0739C408E6849B186C38
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpsePile_C::OnLoaded_677C30744A1B0739C408E6849B186C38(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_677C30744A1B0739C408E6849B186C38"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_44F85EE74844C62146BF02929A91A96C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpsePile_C::OnLoaded_44F85EE74844C62146BF02929A91A96C(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_44F85EE74844C62146BF02929A91A96C"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_D68B86DC4D10AC575678D880E961FF4C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpsePile_C::OnLoaded_D68B86DC4D10AC575678D880E961FF4C(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_D68B86DC4D10AC575678D880E961FF4C"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_2CF831AE40FF53CF980AFDA790EB21E3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpsePile_C::OnLoaded_2CF831AE40FF53CF980AFDA790EB21E3(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.OnLoaded_2CF831AE40FF53CF980AFDA790EB21E3"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_AmbientCorpsePile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.ActivateArea
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AmbientCorpsePile_C::ActivateArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.ActivateArea"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.DeactivateArea
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_AmbientCorpsePile_C::DeactivateArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.DeactivateArea"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.ExecuteUbergraph_BP_AmbientCorpsePile
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpsePile_C::ExecuteUbergraph_BP_AmbientCorpsePile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.ExecuteUbergraph_BP_AmbientCorpsePile"));

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


// Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.CallRemoveCorpse__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_AmbientCorpsePile_C* _                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AmbientCorpsePile_C::CallRemoveCorpse__DelegateSignature(class ABP_AmbientCorpsePile_C* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmbientCorpsePile.BP_AmbientCorpsePile_C.CallRemoveCorpse__DelegateSignature"));

	struct
	{
		class ABP_AmbientCorpsePile_C* _;
	} params = {};

	params._ = _;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
