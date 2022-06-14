#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_LocalFx_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BPI_LocalFx.BPI_LocalFx_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_LocalFx_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("DynamicClass BPI_LocalFx.BPI_LocalFx_C"));
		return ptr;
	}


	void RemoveLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf);
	void CanAddLocalFx(bool* bpp__x__pfT);
	void AddLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
