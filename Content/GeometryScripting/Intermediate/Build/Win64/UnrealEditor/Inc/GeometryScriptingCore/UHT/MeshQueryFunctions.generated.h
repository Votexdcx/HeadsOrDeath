// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshQueryFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
struct FGeometryScriptIndexList;
struct FGeometryScriptTriangle;
struct FGeometryScriptTriangleList;
struct FGeometryScriptVectorList;
struct FLinearColor;
#ifdef GEOMETRYSCRIPTINGCORE_MeshQueryFunctions_generated_h
#error "MeshQueryFunctions.generated.h already included, missing '#pragma once' in MeshQueryFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshQueryFunctions_generated_h

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumExtendedPolygroupLayers); \
	DECLARE_FUNCTION(execGetHasPolygroups); \
	DECLARE_FUNCTION(execGetHasMaterialIDs); \
	DECLARE_FUNCTION(execGetInterpolatedTriangleVertexColor); \
	DECLARE_FUNCTION(execGetTriangleVertexColors); \
	DECLARE_FUNCTION(execGetHasVertexColors); \
	DECLARE_FUNCTION(execGetInterpolatedTriangleNormalTangents); \
	DECLARE_FUNCTION(execGetTriangleNormalTangents); \
	DECLARE_FUNCTION(execGetInterpolatedTriangleNormal); \
	DECLARE_FUNCTION(execGetTriangleNormals); \
	DECLARE_FUNCTION(execGetHasTriangleNormals); \
	DECLARE_FUNCTION(execGetInterpolatedTriangleUV); \
	DECLARE_FUNCTION(execGetAllSplitUVsAtVertex); \
	DECLARE_FUNCTION(execGetTriangleUVs); \
	DECLARE_FUNCTION(execGetUVSetBoundingBox); \
	DECLARE_FUNCTION(execGetNumUVSets); \
	DECLARE_FUNCTION(execGetVertexConnectedVertices); \
	DECLARE_FUNCTION(execGetVertexConnectedTriangles); \
	DECLARE_FUNCTION(execGetAllVertexPositions); \
	DECLARE_FUNCTION(execGetVertexPosition); \
	DECLARE_FUNCTION(execGetAllVertexIDs); \
	DECLARE_FUNCTION(execIsValidVertexID); \
	DECLARE_FUNCTION(execGetHasVertexIDGaps); \
	DECLARE_FUNCTION(execGetNumVertexIDs); \
	DECLARE_FUNCTION(execGetVertexCount); \
	DECLARE_FUNCTION(execComputeTriangleBarycentricCoords); \
	DECLARE_FUNCTION(execGetTriangleFaceNormal); \
	DECLARE_FUNCTION(execGetInterpolatedTrianglePosition); \
	DECLARE_FUNCTION(execGetTrianglePositions); \
	DECLARE_FUNCTION(execGetAllTriangleIndices); \
	DECLARE_FUNCTION(execGetTriangleIndices); \
	DECLARE_FUNCTION(execGetAllTriangleIDs); \
	DECLARE_FUNCTION(execIsValidTriangleID); \
	DECLARE_FUNCTION(execGetHasTriangleIDGaps); \
	DECLARE_FUNCTION(execGetNumTriangleIDs); \
	DECLARE_FUNCTION(execGetNumConnectedComponents); \
	DECLARE_FUNCTION(execGetNumOpenBorderEdges); \
	DECLARE_FUNCTION(execGetNumOpenBorderLoops); \
	DECLARE_FUNCTION(execGetIsClosedMesh); \
	DECLARE_FUNCTION(execGetMeshVolumeAreaCenter); \
	DECLARE_FUNCTION(execGetMeshVolumeArea); \
	DECLARE_FUNCTION(execGetMeshBoundingBox); \
	DECLARE_FUNCTION(execGetMeshHasAttributeSet); \
	DECLARE_FUNCTION(execGetIsDenseMesh); \
	DECLARE_FUNCTION(execGetMeshInfoString);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshQueryFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshQueryFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshQueryFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshQueryFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshQueryFunctions(UGeometryScriptLibrary_MeshQueryFunctions&&); \
	UGeometryScriptLibrary_MeshQueryFunctions(const UGeometryScriptLibrary_MeshQueryFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshQueryFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshQueryFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshQueryFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshQueryFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshQueryFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
