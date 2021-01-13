// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVFPPlugin/Public/OVFPPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVFPPluginBPLibrary() {}
// Cross Module References
	OVFPPLUGIN_API UClass* Z_Construct_UClass_UOVFPPluginBPLibrary_NoRegister();
	OVFPPLUGIN_API UClass* Z_Construct_UClass_UOVFPPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OVFPPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPDefaultCube)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPDefaultCube();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPLSLLocations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPLSLLocations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPMLPrefix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPMLPrefix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPMLPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPMLPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPOpenWidget)
	{
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPOpenWidget(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPReadTextFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FullFilePath);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPReadTextFile(Z_Param_FullFilePath,Z_Param_Out_StringArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPSaveCSV)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_output);
		P_GET_PROPERTY(FStrProperty,Z_Param_directory);
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_GET_UBOOL(Z_Param_bAllowOverwritting);
		P_GET_UBOOL(Z_Param_bAppend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPSaveCSV(Z_Param_output,Z_Param_directory,Z_Param_filename,Z_Param_bAllowOverwritting,Z_Param_bAppend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPGetLevels)
	{
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULevel*>*)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPGetLevels(Z_Param_world);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execSaveLevelAs)
	{
		P_GET_OBJECT(ULevel,Z_Param_Level);
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewPackageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOVFPPluginBPLibrary::SaveLevelAs(Z_Param_Level,Z_Param_world,Z_Param_NewPackageName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPCastToWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_object);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPCastToWorld(Z_Param_object,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPGetLevelFromStreaming)
	{
		P_GET_OBJECT(ULevelStreaming,Z_Param_inLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevel**)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPGetLevelFromStreaming(Z_Param_inLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPSetLevelStreamingClass)
	{
		P_GET_OBJECT(ULevelStreaming,Z_Param_inLevel);
		P_GET_OBJECT(UClass,Z_Param_streamingClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPSetLevelStreamingClass(Z_Param_inLevel,Z_Param_streamingClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPRemoveLevel)
	{
		P_GET_OBJECT(ULevel,Z_Param_inLevel);
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPRemoveLevel(Z_Param_inLevel,Z_Param_world);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVFPPluginBPLibrary::execVPOVFPAddLevel)
	{
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_LevelTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOVFPPluginBPLibrary::VPOVFPAddLevel(Z_Param_world,Z_Param_FileName,Z_Param_Out_LevelTransform);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UOVFPPluginBPLibrary::StaticRegisterNativesUOVFPPluginBPLibrary()
	{
#if WITH_EDITOR
		UClass* Class = UOVFPPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveLevelAs", &UOVFPPluginBPLibrary::execSaveLevelAs },
			{ "VPOVFPAddLevel", &UOVFPPluginBPLibrary::execVPOVFPAddLevel },
			{ "VPOVFPCastToWorld", &UOVFPPluginBPLibrary::execVPOVFPCastToWorld },
			{ "VPOVFPDefaultCube", &UOVFPPluginBPLibrary::execVPOVFPDefaultCube },
			{ "VPOVFPGetLevelFromStreaming", &UOVFPPluginBPLibrary::execVPOVFPGetLevelFromStreaming },
			{ "VPOVFPGetLevels", &UOVFPPluginBPLibrary::execVPOVFPGetLevels },
			{ "VPOVFPLSLLocations", &UOVFPPluginBPLibrary::execVPOVFPLSLLocations },
			{ "VPOVFPMLPaths", &UOVFPPluginBPLibrary::execVPOVFPMLPaths },
			{ "VPOVFPMLPrefix", &UOVFPPluginBPLibrary::execVPOVFPMLPrefix },
			{ "VPOVFPOpenWidget", &UOVFPPluginBPLibrary::execVPOVFPOpenWidget },
			{ "VPOVFPReadTextFile", &UOVFPPluginBPLibrary::execVPOVFPReadTextFile },
			{ "VPOVFPRemoveLevel", &UOVFPPluginBPLibrary::execVPOVFPRemoveLevel },
			{ "VPOVFPSaveCSV", &UOVFPPluginBPLibrary::execVPOVFPSaveCSV },
			{ "VPOVFPSetLevelStreamingClass", &UOVFPPluginBPLibrary::execVPOVFPSetLevelStreamingClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics
	{
		struct OVFPPluginBPLibrary_eventSaveLevelAs_Parms
		{
			ULevel* Level;
			UWorld* world;
			FString NewPackageName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewPackageName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OVFPPluginBPLibrary_eventSaveLevelAs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OVFPPluginBPLibrary_eventSaveLevelAs_Parms), &Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::NewProp_NewPackageName = { "NewPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventSaveLevelAs_Parms, NewPackageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventSaveLevelAs_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventSaveLevelAs_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::NewProp_NewPackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::NewProp_world,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Save Level As (No Dialog)" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "SaveLevelAs", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventSaveLevelAs_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPAddLevel_Parms
		{
			UWorld* world;
			FString FileName;
			FTransform LevelTransform;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelTransform;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OVFPPluginBPLibrary_eventVPOVFPAddLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OVFPPluginBPLibrary_eventVPOVFPAddLevel_Parms), &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::NewProp_LevelTransform = { "LevelTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPAddLevel_Parms, LevelTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPAddLevel_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPAddLevel_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::NewProp_LevelTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Add Level To World" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPAddLevel", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPAddLevel_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPCastToWorld_Parms
		{
			UObject* object;
			bool success;
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPCastToWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::NewProp_success_SetBit(void* Obj)
	{
		((OVFPPluginBPLibrary_eventVPOVFPCastToWorld_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OVFPPluginBPLibrary_eventVPOVFPCastToWorld_Parms), &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPCastToWorld_Parms, object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::NewProp_object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Cast To Uworld" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPCastToWorld", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPCastToWorld_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPDefaultCube_Parms
		{
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPDefaultCube_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Get OVFP Default Scale Cube" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPDefaultCube", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPDefaultCube_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPGetLevelFromStreaming_Parms
		{
			ULevelStreaming* inLevel;
			ULevel* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPGetLevelFromStreaming_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::NewProp_inLevel = { "inLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPGetLevelFromStreaming_Parms, inLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::NewProp_inLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Get Level From Streaming Level" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPGetLevelFromStreaming", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPGetLevelFromStreaming_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPGetLevels_Parms
		{
			UWorld* world;
			TArray<ULevel*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPGetLevels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPGetLevels_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Get World Levels" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPGetLevels", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPGetLevels_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPLSLLocations_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPLSLLocations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Get OVFP LSL Locations Setting" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPLSLLocations", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPLSLLocations_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPMLPaths_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPMLPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Get OVFP Master Level Path Setting" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPMLPaths", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPMLPaths_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPMLPrefix_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPMLPrefix_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Get OVFP ML Prefix Setting" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPMLPrefix", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPMLPrefix_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPOpenWidget_Parms
		{
			UEditorUtilityWidgetBlueprint* Blueprint;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OVFPPluginBPLibrary_eventVPOVFPOpenWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OVFPPluginBPLibrary_eventVPOVFPOpenWidget_Parms), &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPOpenWidget_Parms, Blueprint), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Open Editor Utility Widget" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPOpenWidget", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPOpenWidget_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPReadTextFile_Parms
		{
			FString FullFilePath;
			TArray<FString> StringArray;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OVFPPluginBPLibrary_eventVPOVFPReadTextFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OVFPPluginBPLibrary_eventVPOVFPReadTextFile_Parms), &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPReadTextFile_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPReadTextFile_Parms, FullFilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::NewProp_StringArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::NewProp_StringArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::NewProp_FullFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Read Text File" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPReadTextFile", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPReadTextFile_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPRemoveLevel_Parms
		{
			ULevel* inLevel;
			UWorld* world;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OVFPPluginBPLibrary_eventVPOVFPRemoveLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OVFPPluginBPLibrary_eventVPOVFPRemoveLevel_Parms), &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPRemoveLevel_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::NewProp_inLevel = { "inLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPRemoveLevel_Parms, inLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::NewProp_world,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::NewProp_inLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Remove Level From World" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPRemoveLevel", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPRemoveLevel_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms
		{
			FString output;
			FString directory;
			FString filename;
			bool bAllowOverwritting;
			bool bAppend;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAppend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAppend;
		static void NewProp_bAllowOverwritting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowOverwritting;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_directory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms), &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_bAppend_SetBit(void* Obj)
	{
		((OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms*)Obj)->bAppend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_bAppend = { "bAppend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms), &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_bAppend_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_bAllowOverwritting_SetBit(void* Obj)
	{
		((OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms*)Obj)->bAllowOverwritting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_bAllowOverwritting = { "bAllowOverwritting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms), &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_bAllowOverwritting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms, filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_directory = { "directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms, directory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms, output), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_bAppend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_bAllowOverwritting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_directory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::NewProp_output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "CPP_Default_bAllowOverwritting", "true" },
		{ "CPP_Default_bAppend", "false" },
		{ "DisplayName", "Save To CSV" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPSaveCSV", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPSaveCSV_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics
	{
		struct OVFPPluginBPLibrary_eventVPOVFPSetLevelStreamingClass_Parms
		{
			ULevelStreaming* inLevel;
			TSubclassOf<ULevelStreaming>  streamingClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_streamingClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OVFPPluginBPLibrary_eventVPOVFPSetLevelStreamingClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OVFPPluginBPLibrary_eventVPOVFPSetLevelStreamingClass_Parms), &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::NewProp_streamingClass = { "streamingClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPSetLevelStreamingClass_Parms, streamingClass), Z_Construct_UClass_ULevelStreaming_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::NewProp_inLevel = { "inLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OVFPPluginBPLibrary_eventVPOVFPSetLevelStreamingClass_Parms, inLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::NewProp_streamingClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::NewProp_inLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVFPPlugins" },
		{ "DisplayName", "Set Level Streaming Class" },
		{ "Keywords", "OVFP Virtual Production VP" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVFPPluginBPLibrary, nullptr, "VPOVFPSetLevelStreamingClass", nullptr, nullptr, sizeof(OVFPPluginBPLibrary_eventVPOVFPSetLevelStreamingClass_Parms), Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UOVFPPluginBPLibrary_NoRegister()
	{
		return UOVFPPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOVFPPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVFPPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OVFPPlugin,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UOVFPPluginBPLibrary_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_SaveLevelAs, "SaveLevelAs" }, // 3206933415
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPAddLevel, "VPOVFPAddLevel" }, // 2039247843
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPCastToWorld, "VPOVFPCastToWorld" }, // 25298568
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPDefaultCube, "VPOVFPDefaultCube" }, // 3714783207
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevelFromStreaming, "VPOVFPGetLevelFromStreaming" }, // 272680617
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPGetLevels, "VPOVFPGetLevels" }, // 3946346690
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPLSLLocations, "VPOVFPLSLLocations" }, // 3063053760
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPaths, "VPOVFPMLPaths" }, // 107959972
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPMLPrefix, "VPOVFPMLPrefix" }, // 305109925
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPOpenWidget, "VPOVFPOpenWidget" }, // 362232783
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPReadTextFile, "VPOVFPReadTextFile" }, // 832850235
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPRemoveLevel, "VPOVFPRemoveLevel" }, // 3141092411
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSaveCSV, "VPOVFPSaveCSV" }, // 1806575343
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOVFPPluginBPLibrary_VPOVFPSetLevelStreamingClass, "VPOVFPSetLevelStreamingClass" }, // 4116405586
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OVFPPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/OVFPPluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVFPPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVFPPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOVFPPluginBPLibrary_Statics::ClassParams = {
		&UOVFPPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOVFPPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVFPPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOVFPPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOVFPPluginBPLibrary, 1320111923);
	template<> OVFPPLUGIN_API UClass* StaticClass<UOVFPPluginBPLibrary>()
	{
		return UOVFPPluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOVFPPluginBPLibrary(Z_Construct_UClass_UOVFPPluginBPLibrary, &UOVFPPluginBPLibrary::StaticClass, TEXT("/Script/OVFPPlugin"), TEXT("UOVFPPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVFPPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
