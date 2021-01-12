// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVFPVPUtilitiesAdd/Public/OVFPVPUtilitiesAddSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVFPVPUtilitiesAddSettings() {}
// Cross Module References
	OVFPVPUTILITIESADD_API UEnum* Z_Construct_UEnum_OVFPVPUtilitiesAdd_FOVFPVPUtilityControllerModel();
	UPackage* Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd();
	OVFPVPUTILITIESADD_API UScriptStruct* Z_Construct_UScriptStruct_FOVFPVPUtilitySettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	OVFPVPUTILITIESADD_API UScriptStruct* Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	OVFPVPUTILITIESADD_API UClass* Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_NoRegister();
	OVFPVPUTILITIESADD_API UClass* Z_Construct_UClass_UOVFPVPUtilitiesAddSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
	static UEnum* FOVFPVPUtilityControllerModel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OVFPVPUtilitiesAdd_FOVFPVPUtilityControllerModel, Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd(), TEXT("FOVFPVPUtilityControllerModel"));
		}
		return Singleton;
	}
	template<> OVFPVPUTILITIESADD_API UEnum* StaticEnum<FOVFPVPUtilityControllerModel>()
	{
		return FOVFPVPUtilityControllerModel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FOVFPVPUtilityControllerModel(FOVFPVPUtilityControllerModel_StaticEnum, TEXT("/Script/OVFPVPUtilitiesAdd"), TEXT("FOVFPVPUtilityControllerModel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OVFPVPUtilitiesAdd_FOVFPVPUtilityControllerModel_Hash() { return 4181103668U; }
	UEnum* Z_Construct_UEnum_OVFPVPUtilitiesAdd_FOVFPVPUtilityControllerModel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FOVFPVPUtilityControllerModel"), 0, Get_Z_Construct_UEnum_OVFPVPUtilitiesAdd_FOVFPVPUtilityControllerModel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FOVFPVPUtilityControllerModel::Vive", (int64)FOVFPVPUtilityControllerModel::Vive },
				{ "FOVFPVPUtilityControllerModel::ValveIndex", (int64)FOVFPVPUtilityControllerModel::ValveIndex },
				{ "FOVFPVPUtilityControllerModel::RiftS", (int64)FOVFPVPUtilityControllerModel::RiftS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
				{ "RiftS.DisplayName", "Rift S" },
				{ "RiftS.Name", "FOVFPVPUtilityControllerModel::RiftS" },
				{ "ValveIndex.DisplayName", "Valve Index" },
				{ "ValveIndex.Name", "FOVFPVPUtilityControllerModel::ValveIndex" },
				{ "Vive.DisplayName", "Vive Wand" },
				{ "Vive.Name", "FOVFPVPUtilityControllerModel::Vive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd,
				nullptr,
				"FOVFPVPUtilityControllerModel",
				"FOVFPVPUtilityControllerModel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FOVFPVPUtilitySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OVFPVPUTILITIESADD_API uint32 Get_Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings, Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd(), TEXT("OVFPVPUtilitySettings"), sizeof(FOVFPVPUtilitySettings), Get_Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Hash());
	}
	return Singleton;
}
template<> OVFPVPUTILITIESADD_API UScriptStruct* StaticStruct<FOVFPVPUtilitySettings>()
{
	return FOVFPVPUtilitySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOVFPVPUtilitySettings(FOVFPVPUtilitySettings::StaticStruct, TEXT("/Script/OVFPVPUtilitiesAdd"), TEXT("OVFPVPUtilitySettings"), false, nullptr, nullptr);
static struct FScriptStruct_OVFPVPUtilitiesAdd_StaticRegisterNativesFOVFPVPUtilitySettings
{
	FScriptStruct_OVFPVPUtilitiesAdd_StaticRegisterNativesFOVFPVPUtilitySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OVFPVPUtilitySettings")),new UScriptStruct::TCppStructOps<FOVFPVPUtilitySettings>);
	}
} ScriptStruct_OVFPVPUtilitiesAdd_StaticRegisterNativesFOVFPVPUtilitySettings;
	struct Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultOverrideCameraSpawnDist_MetaData[];
#endif
		static void NewProp_defaultOverrideCameraSpawnDist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_defaultOverrideCameraSpawnDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultHideBookmarks_MetaData[];
#endif
		static void NewProp_defaultHideBookmarks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_defaultHideBookmarks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultHideMeasurements_MetaData[];
#endif
		static void NewProp_defaultHideMeasurements_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_defaultHideMeasurements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultHideDrawings_MetaData[];
#endif
		static void NewProp_defaultHideDrawings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_defaultHideDrawings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultLockZHeightofPawn_MetaData[];
#endif
		static void NewProp_defaultLockZHeightofPawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_defaultLockZHeightofPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultOverrideInert_MetaData[];
#endif
		static void NewProp_defaultOverrideInert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_defaultOverrideInert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultOverrideInteractable_MetaData[];
#endif
		static void NewProp_defaultOverrideInteractable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_defaultOverrideInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screenshotSaveDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_screenshotSaveDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultHideCamera_MetaData[];
#endif
		static void NewProp_defaultHideCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_defaultHideCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_defaultCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnableActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spawnableActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnableActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerModel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerModel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOVFPVPUtilitySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideCameraSpawnDist_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Default to override camera spawning distance" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideCameraSpawnDist_SetBit(void* Obj)
	{
		((FOVFPVPUtilitySettings*)Obj)->defaultOverrideCameraSpawnDist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideCameraSpawnDist = { "defaultOverrideCameraSpawnDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOVFPVPUtilitySettings), &Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideCameraSpawnDist_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideCameraSpawnDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideCameraSpawnDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideBookmarks_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Default to hide bookmark actors in VR" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideBookmarks_SetBit(void* Obj)
	{
		((FOVFPVPUtilitySettings*)Obj)->defaultHideBookmarks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideBookmarks = { "defaultHideBookmarks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOVFPVPUtilitySettings), &Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideBookmarks_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideBookmarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideBookmarks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideMeasurements_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Default to hide measurement actors in VR" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideMeasurements_SetBit(void* Obj)
	{
		((FOVFPVPUtilitySettings*)Obj)->defaultHideMeasurements = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideMeasurements = { "defaultHideMeasurements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOVFPVPUtilitySettings), &Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideMeasurements_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideMeasurements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideMeasurements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideDrawings_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Default to hide drawings in VR" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideDrawings_SetBit(void* Obj)
	{
		((FOVFPVPUtilitySettings*)Obj)->defaultHideDrawings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideDrawings = { "defaultHideDrawings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOVFPVPUtilitySettings), &Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideDrawings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideDrawings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideDrawings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultLockZHeightofPawn_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Default to Lock Z height of VR" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultLockZHeightofPawn_SetBit(void* Obj)
	{
		((FOVFPVPUtilitySettings*)Obj)->defaultLockZHeightofPawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultLockZHeightofPawn = { "defaultLockZHeightofPawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOVFPVPUtilitySettings), &Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultLockZHeightofPawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultLockZHeightofPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultLockZHeightofPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInert_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Default to Override Inert Tag" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInert_SetBit(void* Obj)
	{
		((FOVFPVPUtilitySettings*)Obj)->defaultOverrideInert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInert = { "defaultOverrideInert", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOVFPVPUtilitySettings), &Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInteractable_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Default to Override Interactable Tag" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInteractable_SetBit(void* Obj)
	{
		((FOVFPVPUtilitySettings*)Obj)->defaultOverrideInteractable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInteractable = { "defaultOverrideInteractable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOVFPVPUtilitySettings), &Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInteractable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_screenshotSaveDirectory_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Screenshot Save Directory" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_screenshotSaveDirectory = { "screenshotSaveDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPVPUtilitySettings, screenshotSaveDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_screenshotSaveDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_screenshotSaveDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideCamera_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Default to Hide Cameras in VR" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideCamera_SetBit(void* Obj)
	{
		((FOVFPVPUtilitySettings*)Obj)->defaultHideCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideCamera = { "defaultHideCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOVFPVPUtilitySettings), &Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideCamera_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultCamera_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Default Camera To Spawn" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultCamera = { "defaultCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPVPUtilitySettings, defaultCamera), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_spawnableActors_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "Spawnable Actors" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_spawnableActors = { "spawnableActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPVPUtilitySettings, spawnableActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_spawnableActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_spawnableActors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_spawnableActors_Inner = { "spawnableActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_ControllerModel_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "DisplayName", "VR Controller Model" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_ControllerModel = { "ControllerModel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPVPUtilitySettings, ControllerModel), Z_Construct_UEnum_OVFPVPUtilitiesAdd_FOVFPVPUtilityControllerModel, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_ControllerModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_ControllerModel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_ControllerModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_userName_MetaData[] = {
		{ "Category", "OVFPVPUtilitySettings" },
		{ "Comment", "// Use UPROPERTY() to decorate member variables as they allow for easier integration with network replication as well as potential garbage collection processing\n" },
		{ "DisplayName", "User Name" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
		{ "ToolTip", "Use UPROPERTY() to decorate member variables as they allow for easier integration with network replication as well as potential garbage collection processing" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_userName = { "userName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPVPUtilitySettings, userName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_userName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_userName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideCameraSpawnDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideBookmarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideMeasurements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideDrawings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultLockZHeightofPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultOverrideInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_screenshotSaveDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultHideCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_defaultCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_spawnableActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_spawnableActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_ControllerModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_ControllerModel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::NewProp_userName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd,
		nullptr,
		&NewStructOps,
		"OVFPVPUtilitySettings",
		sizeof(FOVFPVPUtilitySettings),
		alignof(FOVFPVPUtilitySettings),
		Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOVFPVPUtilitySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OVFPVPUtilitySettings"), sizeof(FOVFPVPUtilitySettings), Get_Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOVFPVPUtilitySettings_Hash() { return 3777986462U; }
class UScriptStruct* FOVFPVPUtilitySpawnableActors::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OVFPVPUTILITIESADD_API uint32 Get_Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors, Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd(), TEXT("OVFPVPUtilitySpawnableActors"), sizeof(FOVFPVPUtilitySpawnableActors), Get_Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Hash());
	}
	return Singleton;
}
template<> OVFPVPUTILITIESADD_API UScriptStruct* StaticStruct<FOVFPVPUtilitySpawnableActors>()
{
	return FOVFPVPUtilitySpawnableActors::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOVFPVPUtilitySpawnableActors(FOVFPVPUtilitySpawnableActors::StaticStruct, TEXT("/Script/OVFPVPUtilitiesAdd"), TEXT("OVFPVPUtilitySpawnableActors"), false, nullptr, nullptr);
static struct FScriptStruct_OVFPVPUtilitiesAdd_StaticRegisterNativesFOVFPVPUtilitySpawnableActors
{
	FScriptStruct_OVFPVPUtilitiesAdd_StaticRegisterNativesFOVFPVPUtilitySpawnableActors()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OVFPVPUtilitySpawnableActors")),new UScriptStruct::TCppStructOps<FOVFPVPUtilitySpawnableActors>);
	}
} ScriptStruct_OVFPVPUtilitiesAdd_StaticRegisterNativesFOVFPVPUtilitySpawnableActors;
	struct Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawnThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_spawnName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOVFPVPUtilitySpawnableActors>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnTransform_MetaData[] = {
		{ "Category", "OVFPVPUtilitySpawnableActors" },
		{ "DisplayName", "Transform Offset" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnTransform = { "spawnTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPVPUtilitySpawnableActors, spawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnObject_MetaData[] = {
		{ "Category", "OVFPVPUtilitySpawnableActors" },
		{ "DisplayName", "Spawn Object" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnObject = { "spawnObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPVPUtilitySpawnableActors, spawnObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnThumbnail_MetaData[] = {
		{ "Category", "OVFPVPUtilitySpawnableActors" },
		{ "DisplayName", "Thumbnail" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnThumbnail = { "spawnThumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPVPUtilitySpawnableActors, spawnThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnName_MetaData[] = {
		{ "Category", "OVFPVPUtilitySpawnableActors" },
		{ "Comment", "// Use UPROPERTY() to decorate member variables as they allow for easier integration with network replication as well as potential garbage collection processing\n" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
		{ "ToolTip", "Use UPROPERTY() to decorate member variables as they allow for easier integration with network replication as well as potential garbage collection processing" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnName = { "spawnName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOVFPVPUtilitySpawnableActors, spawnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::NewProp_spawnName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd,
		nullptr,
		&NewStructOps,
		"OVFPVPUtilitySpawnableActors",
		sizeof(FOVFPVPUtilitySpawnableActors),
		alignof(FOVFPVPUtilitySpawnableActors),
		Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OVFPVPUtilitySpawnableActors"), sizeof(FOVFPVPUtilitySpawnableActors), Get_Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOVFPVPUtilitySpawnableActors_Hash() { return 3959128954U; }
	void UOVFPVPUtilitiesAddSettings::StaticRegisterNativesUOVFPVPUtilitiesAddSettings()
	{
	}
	UClass* Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_NoRegister()
	{
		return UOVFPVPUtilitiesAddSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VPSettingsStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VPSettingsStruct;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VPSettingsStruct_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OVFPVPUtilitiesAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OVFPVPUtilitiesAddSettings.h" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::NewProp_VPSettingsStruct_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// properties found in the settings panel\n" },
		{ "DisplayName", "VR Users Settings" },
		{ "ModuleRelativePath", "Public/OVFPVPUtilitiesAddSettings.h" },
		{ "ToolTip", "properties found in the settings panel" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::NewProp_VPSettingsStruct = { "VPSettingsStruct", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOVFPVPUtilitiesAddSettings, VPSettingsStruct), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::NewProp_VPSettingsStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::NewProp_VPSettingsStruct_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::NewProp_VPSettingsStruct_Inner = { "VPSettingsStruct", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOVFPVPUtilitySettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::NewProp_VPSettingsStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::NewProp_VPSettingsStruct_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVFPVPUtilitiesAddSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::ClassParams = {
		&UOVFPVPUtilitiesAddSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVFPVPUtilitiesAddSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOVFPVPUtilitiesAddSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOVFPVPUtilitiesAddSettings, 11731525);
	template<> OVFPVPUTILITIESADD_API UClass* StaticClass<UOVFPVPUtilitiesAddSettings>()
	{
		return UOVFPVPUtilitiesAddSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOVFPVPUtilitiesAddSettings(Z_Construct_UClass_UOVFPVPUtilitiesAddSettings, &UOVFPVPUtilitiesAddSettings::StaticClass, TEXT("/Script/OVFPVPUtilitiesAdd"), TEXT("UOVFPVPUtilitiesAddSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVFPVPUtilitiesAddSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
