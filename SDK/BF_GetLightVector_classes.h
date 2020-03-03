#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BF_GetLightVector.BF_GetLightVector_C
// 0x0000 (0x0028 - 0x0028)
class UBF_GetLightVector_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BF_GetLightVector.BF_GetLightVector_C");
		return ptr;
	}


	void STATIC_GetLightVector(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
