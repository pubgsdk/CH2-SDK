#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPF_printing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_printing.BPF_printing_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_printing_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPF_printing.BPF_printing_C"));
		return ptr;
	}


	static void Draw_Debug_Success(class AActor* Actor, class UObject* __WorldContext);
	static void Draw_Debug_Warning(class AActor* Actor, class UObject* __WorldContext);
	static void Draw_Debug_Error(class AActor* Actor, class UObject* __WorldContext);
	static void Print_Line_Break(class UObject* Object, bool Enable, bool Verbose, class UObject* __WorldContext);
	static void Print_Message(class UObject* Object, bool Enable, bool Verbose, bool Disable_Block, class UObject* __WorldContext, TArray<struct FString>* Headers, TArray<struct FString>* Bodies, TArray<int>* BodiesPerHeader);
	static void Print_Footer_Block(class UObject* Object, bool Enable, bool Verbose, class UObject* __WorldContext);
	static void Print_Header_Block(class UObject* Object, bool Enable, bool Verbose, class UObject* __WorldContext);
	static void Print_Header_Text(class UObject* Object, const struct FString& Text, bool Enable, bool Verbose, class UObject* __WorldContext);
	static void Print_Body(class UObject* Object, bool Enable, bool Verbose, class UObject* __WorldContext, TArray<struct FString>* Multi_line_Text);
	static void Print_Success(class UObject* Object, const struct FString& Text, bool Enable, bool Verbose, class UObject* __WorldContext);
	static void Print_Warning(class UObject* Object, const struct FString& Text, bool Enable, bool Verbose, class UObject* __WorldContext);
	static void Print_Error(class UObject* Object, const struct FString& Text, bool Enable, bool Verbose, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
