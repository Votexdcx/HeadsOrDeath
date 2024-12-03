// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/EditorTextureMapFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryScriptDebug;
struct FGeometryScriptChannelPackResult;
struct FGeometryScriptChannelPackSource;
#ifdef GEOMETRYSCRIPTINGEDITOR_EditorTextureMapFunctions_generated_h
#error "EditorTextureMapFunctions.generated.h already included, missing '#pragma once' in EditorTextureMapFunctions.h"
#endif
#define GEOMETRYSCRIPTINGEDITOR_EditorTextureMapFunctions_generated_h

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptChannelPackSource_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FGeometryScriptChannelPackSource>();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptChannelPackResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FGeometryScriptChannelPackResult>();

#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_69_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execChannelPack);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_69_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_EditorTextureMapFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_EditorTextureMapFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_EditorTextureMapFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingEditor"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_EditorTextureMapFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_EditorTextureMapFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_EditorTextureMapFunctions(UGeometryScriptLibrary_EditorTextureMapFunctions&&); \
	UGeometryScriptLibrary_EditorTextureMapFunctions(const UGeometryScriptLibrary_EditorTextureMapFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_EditorTextureMapFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_EditorTextureMapFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_EditorTextureMapFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_EditorTextureMapFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_66_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_69_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<class UGeometryScriptLibrary_EditorTextureMapFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_EditorTextureMapFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTRGBACHANNEL(op) \
	op(EGeometryScriptRGBAChannel::R) \
	op(EGeometryScriptRGBAChannel::G) \
	op(EGeometryScriptRGBAChannel::B) \
	op(EGeometryScriptRGBAChannel::A) 

enum class EGeometryScriptRGBAChannel : uint8;
template<> struct TIsUEnumClass<EGeometryScriptRGBAChannel> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGEDITOR_API UEnum* StaticEnum<EGeometryScriptRGBAChannel>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTREADGAMMASPACE(op) \
	op(EGeometryScriptReadGammaSpace::FromTextureSettings) \
	op(EGeometryScriptReadGammaSpace::Linear) \
	op(EGeometryScriptReadGammaSpace::SRGB) 

enum class EGeometryScriptReadGammaSpace : uint8;
template<> struct TIsUEnumClass<EGeometryScriptReadGammaSpace> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGEDITOR_API UEnum* StaticEnum<EGeometryScriptReadGammaSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
