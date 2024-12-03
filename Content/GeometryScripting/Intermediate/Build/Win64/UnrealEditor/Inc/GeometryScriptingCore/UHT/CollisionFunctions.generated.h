// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/CollisionFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UDynamicMeshComponent;
class UGeometryScriptDebug;
class UPrimitiveComponent;
class UStaticMesh;
struct FComputeNegativeSpaceOptions;
struct FGeometryScriptCollisionFromMeshOptions;
struct FGeometryScriptConvexHullApproximationOptions;
struct FGeometryScriptConvexHullSimplificationOptions;
struct FGeometryScriptDynamicMeshBVH;
struct FGeometryScriptMergeSimpleCollisionOptions;
struct FGeometryScriptSetSimpleCollisionOptions;
struct FGeometryScriptSetStaticMeshCollisionOptions;
struct FGeometryScriptSimpleCollision;
struct FGeometryScriptSphereCovering;
struct FGeometryScriptTransformCollisionOptions;
#ifdef GEOMETRYSCRIPTINGCORE_CollisionFunctions_generated_h
#error "CollisionFunctions.generated.h already included, missing '#pragma once' in CollisionFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_CollisionFunctions_generated_h

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptCollisionFromMeshOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSetSimpleCollisionOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSetStaticMeshCollisionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSetStaticMeshCollisionOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComputeNegativeSpaceOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FComputeNegativeSpaceOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMergeSimpleCollisionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMergeSimpleCollisionOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_230_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptConvexHullSimplificationOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptConvexHullSimplificationOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_256_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptConvexHullApproximationOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptConvexHullApproximationOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_279_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptTransformCollisionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptTransformCollisionOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_300_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_SphereArrayToGeometryScriptSphereCovering); \
	DECLARE_FUNCTION(execConv_GeometryScriptSphereCoveringToSphereArray); \
	DECLARE_FUNCTION(execComputeNegativeSpace); \
	DECLARE_FUNCTION(execMergeSimpleCollisionShapes); \
	DECLARE_FUNCTION(execApproximateConvexHullsWithSimplerCollisionShapes); \
	DECLARE_FUNCTION(execSimplifyConvexHulls); \
	DECLARE_FUNCTION(execCombineSimpleCollision); \
	DECLARE_FUNCTION(execTransformSimpleCollisionShapes); \
	DECLARE_FUNCTION(execGetSimpleCollisionShapeCount); \
	DECLARE_FUNCTION(execSetSimpleCollisionOfStaticMesh); \
	DECLARE_FUNCTION(execGetSimpleCollisionFromStaticMesh); \
	DECLARE_FUNCTION(execSetSimpleCollisionOfDynamicMeshComponent); \
	DECLARE_FUNCTION(execGetSimpleCollisionFromComponent); \
	DECLARE_FUNCTION(execResetDynamicMeshCollision); \
	DECLARE_FUNCTION(execSetDynamicMeshCollisionFromMesh); \
	DECLARE_FUNCTION(execStaticMeshHasCustomizedCollision); \
	DECLARE_FUNCTION(execSetStaticMeshCollisionFromComponent); \
	DECLARE_FUNCTION(execSetStaticMeshCollisionFromMesh);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_300_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_CollisionFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_CollisionFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_CollisionFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_300_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_CollisionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_CollisionFunctions(UGeometryScriptLibrary_CollisionFunctions&&); \
	UGeometryScriptLibrary_CollisionFunctions(const UGeometryScriptLibrary_CollisionFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_CollisionFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_CollisionFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_CollisionFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_CollisionFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_297_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_300_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_300_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_300_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_300_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_CollisionFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTCOLLISIONGENERATIONMETHOD(op) \
	op(EGeometryScriptCollisionGenerationMethod::AlignedBoxes) \
	op(EGeometryScriptCollisionGenerationMethod::OrientedBoxes) \
	op(EGeometryScriptCollisionGenerationMethod::MinimalSpheres) \
	op(EGeometryScriptCollisionGenerationMethod::Capsules) \
	op(EGeometryScriptCollisionGenerationMethod::ConvexHulls) \
	op(EGeometryScriptCollisionGenerationMethod::SweptHulls) \
	op(EGeometryScriptCollisionGenerationMethod::MinVolumeShapes) \
	op(EGeometryScriptCollisionGenerationMethod::LevelSets) 

enum class EGeometryScriptCollisionGenerationMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptCollisionGenerationMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptCollisionGenerationMethod>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTSWEPTHULLAXIS(op) \
	op(EGeometryScriptSweptHullAxis::X) \
	op(EGeometryScriptSweptHullAxis::Y) \
	op(EGeometryScriptSweptHullAxis::Z) \
	op(EGeometryScriptSweptHullAxis::SmallestBoxDimension) \
	op(EGeometryScriptSweptHullAxis::SmallestVolume) 

enum class EGeometryScriptSweptHullAxis : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSweptHullAxis> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSweptHullAxis>();

#define FOREACH_ENUM_ENEGATIVESPACESAMPLEMETHOD(op) \
	op(ENegativeSpaceSampleMethod::Uniform) \
	op(ENegativeSpaceSampleMethod::VoxelSearch) 

enum class ENegativeSpaceSampleMethod : uint8;
template<> struct TIsUEnumClass<ENegativeSpaceSampleMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<ENegativeSpaceSampleMethod>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTCONVEXHULLSIMPLIFYMETHOD(op) \
	op(EGeometryScriptConvexHullSimplifyMethod::MeshQSlim) \
	op(EGeometryScriptConvexHullSimplifyMethod::AngleTolerance) 

enum class EGeometryScriptConvexHullSimplifyMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptConvexHullSimplifyMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptConvexHullSimplifyMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
