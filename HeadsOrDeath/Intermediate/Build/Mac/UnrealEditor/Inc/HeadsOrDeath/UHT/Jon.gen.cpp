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
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Jon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Jon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Jon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Jon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Jon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Jon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJon_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJon, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJon_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJon, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJon_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJon, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJon_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJon_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJon_Statics::NewProp_SkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJon_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AJon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AJon_Statics::PropPointers),
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
		{ Z_Construct_UClass_AJon, AJon::StaticClass, TEXT("AJon"), &Z_Registration_Info_UClass_AJon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJon), 1379103235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_Public_Characters_Jon_h_1290158334(TEXT("/Script/HeadsOrDeath"),
	Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_Public_Characters_Jon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_joaopereira_iCloud_Drive__Archive__Desktop_GitHub_HeadsOrDeath_HeadsOrDeath_Source_HeadsOrDeath_Public_Characters_Jon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
