// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVFPPlugin/Public/OVFPSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVFPSettings() {}
// Cross Module References
	OVFPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions();
	UPackage* Z_Construct_UPackage__Script_OVFPPlugin();
	OVFPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix();
	OVFPPLUGIN_API UClass* Z_Construct_UClass_UOVFPSettings_NoRegister();
	OVFPPLUGIN_API UClass* Z_Construct_UClass_UOVFPSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
class UScriptStruct* FOVFPMaterialParameterConversions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OVFPPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions, Z_Construct_UPackage__Script_OVFPPlugin(), TEXT("OVFPMaterialParameterConversions"), sizeof(FOVFPMaterialParameterConversions), Get_Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Hash());
	}
	return Singleton;
}
template<> OVFPPLUGIN_API UScriptStruct* StaticStruct<FOVFPMaterialParameterConversions>()
{
	return FOVFPMaterialParameterConversions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOVFPMaterialParameterConversions(FOVFPMaterialParameterConversions::StaticStruct, TEXT("/Script/OVFPPlugin"), TEXT("OVFPMaterialParameterConversions"), false, nullptr, nullptr);
static struct FScriptStruct_OVFPPlugin_StaticRegisterNativesFOVFPMaterialParameterConversions
{
	FScriptStruct_OVFPPlugin_StaticRegisterNativesFOVFPMaterialParameterConversions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OVFPMaterialParameterConversions")),new UScriptStruct::TCppStructOps<FOVFPMaterialParameterConversions>);
	}
} ScriptStruct_OVFPPlugin_StaticRegisterNativesFOVFPMaterialParameterConversions;
	struct Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPRghIntParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPRghIntParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPRghIntParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPNrmIntParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPNrmIntParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPNrmIntParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPdetNrmIntParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPdetNrmIntParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPdetNrmIntParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPdetNrmScaleParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPdetNrmScaleParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPdetNrmScaleParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPmetConParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPmetConParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPmetConParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPmetBrightParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPmetBrightParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPmetBrightParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPcolTintParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPcolTintParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPcolTintParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPcolDesatParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPcolDesatParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPcolDesatParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPcolConParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPcolConParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPcolConParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPcolBrightParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPcolBrightParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPcolBrightParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPaoConParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPaoConParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPaoConParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPaoBrightParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPaoBrightParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPaoBrightParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPsubiTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPsubiTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPsubiTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPsubcTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPsubcTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPsubcTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPglossTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPglossTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPglossTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPdispTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPdispTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPdispTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPopaTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPopaTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPopaTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPemiTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPemiTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPemiTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPmetTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPmetTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPmetTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPaoTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPaoTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPaoTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPrghTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPrghTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPrghTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPrmaTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPrmaTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPrmaTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPormTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPormTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPormTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPdetNrmTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPdetNrmTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPdetNrmTexParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPnormalTextureParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPnormalTextureParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPnormalTextureParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPbaseColorTexParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPbaseColorTexParam;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPbaseColorTexParam_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOVFPMaterialParameterConversions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPRghIntParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Roughness Intensity Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPRghIntParam = { "OVFPRghIntParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPRghIntParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPRghIntParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPRghIntParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPRghIntParam_Inner = { "OVFPRghIntParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPNrmIntParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Normal Intensity Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPNrmIntParam = { "OVFPNrmIntParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPNrmIntParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPNrmIntParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPNrmIntParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPNrmIntParam_Inner = { "OVFPNrmIntParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmIntParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Detail Normal Intensity Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmIntParam = { "OVFPdetNrmIntParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPdetNrmIntParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmIntParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmIntParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmIntParam_Inner = { "OVFPdetNrmIntParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmScaleParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Detail Normal Scale Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmScaleParam = { "OVFPdetNrmScaleParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPdetNrmScaleParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmScaleParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmScaleParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmScaleParam_Inner = { "OVFPdetNrmScaleParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetConParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Metallic Contrast Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetConParam = { "OVFPmetConParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPmetConParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetConParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetConParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetConParam_Inner = { "OVFPmetConParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetBrightParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Metallic Amount Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetBrightParam = { "OVFPmetBrightParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPmetBrightParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetBrightParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetBrightParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetBrightParam_Inner = { "OVFPmetBrightParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolTintParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Base Color Tint Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolTintParam = { "OVFPcolTintParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPcolTintParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolTintParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolTintParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolTintParam_Inner = { "OVFPcolTintParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolDesatParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Base Color Desaturation Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolDesatParam = { "OVFPcolDesatParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPcolDesatParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolDesatParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolDesatParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolDesatParam_Inner = { "OVFPcolDesatParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolConParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Base Color Contrast Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolConParam = { "OVFPcolConParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPcolConParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolConParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolConParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolConParam_Inner = { "OVFPcolConParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolBrightParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Base Color Brightness Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolBrightParam = { "OVFPcolBrightParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPcolBrightParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolBrightParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolBrightParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolBrightParam_Inner = { "OVFPcolBrightParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoConParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "AO Contrast Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoConParam = { "OVFPaoConParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPaoConParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoConParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoConParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoConParam_Inner = { "OVFPaoConParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoBrightParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "AO Brightness Parameter Names" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoBrightParam = { "OVFPaoBrightParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPaoBrightParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoBrightParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoBrightParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoBrightParam_Inner = { "OVFPaoBrightParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubiTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Subsurface Intensity Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubiTexParam = { "OVFPsubiTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPsubiTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubiTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubiTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubiTexParam_Inner = { "OVFPsubiTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubcTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Subsurface Color Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubcTexParam = { "OVFPsubcTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPsubcTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubcTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubcTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubcTexParam_Inner = { "OVFPsubcTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPglossTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Gloss Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPglossTexParam = { "OVFPglossTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPglossTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPglossTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPglossTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPglossTexParam_Inner = { "OVFPglossTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdispTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Displacement Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdispTexParam = { "OVFPdispTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPdispTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdispTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdispTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdispTexParam_Inner = { "OVFPdispTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPopaTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Opacity Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPopaTexParam = { "OVFPopaTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPopaTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPopaTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPopaTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPopaTexParam_Inner = { "OVFPopaTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPemiTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Emissive Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPemiTexParam = { "OVFPemiTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPemiTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPemiTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPemiTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPemiTexParam_Inner = { "OVFPemiTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Metallic Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetTexParam = { "OVFPmetTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPmetTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetTexParam_Inner = { "OVFPmetTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "AO Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoTexParam = { "OVFPaoTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPaoTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoTexParam_Inner = { "OVFPaoTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrghTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Roughness Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrghTexParam = { "OVFPrghTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPrghTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrghTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrghTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrghTexParam_Inner = { "OVFPrghTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrmaTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "RMA Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrmaTexParam = { "OVFPrmaTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPrmaTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrmaTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrmaTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrmaTexParam_Inner = { "OVFPrmaTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPormTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "ORM Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPormTexParam = { "OVFPormTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPormTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPormTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPormTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPormTexParam_Inner = { "OVFPormTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Detail Normal Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmTexParam = { "OVFPdetNrmTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPdetNrmTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmTexParam_Inner = { "OVFPdetNrmTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPnormalTextureParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Normal Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPnormalTextureParam = { "OVFPnormalTextureParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPnormalTextureParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPnormalTextureParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPnormalTextureParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPnormalTextureParam_Inner = { "OVFPnormalTextureParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPbaseColorTexParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "//the tools will test against the names of parameters without spaces and as the lowercase version.\n" },
		{ "DisplayName", "Base Color Texture Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
		{ "ToolTip", "the tools will test against the names of parameters without spaces and as the lowercase version." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPbaseColorTexParam = { "OVFPbaseColorTexParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPMaterialParameterConversions, OVFPbaseColorTexParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPbaseColorTexParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPbaseColorTexParam_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPbaseColorTexParam_Inner = { "OVFPbaseColorTexParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPRghIntParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPRghIntParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPNrmIntParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPNrmIntParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmIntParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmIntParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmScaleParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmScaleParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetConParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetConParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetBrightParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetBrightParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolTintParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolTintParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolDesatParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolDesatParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolConParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolConParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolBrightParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPcolBrightParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoConParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoConParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoBrightParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoBrightParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubiTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubiTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubcTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPsubcTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPglossTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPglossTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdispTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdispTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPopaTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPopaTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPemiTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPemiTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPmetTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPaoTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrghTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrghTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrmaTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPrmaTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPormTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPormTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPdetNrmTexParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPnormalTextureParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPnormalTextureParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPbaseColorTexParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::NewProp_OVFPbaseColorTexParam_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVFPPlugin,
		nullptr,
		&NewStructOps,
		"OVFPMaterialParameterConversions",
		sizeof(FOVFPMaterialParameterConversions),
		alignof(FOVFPMaterialParameterConversions),
		Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OVFPPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OVFPMaterialParameterConversions"), sizeof(FOVFPMaterialParameterConversions), Get_Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions_Hash() { return 130369932U; }
class UScriptStruct* FOVFPTexNamingConSuffix::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OVFPPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix, Z_Construct_UPackage__Script_OVFPPlugin(), TEXT("OVFPTexNamingConSuffix"), sizeof(FOVFPTexNamingConSuffix), Get_Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Hash());
	}
	return Singleton;
}
template<> OVFPPLUGIN_API UScriptStruct* StaticStruct<FOVFPTexNamingConSuffix>()
{
	return FOVFPTexNamingConSuffix::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOVFPTexNamingConSuffix(FOVFPTexNamingConSuffix::StaticStruct, TEXT("/Script/OVFPPlugin"), TEXT("OVFPTexNamingConSuffix"), false, nullptr, nullptr);
static struct FScriptStruct_OVFPPlugin_StaticRegisterNativesFOVFPTexNamingConSuffix
{
	FScriptStruct_OVFPPlugin_StaticRegisterNativesFOVFPTexNamingConSuffix()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OVFPTexNamingConSuffix")),new UScriptStruct::TCppStructOps<FOVFPTexNamingConSuffix>);
	}
} ScriptStruct_OVFPPlugin_StaticRegisterNativesFOVFPTexNamingConSuffix;
	struct Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPsubiTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPsubiTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPsubiTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPsubcTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPsubcTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPsubcTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPglossTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPglossTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPglossTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPdispTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPdispTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPdispTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPopaTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPopaTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPopaTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPemiTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPemiTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPemiTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPmetTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPmetTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPmetTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPaoTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPaoTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPaoTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPrghTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPrghTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPrghTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPrmaTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPrmaTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPrmaTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPormTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPormTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPormTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPdetNrmTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPdetNrmTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPdetNrmTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPnormalTextureSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPnormalTextureSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPnormalTextureSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPbaseColorTexSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPbaseColorTexSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPbaseColorTexSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPTexPrefixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPTexPrefixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OVFPTexPrefixes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOVFPTexNamingConSuffix>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubiTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Subsurface Intensity Texture suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubiTexSuffixes = { "OVFPsubiTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPsubiTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubiTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubiTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubiTexSuffixes_Inner = { "OVFPsubiTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubcTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Subsurface Color Texture suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubcTexSuffixes = { "OVFPsubcTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPsubcTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubcTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubcTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubcTexSuffixes_Inner = { "OVFPsubcTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPglossTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Gloss Texture suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPglossTexSuffixes = { "OVFPglossTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPglossTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPglossTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPglossTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPglossTexSuffixes_Inner = { "OVFPglossTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdispTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Displacement Texture suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdispTexSuffixes = { "OVFPdispTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPdispTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdispTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdispTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdispTexSuffixes_Inner = { "OVFPdispTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPopaTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Opacity Texture suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPopaTexSuffixes = { "OVFPopaTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPopaTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPopaTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPopaTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPopaTexSuffixes_Inner = { "OVFPopaTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPemiTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Emissive Texture suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPemiTexSuffixes = { "OVFPemiTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPemiTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPemiTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPemiTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPemiTexSuffixes_Inner = { "OVFPemiTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPmetTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Metallic Texture suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPmetTexSuffixes = { "OVFPmetTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPmetTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPmetTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPmetTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPmetTexSuffixes_Inner = { "OVFPmetTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPaoTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "AO Texture suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPaoTexSuffixes = { "OVFPaoTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPaoTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPaoTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPaoTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPaoTexSuffixes_Inner = { "OVFPaoTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrghTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Roughness Texture suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrghTexSuffixes = { "OVFPrghTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPrghTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrghTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrghTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrghTexSuffixes_Inner = { "OVFPrghTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrmaTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "RMA Texture Suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrmaTexSuffixes = { "OVFPrmaTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPrmaTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrmaTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrmaTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrmaTexSuffixes_Inner = { "OVFPrmaTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPormTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "ORM Texture Suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPormTexSuffixes = { "OVFPormTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPormTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPormTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPormTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPormTexSuffixes_Inner = { "OVFPormTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdetNrmTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Detail Normal Texture suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdetNrmTexSuffixes = { "OVFPdetNrmTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPdetNrmTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdetNrmTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdetNrmTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdetNrmTexSuffixes_Inner = { "OVFPdetNrmTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPnormalTextureSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Normal Texture Suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPnormalTextureSuffixes = { "OVFPnormalTextureSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPnormalTextureSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPnormalTextureSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPnormalTextureSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPnormalTextureSuffixes_Inner = { "OVFPnormalTextureSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPbaseColorTexSuffixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Base Color Texture Suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPbaseColorTexSuffixes = { "OVFPbaseColorTexSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPbaseColorTexSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPbaseColorTexSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPbaseColorTexSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPbaseColorTexSuffixes_Inner = { "OVFPbaseColorTexSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPTexPrefixes_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Texture Prefixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPTexPrefixes = { "OVFPTexPrefixes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPTexNamingConSuffix, OVFPTexPrefixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPTexPrefixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPTexPrefixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPTexPrefixes_Inner = { "OVFPTexPrefixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubiTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubiTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubcTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPsubcTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPglossTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPglossTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdispTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdispTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPopaTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPopaTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPemiTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPemiTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPmetTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPmetTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPaoTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPaoTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrghTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrghTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrmaTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPrmaTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPormTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPormTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdetNrmTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPdetNrmTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPnormalTextureSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPnormalTextureSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPbaseColorTexSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPbaseColorTexSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPTexPrefixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::NewProp_OVFPTexPrefixes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVFPPlugin,
		nullptr,
		&NewStructOps,
		"OVFPTexNamingConSuffix",
		sizeof(FOVFPTexNamingConSuffix),
		alignof(FOVFPTexNamingConSuffix),
		Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OVFPPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OVFPTexNamingConSuffix"), sizeof(FOVFPTexNamingConSuffix), Get_Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix_Hash() { return 3573350170U; }
	void UOVFPSettings::StaticRegisterNativesUOVFPSettings()
	{
	}
	UClass* Z_Construct_UClass_UOVFPSettings_NoRegister()
	{
		return UOVFPSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOVFPSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPdefaultMatConvParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OVFPdefaultMatConvParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPdefaultTexNamingCons_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OVFPdefaultTexNamingCons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPdefaultScaleCube_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OVFPdefaultScaleCube;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPLSLLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPLSLLocations;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OVFPLSLLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPMLPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPMLPrefix;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OVFPMLPrefix_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPMLPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OVFPMLPaths;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OVFPMLPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OVFPBlenderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OVFPBlenderPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVFPSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OVFPPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configure the Python plug-in.\n */" },
		{ "IncludePath", "OVFPSettings.h" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
		{ "ToolTip", "Configure the Python plug-in." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultMatConvParam_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Material Conversion Parameters" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultMatConvParam = { "OVFPdefaultMatConvParam", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOVFPSettings, OVFPdefaultMatConvParam), Z_Construct_UScriptStruct_FOVFPMaterialParameterConversions, METADATA_PARAMS(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultMatConvParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultMatConvParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultTexNamingCons_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "DisplayName", "Material Naming Convention Suffixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultTexNamingCons = { "OVFPdefaultTexNamingCons", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOVFPSettings, OVFPdefaultTexNamingCons), Z_Construct_UScriptStruct_FOVFPTexNamingConSuffix, METADATA_PARAMS(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultTexNamingCons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultTexNamingCons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultScaleCube_MetaData[] = {
		{ "Category", "OVFP" },
		{ "DisplayName", "Default Scale Cube" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultScaleCube = { "OVFPdefaultScaleCube", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOVFPSettings, OVFPdefaultScaleCube), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultScaleCube_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultScaleCube_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPLSLLocations_MetaData[] = {
		{ "Category", "DynamicSetlist" },
		{ "DisplayName", "Directories where lighting template levels may be found" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPLSLLocations = { "OVFPLSLLocations", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOVFPSettings, OVFPLSLLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPLSLLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPLSLLocations_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPLSLLocations_Inner = { "OVFPLSLLocations", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPrefix_MetaData[] = {
		{ "Category", "DynamicSetlist" },
		{ "DisplayName", "Master Level Prefixes" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPrefix = { "OVFPMLPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOVFPSettings, OVFPMLPrefix), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPrefix_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPrefix_Inner = { "OVFPMLPrefix", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPaths_MetaData[] = {
		{ "Category", "DynamicSetlist" },
		{ "DisplayName", "Directories where master levels may be found" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPaths = { "OVFPMLPaths", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOVFPSettings, OVFPMLPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPaths_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPaths_Inner = { "OVFPMLPaths", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPBlenderPath_MetaData[] = {
		{ "Category", "OutputSettings" },
		{ "Comment", "/** The multicast group endpoint (in the form of IP_ADDRESS:PORT_NUMBER) that the UDP multicast socket should join */" },
		{ "DisplayName", "Path to Blender Installation" },
		{ "ModuleRelativePath", "Public/OVFPSettings.h" },
		{ "ToolTip", "The multicast group endpoint (in the form of IP_ADDRESS:PORT_NUMBER) that the UDP multicast socket should join" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPBlenderPath = { "OVFPBlenderPath", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOVFPSettings, OVFPBlenderPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPBlenderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPBlenderPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVFPSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultMatConvParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultTexNamingCons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPdefaultScaleCube,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPLSLLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPLSLLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPrefix_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPMLPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPSettings_Statics::NewProp_OVFPBlenderPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVFPSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVFPSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOVFPSettings_Statics::ClassParams = {
		&UOVFPSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOVFPSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOVFPSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVFPSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOVFPSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOVFPSettings, 1821677685);
	template<> OVFPPLUGIN_API UClass* StaticClass<UOVFPSettings>()
	{
		return UOVFPSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOVFPSettings(Z_Construct_UClass_UOVFPSettings, &UOVFPSettings::StaticClass, TEXT("/Script/OVFPPlugin"), TEXT("UOVFPSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVFPSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
