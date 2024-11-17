// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshAssetFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;
enum class EGeometryScriptLODType : uint8;
enum class EGeometryScriptOutcomePins : uint8;
enum class EGeometryScriptSearchOutcomePins : uint8;
struct FGeometryScriptCopyMeshFromAssetOptions;
struct FGeometryScriptCopyMeshToAssetOptions;
struct FGeometryScriptMeshReadLOD;
struct FGeometryScriptMeshWriteLOD;
#ifdef GEOMETRYSCRIPTINGCORE_MeshAssetFunctions_generated_h
#error "MeshAssetFunctions.generated.h already included, missing '#pragma once' in MeshAssetFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshAssetFunctions_generated_h

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptCopyMeshFromAssetOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptNaniteOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptCopyMeshToAssetOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopyMeshToSkeletalMesh); \
	DECLARE_FUNCTION(execCopyMeshFromSkeletalMesh); \
	DECLARE_FUNCTION(execGetSectionMaterialListFromStaticMesh); \
	DECLARE_FUNCTION(execCopyMeshToStaticMesh); \
	DECLARE_FUNCTION(execCopyMeshFromStaticMesh); \
	DECLARE_FUNCTION(execGetNumStaticMeshLODsOfType); \
	DECLARE_FUNCTION(execCheckStaticMeshHasAvailableLOD);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_StaticMeshFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_StaticMeshFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_StaticMeshFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_StaticMeshFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_StaticMeshFunctions(UGeometryScriptLibrary_StaticMeshFunctions&&); \
	UGeometryScriptLibrary_StaticMeshFunctions(const UGeometryScriptLibrary_StaticMeshFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_StaticMeshFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_StaticMeshFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_StaticMeshFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_StaticMeshFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_112_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_StaticMeshFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
