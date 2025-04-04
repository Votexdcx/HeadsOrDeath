// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/OpenSubdivUtilityFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptGroupLayer;
#ifdef GEOMETRYSCRIPTINGEDITOR_OpenSubdivUtilityFunctions_generated_h
#error "OpenSubdivUtilityFunctions.generated.h already included, missing '#pragma once' in OpenSubdivUtilityFunctions.h"
#endif
#define GEOMETRYSCRIPTINGEDITOR_OpenSubdivUtilityFunctions_generated_h

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyTriangleLoopSubD); \
	DECLARE_FUNCTION(execApplyPolygroupCatmullClarkSubD);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_OpenSubdivFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_OpenSubdivFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_OpenSubdivFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingEditor"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_OpenSubdivFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_OpenSubdivFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_OpenSubdivFunctions(UGeometryScriptLibrary_OpenSubdivFunctions&&); \
	UGeometryScriptLibrary_OpenSubdivFunctions(const UGeometryScriptLibrary_OpenSubdivFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_OpenSubdivFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_OpenSubdivFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_OpenSubdivFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_OpenSubdivFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<class UGeometryScriptLibrary_OpenSubdivFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_OpenSubdivUtilityFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
