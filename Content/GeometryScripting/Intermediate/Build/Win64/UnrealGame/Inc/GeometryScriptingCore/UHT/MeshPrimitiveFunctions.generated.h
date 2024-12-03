// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshPrimitiveFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class EGeometryScriptPrimitiveOriginMode : uint8;
struct FGeometryScriptConstrainedDelaunayTriangulationOptions;
struct FGeometryScriptGeneralPolygonList;
struct FGeometryScriptPolygonsTriangulationOptions;
struct FGeometryScriptPrimitiveOptions;
struct FGeometryScriptRevolveOptions;
struct FGeometryScriptSimpleCollision;
struct FGeometryScriptSimpleCollisionTriangulationOptions;
struct FGeometryScriptSphereCovering;
struct FGeometryScriptVoronoiOptions;
#ifdef GEOMETRYSCRIPTINGCORE_MeshPrimitiveFunctions_generated_h
#error "MeshPrimitiveFunctions.generated.h already included, missing '#pragma once' in MeshPrimitiveFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshPrimitiveFunctions_generated_h

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPrimitiveOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptRevolveOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptRevolveOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptVoronoiOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptVoronoiOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptConstrainedDelaunayTriangulationOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptConstrainedDelaunayTriangulationOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPolygonsTriangulationOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPolygonsTriangulationOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAppendRoundRectangle_Compatibility_5_0); \
	DECLARE_FUNCTION(execAppendRectangle_Compatibility_5_0); \
	DECLARE_FUNCTION(execAppendSphereCovering); \
	DECLARE_FUNCTION(execAppendSimpleCollisionShapes); \
	DECLARE_FUNCTION(execAppendPolygonListTriangulation); \
	DECLARE_FUNCTION(execAppendDelaunayTriangulation2D); \
	DECLARE_FUNCTION(execAppendVoronoiDiagram2D); \
	DECLARE_FUNCTION(execAppendCurvedStairs); \
	DECLARE_FUNCTION(execAppendLinearStairs); \
	DECLARE_FUNCTION(execAppendTriangulatedPolygon3D); \
	DECLARE_FUNCTION(execAppendTriangulatedPolygon); \
	DECLARE_FUNCTION(execAppendDisc); \
	DECLARE_FUNCTION(execAppendRoundRectangleXY); \
	DECLARE_FUNCTION(execAppendRectangleXY); \
	DECLARE_FUNCTION(execAppendSweepPolygon); \
	DECLARE_FUNCTION(execAppendSimpleSweptPolygon); \
	DECLARE_FUNCTION(execAppendSimpleExtrudePolygon); \
	DECLARE_FUNCTION(execAppendSweepPolyline); \
	DECLARE_FUNCTION(execAppendRevolvePath); \
	DECLARE_FUNCTION(execAppendSpiralRevolvePolygon); \
	DECLARE_FUNCTION(execAppendRevolvePolygon); \
	DECLARE_FUNCTION(execAppendTorus); \
	DECLARE_FUNCTION(execAppendCone); \
	DECLARE_FUNCTION(execAppendCylinder); \
	DECLARE_FUNCTION(execAppendCapsule); \
	DECLARE_FUNCTION(execAppendSphereBox); \
	DECLARE_FUNCTION(execAppendSphereLatLong); \
	DECLARE_FUNCTION(execAppendBoundingBox); \
	DECLARE_FUNCTION(execAppendBox);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshPrimitiveFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshPrimitiveFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshPrimitiveFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshPrimitiveFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshPrimitiveFunctions(UGeometryScriptLibrary_MeshPrimitiveFunctions&&); \
	UGeometryScriptLibrary_MeshPrimitiveFunctions(const UGeometryScriptLibrary_MeshPrimitiveFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshPrimitiveFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshPrimitiveFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshPrimitiveFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshPrimitiveFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_151_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshPrimitiveFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPrimitiveFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTPRIMITIVEPOLYGROUPMODE(op) \
	op(EGeometryScriptPrimitivePolygroupMode::SingleGroup) \
	op(EGeometryScriptPrimitivePolygroupMode::PerFace) \
	op(EGeometryScriptPrimitivePolygroupMode::PerQuad) 

enum class EGeometryScriptPrimitivePolygroupMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPrimitivePolygroupMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPrimitivePolygroupMode>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTPRIMITIVEORIGINMODE(op) \
	op(EGeometryScriptPrimitiveOriginMode::Center) \
	op(EGeometryScriptPrimitiveOriginMode::Base) 

enum class EGeometryScriptPrimitiveOriginMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPrimitiveOriginMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPrimitiveOriginMode>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTPRIMITIVEUVMODE(op) \
	op(EGeometryScriptPrimitiveUVMode::Uniform) \
	op(EGeometryScriptPrimitiveUVMode::ScaleToFill) 

enum class EGeometryScriptPrimitiveUVMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPrimitiveUVMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPrimitiveUVMode>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTPOLYGONFILLMODE(op) \
	op(EGeometryScriptPolygonFillMode::All) \
	op(EGeometryScriptPolygonFillMode::Solid) \
	op(EGeometryScriptPolygonFillMode::PositiveWinding) \
	op(EGeometryScriptPolygonFillMode::NonZeroWinding) \
	op(EGeometryScriptPolygonFillMode::NegativeWinding) \
	op(EGeometryScriptPolygonFillMode::OddWinding) 

enum class EGeometryScriptPolygonFillMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPolygonFillMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPolygonFillMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
