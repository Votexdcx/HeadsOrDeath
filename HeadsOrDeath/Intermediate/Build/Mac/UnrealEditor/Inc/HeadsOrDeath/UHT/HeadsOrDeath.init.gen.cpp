// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadsOrDeath_init() {}
	HEADSORDEATH_API UFunction* Z_Construct_UDelegateFunction_HeadsOrDeath_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HeadsOrDeath;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HeadsOrDeath()
	{
		if (!Z_Registration_Info_UPackage__Script_HeadsOrDeath.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HeadsOrDeath_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HeadsOrDeath",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x08FCCE57,
				0x836FE41F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HeadsOrDeath.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HeadsOrDeath.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HeadsOrDeath(Z_Construct_UPackage__Script_HeadsOrDeath, TEXT("/Script/HeadsOrDeath"), Z_Registration_Info_UPackage__Script_HeadsOrDeath, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x08FCCE57, 0x836FE41F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
