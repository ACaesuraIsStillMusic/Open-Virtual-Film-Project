// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOVFPMaterialParameterConversions;
struct FOVFPTexNamingConSuffix;
class UStaticMesh;
class UEditorUtilityWidgetBlueprint;
class UWorld;
class ULevel;
class UObject;
class ULevelStreaming;
struct FTransform;
#ifdef OVFPPLUGIN_OVFPPluginBPLibrary_generated_h
#error "OVFPPluginBPLibrary.generated.h already included, missing '#pragma once' in OVFPPluginBPLibrary.h"
#endif
#define OVFPPLUGIN_OVFPPluginBPLibrary_generated_h

#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_SPARSE_DATA
#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_RPC_WRAPPERS
#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVPOVFPMatConvParam); \
	DECLARE_FUNCTION(execVPOVFPTexNamingCon); \
	DECLARE_FUNCTION(execVPOVFPDefaultCube); \
	DECLARE_FUNCTION(execVPOVFPLSLLocations); \
	DECLARE_FUNCTION(execVPOVFPMLPrefix); \
	DECLARE_FUNCTION(execVPOVFPMLPaths); \
	DECLARE_FUNCTION(execVPOVFPOpenWidget); \
	DECLARE_FUNCTION(execVPOVFPReadTextFile); \
	DECLARE_FUNCTION(execVPOVFPSaveCSV); \
	DECLARE_FUNCTION(execVPOVFPGetLevels); \
	DECLARE_FUNCTION(execSaveLevelAs); \
	DECLARE_FUNCTION(execVPOVFPCastToWorld); \
	DECLARE_FUNCTION(execVPOVFPGetLevelFromStreaming); \
	DECLARE_FUNCTION(execVPOVFPSetLevelStreamingClass); \
	DECLARE_FUNCTION(execVPOVFPRemoveLevel); \
	DECLARE_FUNCTION(execVPOVFPAddLevel);


#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVPOVFPMatConvParam); \
	DECLARE_FUNCTION(execVPOVFPTexNamingCon); \
	DECLARE_FUNCTION(execVPOVFPDefaultCube); \
	DECLARE_FUNCTION(execVPOVFPLSLLocations); \
	DECLARE_FUNCTION(execVPOVFPMLPrefix); \
	DECLARE_FUNCTION(execVPOVFPMLPaths); \
	DECLARE_FUNCTION(execVPOVFPOpenWidget); \
	DECLARE_FUNCTION(execVPOVFPReadTextFile); \
	DECLARE_FUNCTION(execVPOVFPSaveCSV); \
	DECLARE_FUNCTION(execVPOVFPGetLevels); \
	DECLARE_FUNCTION(execSaveLevelAs); \
	DECLARE_FUNCTION(execVPOVFPCastToWorld); \
	DECLARE_FUNCTION(execVPOVFPGetLevelFromStreaming); \
	DECLARE_FUNCTION(execVPOVFPSetLevelStreamingClass); \
	DECLARE_FUNCTION(execVPOVFPRemoveLevel); \
	DECLARE_FUNCTION(execVPOVFPAddLevel);


#else
#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_EDITOR_ONLY_RPC_WRAPPERS
#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOVFPPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UOVFPPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UOVFPPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVFPPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOVFPPluginBPLibrary)


#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUOVFPPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UOVFPPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UOVFPPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVFPPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOVFPPluginBPLibrary)


#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVFPPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOVFPPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVFPPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVFPPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVFPPluginBPLibrary(UOVFPPluginBPLibrary&&); \
	NO_API UOVFPPluginBPLibrary(const UOVFPPluginBPLibrary&); \
public:


#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVFPPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVFPPluginBPLibrary(UOVFPPluginBPLibrary&&); \
	NO_API UOVFPPluginBPLibrary(const UOVFPPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVFPPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVFPPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOVFPPluginBPLibrary)


#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_18_PROLOG
#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_SPARSE_DATA \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_RPC_WRAPPERS \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_EDITOR_ONLY_RPC_WRAPPERS \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_INCLASS \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_SPARSE_DATA \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_INCLASS_NO_PURE_DECLS \
	OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OVFPPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVFPPLUGIN_API UClass* StaticClass<class UOVFPPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OVFP425_Plugins_OVFPPlugin_Source_OVFPPlugin_Public_OVFPPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
