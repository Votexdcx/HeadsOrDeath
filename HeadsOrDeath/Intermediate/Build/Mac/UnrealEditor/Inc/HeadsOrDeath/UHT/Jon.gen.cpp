// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadsOrDeath/Public/Characters/Jon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJon() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
HEADSORDEATH_API UClass* Z_Construct_UClass_AJon();
HEADSORDEATH_API UClass* Z_Construct_UClass_AJon_NoRegister();
UPackage* Z_Construct_UPackage__Script_HeadsOrDeath();
// End Cross Module References

// Begin Class AJon
void AJon::StaticRegisterNativesAJon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJon);
UClass* Z_Construct_UClass_AJon_NoRegister()
{
	return AJon::StaticClass();
}
struct Z_Construct_UClass_AJon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Jon.h" },
		{ "ModuleRelativePath", "Public/Characters/Jon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AJon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_HeadsOrDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJon_Statics::ClassParams = {
	&AJon::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJon_Statics::Class_MetaDataParams), Z_Construct_UClass_AJon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJon()
{
	if (!Z_Registration_Info_UClass_AJon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJon.OuterSingleton, Z_Construct_UClass_AJon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJon.OuterSingleton;
}
template<> HEADSORDEATH_API UClass* StaticClass<AJon>()
{
	return AJon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJon);
AJon::~AJon() {}
// End Class AJon

// Begin Registration
struct Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_Public_Characters_Jon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJon, AJon::StaticClass, TEXT("AJon"), &Z_Registration_Info_UClass_AJon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJon), 4091801445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_Public_Characters_Jon_h_3974407705(TEXT("/Script/HeadsOrDeath"),
	Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_Public_Characters_Jon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_Public_Characters_Jon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
