// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/PointSetFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryScriptDebug;
enum class EGeometryScriptCoordinateSpace : uint8;
struct FGeometryScriptIndexList;
struct FGeometryScriptPointClusteringOptions;
struct FGeometryScriptPointFlatteningOptions;
struct FGeometryScriptPointPriorityOptions;
#ifdef GEOMETRYSCRIPTINGCORE_PointSetFunctions_generated_h
#error "PointSetFunctions.generated.h already included, missing '#pragma once' in PointSetFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_PointSetFunctions_generated_h

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPointClusteringOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPointClusteringOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPointPriorityOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPointPriorityOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPointFlatteningOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPointFlatteningOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPointsFromIndexList); \
	DECLARE_FUNCTION(execMakeBoundingBoxFromPoints); \
	DECLARE_FUNCTION(execUnflattenPoints); \
	DECLARE_FUNCTION(execFlattenPoints); \
	DECLARE_FUNCTION(execOffsetTransforms); \
	DECLARE_FUNCTION(execTransformsToPoints); \
	DECLARE_FUNCTION(execDownsamplePoints); \
	DECLARE_FUNCTION(execKMeansClusterToArrays); \
	DECLARE_FUNCTION(execKMeansClusterToIDs);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_PointSetSamplingFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_PointSetSamplingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_PointSetSamplingFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_PointSetSamplingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_PointSetSamplingFunctions(UGeometryScriptLibrary_PointSetSamplingFunctions&&); \
	UGeometryScriptLibrary_PointSetSamplingFunctions(const UGeometryScriptLibrary_PointSetSamplingFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_PointSetSamplingFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_PointSetSamplingFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_PointSetSamplingFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_PointSetSamplingFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_79_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_PointSetSamplingFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PointSetFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTINITKMEANSMETHOD(op) \
	op(EGeometryScriptInitKMeansMethod::Random) \
	op(EGeometryScriptInitKMeansMethod::UniformSpacing) 

enum class EGeometryScriptInitKMeansMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptInitKMeansMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptInitKMeansMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
