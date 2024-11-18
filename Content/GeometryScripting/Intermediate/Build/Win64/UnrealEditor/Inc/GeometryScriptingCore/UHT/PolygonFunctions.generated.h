// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/PolygonFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
enum class EGeometryScriptAxis : uint8;
struct FGeometryScriptGeneralPolygonList;
struct FGeometryScriptOpenPathOffsetOptions;
struct FGeometryScriptPolygonOffsetOptions;
struct FGeometryScriptPolyPath;
struct FGeometryScriptSimplePolygon;
struct FGeometryScriptSplineSamplingOptions;
#ifdef GEOMETRYSCRIPTINGCORE_PolygonFunctions_generated_h
#error "PolygonFunctions.generated.h already included, missing '#pragma once' in PolygonFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_PolygonFunctions_generated_h

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPolygonOffsetOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptOpenPathOffsetOptions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_ArrayOfVector2DToGeometryScriptSimplePolygon); \
	DECLARE_FUNCTION(execConv_ArrayToGeometryScriptSimplePolygon); \
	DECLARE_FUNCTION(execConv_GeometryScriptSimplePolygonToArrayOfVector2D); \
	DECLARE_FUNCTION(execConv_GeometryScriptSimplePolygonToArray); \
	DECLARE_FUNCTION(execConvertSplineToPolygon); \
	DECLARE_FUNCTION(execGetPolygonBounds); \
	DECLARE_FUNCTION(execGetPolygonArea); \
	DECLARE_FUNCTION(execGetPolygonArcLength); \
	DECLARE_FUNCTION(execGetPolygonTangent); \
	DECLARE_FUNCTION(execAddPolygonVertex); \
	DECLARE_FUNCTION(execSetPolygonVertex); \
	DECLARE_FUNCTION(execGetPolygonVertex); \
	DECLARE_FUNCTION(execGetPolygonVertexCount);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_SimplePolygonFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_SimplePolygonFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_SimplePolygonFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_SimplePolygonFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_SimplePolygonFunctions(UGeometryScriptLibrary_SimplePolygonFunctions&&); \
	UGeometryScriptLibrary_SimplePolygonFunctions(const UGeometryScriptLibrary_SimplePolygonFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_SimplePolygonFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_SimplePolygonFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_SimplePolygonFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_SimplePolygonFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_92_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_95_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_SimplePolygonFunctions>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePolygonsFromOpenPolyPathsOffset); \
	DECLARE_FUNCTION(execCreatePolygonsFromPathOffset); \
	DECLARE_FUNCTION(execPolygonsMorphologyClose); \
	DECLARE_FUNCTION(execPolygonsMorphologyOpen); \
	DECLARE_FUNCTION(execPolygonsOffsets); \
	DECLARE_FUNCTION(execPolygonsOffset); \
	DECLARE_FUNCTION(execPolygonsExclusiveOr); \
	DECLARE_FUNCTION(execPolygonsIntersection); \
	DECLARE_FUNCTION(execPolygonsDifference); \
	DECLARE_FUNCTION(execPolygonsUnion); \
	DECLARE_FUNCTION(execAppendPolygonList); \
	DECLARE_FUNCTION(execCreatePolygonListFromSimplePolygons); \
	DECLARE_FUNCTION(execAddPolygonToList); \
	DECLARE_FUNCTION(execCreatePolygonListFromSinglePolygon); \
	DECLARE_FUNCTION(execGetPolygonListBounds); \
	DECLARE_FUNCTION(execGetPolygonListArea); \
	DECLARE_FUNCTION(execGetPolygonBounds); \
	DECLARE_FUNCTION(execGetPolygonArea); \
	DECLARE_FUNCTION(execGetPolygonVertex); \
	DECLARE_FUNCTION(execGetSimplePolygon); \
	DECLARE_FUNCTION(execGetPolygonVertices); \
	DECLARE_FUNCTION(execGetPolygonVertexCount); \
	DECLARE_FUNCTION(execGetPolygonHoleCount); \
	DECLARE_FUNCTION(execGetPolygonCount);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_PolygonListFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_PolygonListFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_PolygonListFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_PolygonListFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_PolygonListFunctions(UGeometryScriptLibrary_PolygonListFunctions&&); \
	UGeometryScriptLibrary_PolygonListFunctions(const UGeometryScriptLibrary_PolygonListFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_PolygonListFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_PolygonListFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_PolygonListFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_PolygonListFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_181_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_PolygonListFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTPOLYOFFSETJOINTYPE(op) \
	op(EGeometryScriptPolyOffsetJoinType::Square) \
	op(EGeometryScriptPolyOffsetJoinType::Round) \
	op(EGeometryScriptPolyOffsetJoinType::Miter) 

enum class EGeometryScriptPolyOffsetJoinType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPolyOffsetJoinType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPolyOffsetJoinType>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTPATHOFFSETENDTYPE(op) \
	op(EGeometryScriptPathOffsetEndType::Butt) \
	op(EGeometryScriptPathOffsetEndType::Square) \
	op(EGeometryScriptPathOffsetEndType::Round) 

enum class EGeometryScriptPathOffsetEndType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPathOffsetEndType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPathOffsetEndType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
