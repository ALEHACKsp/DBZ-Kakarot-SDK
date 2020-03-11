#pragma once

// Name: DBZ, Version: 1.6.4

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TitleDemoMovie.TitleDemoMovie_C
// 0x0008 (0x0378 - 0x0370)
class ATitleDemoMovie_C : public APreRenderDemoActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TitleDemoMovie.TitleDemoMovie_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
