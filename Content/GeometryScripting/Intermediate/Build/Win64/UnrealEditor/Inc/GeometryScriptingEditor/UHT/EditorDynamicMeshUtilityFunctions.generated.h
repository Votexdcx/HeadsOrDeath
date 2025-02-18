// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/EditorDynamicMeshUtilityFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
struct FDynamicMeshChangeContainer;
#ifdef GEOMETRYSCRIPTINGEDITOR_EditorDynamicMeshUtilityFunctions_generated_h
#error "EditorDynamicMeshUtilityFunctions.generated.h already included, missing '#pragma once' in EditorDynamicMeshUtilityFunctions.h"
#endif
#define GEOMETRYSCRIPTINGEDITOR_EditorDynamicMeshUtilityFunctions_generated_h

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDynamicMeshChangeContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FDynamicMeshChangeContainer>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFetchDebugMesh); \
	DECLARE_FUNCTION(execStashDebugMesh); \
	DECLARE_FUNCTION(execEmitTrackedMeshChange); \
	DECLARE_FUNCTION(execBeginTrackedMeshChange);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_EditorDynamicMeshFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_EditorDynamicMeshFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_EditorDynamicMeshFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingEditor"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_EditorDynamicMeshFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_EditorDynamicMeshFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_EditorDynamicMeshFunctions(UGeometryScriptLibrary_EditorDynamicMeshFunctions&&); \
	UGeometryScriptLibrary_EditorDynamicMeshFunctions(const UGeometryScriptLibrary_EditorDynamicMeshFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_EditorDynamicMeshFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_EditorDynamicMeshFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_EditorDynamicMeshFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_EditorDynamicMeshFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_41_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<class UGeometryScriptLibrary_EditorDynamicMeshFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorDynamicMeshUtilityFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
