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
	OVFPPLUGIN_API UClass* Z_Construct_UClass_UOVFPSettings_NoRegister();
	OVFPPLUGIN_API UClass* Z_Construct_UClass_UOVFPSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_OVFPPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
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
	IMPLEMENT_CLASS(UOVFPSettings, 1511193382);
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
