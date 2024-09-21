// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadsOrDeath/HeadsOrDeathGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadsOrDeathGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HEADSORDEATH_API UClass* Z_Construct_UClass_AHeadsOrDeathGameMode();
HEADSORDEATH_API UClass* Z_Construct_UClass_AHeadsOrDeathGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HeadsOrDeath();
// End Cross Module References

// Begin Class AHeadsOrDeathGameMode
void AHeadsOrDeathGameMode::StaticRegisterNativesAHeadsOrDeathGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeadsOrDeathGameMode);
UClass* Z_Construct_UClass_AHeadsOrDeathGameMode_NoRegister()
{
	return AHeadsOrDeathGameMode::StaticClass();
}
struct Z_Construct_UClass_AHeadsOrDeathGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HeadsOrDeathGameMode.h" },
		{ "ModuleRelativePath", "HeadsOrDeathGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeadsOrDeathGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHeadsOrDeathGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HeadsOrDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeadsOrDeathGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeadsOrDeathGameMode_Statics::ClassParams = {
	&AHeadsOrDeathGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeadsOrDeathGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeadsOrDeathGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeadsOrDeathGameMode()
{
	if (!Z_Registration_Info_UClass_AHeadsOrDeathGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeadsOrDeathGameMode.OuterSingleton, Z_Construct_UClass_AHeadsOrDeathGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeadsOrDeathGameMode.OuterSingleton;
}
template<> HEADSORDEATH_API UClass* StaticClass<AHeadsOrDeathGameMode>()
{
	return AHeadsOrDeathGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeadsOrDeathGameMode);
AHeadsOrDeathGameMode::~AHeadsOrDeathGameMode() {}
// End Class AHeadsOrDeathGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_HeadsOrDeathGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeadsOrDeathGameMode, AHeadsOrDeathGameMode::StaticClass, TEXT("AHeadsOrDeathGameMode"), &Z_Registration_Info_UClass_AHeadsOrDeathGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeadsOrDeathGameMode), 992706169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_HeadsOrDeathGameMode_h_3517292103(TEXT("/Script/HeadsOrDeath"),
	Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_HeadsOrDeathGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_HeadsOrDeathGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
