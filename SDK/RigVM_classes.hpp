#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RigVM_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RigVM.RigVM
// 0x0218 (0x0240 - 0x0028)
class URigVM : public UObject
{
public:
	struct FRigVMMemoryContainer                       WorkMemory;                                               // 0x0028(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FRigVMMemoryContainer                       LiteralMemory;                                            // 0x00C8(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FRigVMByteCode                              ByteCode;                                                 // 0x0168(0x0010) (CPF_NativeAccessSpecifierPublic)
	struct FRigVMInstructionArray                      Instructions;                                             // 0x0178(0x0010) (CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FName>                               FunctionNames;                                            // 0x0188(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0198(0x0010) MISSED OFFSET
	TArray<struct FRigVMParameter>                     Parameters;                                               // 0x01A8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, int>                            ParametersNameMap;                                        // 0x01B8(0x0050) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0208(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RigVM.RigVM"));
		return ptr;
	}


	void SetParameterValueVector2D(const struct FName& InParameterName, const struct FVector2D& InValue, int InArrayIndex);
	void SetParameterValueVector(const struct FName& InParameterName, const struct FVector& InValue, int InArrayIndex);
	void SetParameterValueTransform(const struct FName& InParameterName, const struct FTransform& InValue, int InArrayIndex);
	void SetParameterValueString(const struct FName& InParameterName, const struct FString& InValue, int InArrayIndex);
	void SetParameterValueQuat(const struct FName& InParameterName, const struct FQuat& InValue, int InArrayIndex);
	void SetParameterValueName(const struct FName& InParameterName, const struct FName& InValue, int InArrayIndex);
	void SetParameterValueInt(const struct FName& InParameterName, int InValue, int InArrayIndex);
	void SetParameterValueFloat(const struct FName& InParameterName, float InValue, int InArrayIndex);
	void SetParameterValueBool(const struct FName& InParameterName, bool InValue, int InArrayIndex);
	struct FString GetRigVMFunctionName(int InFunctionIndex);
	struct FVector2D GetParameterValueVector2D(const struct FName& InParameterName, int InArrayIndex);
	struct FVector GetParameterValueVector(const struct FName& InParameterName, int InArrayIndex);
	struct FTransform GetParameterValueTransform(const struct FName& InParameterName, int InArrayIndex);
	struct FString GetParameterValueString(const struct FName& InParameterName, int InArrayIndex);
	struct FQuat GetParameterValueQuat(const struct FName& InParameterName, int InArrayIndex);
	struct FName GetParameterValueName(const struct FName& InParameterName, int InArrayIndex);
	int GetParameterValueInt(const struct FName& InParameterName, int InArrayIndex);
	float GetParameterValueFloat(const struct FName& InParameterName, int InArrayIndex);
	bool GetParameterValueBool(const struct FName& InParameterName, int InArrayIndex);
	int GetParameterArraySize(const struct FName& InParameterName);
	bool Execute();
	int AddRigVMFunction(class UScriptStruct* InRigVMStruct, const struct FName& InMethodName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
