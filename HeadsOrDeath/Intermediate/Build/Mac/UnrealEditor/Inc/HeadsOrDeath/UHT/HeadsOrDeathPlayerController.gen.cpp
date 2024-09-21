// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadsOrDeath/HeadsOrDeathPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadsOrDeathPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HEADSORDEATH_API UClass* Z_Construct_UClass_AHeadsOrDeathPlayerController();
HEADSORDEATH_API UClass* Z_Construct_UClass_AHeadsOrDeathPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_HeadsOrDeath();
// End Cross Module References

// Begin Class AHeadsOrDeathPlayerController
void AHeadsOrDeathPlayerController::StaticRegisterNativesAHeadsOrDeathPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeadsOrDeathPlayerController);
UClass* Z_Construct_UClass_AHeadsOrDeathPlayerController_NoRegister()
{
	return AHeadsOrDeathPlayerController::StaticClass();
}
struct Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HeadsOrDeathPlayerController.h" },
		{ "ModuleRelativePath", "HeadsOrDeathPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "HeadsOrDeathPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeadsOrDeathPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeadsOrDeathPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_HeadsOrDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::ClassParams = {
	&AHeadsOrDeathPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeadsOrDeathPlayerController()
{
	if (!Z_Registration_Info_UClass_AHeadsOrDeathPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeadsOrDeathPlayerController.OuterSingleton, Z_Construct_UClass_AHeadsOrDeathPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeadsOrDeathPlayerController.OuterSingleton;
}
template<> HEADSORDEATH_API UClass* StaticClass<AHeadsOrDeathPlayerController>()
{
	return AHeadsOrDeathPlayerController::StaticClass();
}
AHeadsOrDeathPlayerController::AHeadsOrDeathPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeadsOrDeathPlayerController);
AHeadsOrDeathPlayerController::~AHeadsOrDeathPlayerController() {}
// End Class AHeadsOrDeathPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_HeadsOrDeathPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeadsOrDeathPlayerController, AHeadsOrDeathPlayerController::StaticClass, TEXT("AHeadsOrDeathPlayerController"), &Z_Registration_Info_UClass_AHeadsOrDeathPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeadsOrDeathPlayerController), 4268832411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_HeadsOrDeathPlayerController_h_1970034380(TEXT("/Script/HeadsOrDeath"),
	Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_HeadsOrDeathPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_HeadsOrDeathPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
