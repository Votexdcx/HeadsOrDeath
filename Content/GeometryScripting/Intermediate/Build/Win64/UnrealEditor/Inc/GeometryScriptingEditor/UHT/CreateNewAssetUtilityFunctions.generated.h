// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/CreateNewAssetUtilityFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVolume;
class UDynamicMesh;
class UGeometryScriptDebug;
class USkeletalMesh;
class USkeleton;
class UStaticMesh;
class UTexture2D;
class UWorld;
enum class EGeometryScriptOutcomePins : uint8;
struct FGeometryScriptCreateNewSkeletalMeshAssetOptions;
struct FGeometryScriptCreateNewStaticMeshAssetOptions;
struct FGeometryScriptCreateNewTexture2DAssetOptions;
struct FGeometryScriptCreateNewVolumeFromMeshOptions;
struct FGeometryScriptUniqueAssetNameOptions;
#ifdef GEOMETRYSCRIPTINGEDITOR_CreateNewAssetUtilityFunctions_generated_h
#error "CreateNewAssetUtilityFunctions.generated.h already included, missing '#pragma once' in CreateNewAssetUtilityFunctions.h"
#endif
#define GEOMETRYSCRIPTINGEDITOR_CreateNewAssetUtilityFunctions_generated_h

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FGeometryScriptUniqueAssetNameOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FGeometryScriptCreateNewVolumeFromMeshOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FGeometryScriptCreateNewStaticMeshAssetOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FGeometryScriptCreateNewSkeletalMeshAssetOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FGeometryScriptCreateNewTexture2DAssetOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateNewTexture2DAsset); \
	DECLARE_FUNCTION(execCreateNewSkeletalMeshAssetFromMeshLODs); \
	DECLARE_FUNCTION(execCreateNewSkeletalMeshAssetFromMesh); \
	DECLARE_FUNCTION(execCreateNewStaticMeshAssetFromMeshLODs); \
	DECLARE_FUNCTION(execCreateNewStaticMeshAssetFromMesh); \
	DECLARE_FUNCTION(execCreateNewVolumeFromMesh); \
	DECLARE_FUNCTION(execCreateUniqueNewAssetPathName);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_CreateNewAssetFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_CreateNewAssetFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingEditor"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_CreateNewAssetFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_CreateNewAssetFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_CreateNewAssetFunctions(UGeometryScriptLibrary_CreateNewAssetFunctions&&); \
	UGeometryScriptLibrary_CreateNewAssetFunctions(const UGeometryScriptLibrary_CreateNewAssetFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_CreateNewAssetFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_CreateNewAssetFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_CreateNewAssetFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_CreateNewAssetFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_106_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<class UGeometryScriptLibrary_CreateNewAssetFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
