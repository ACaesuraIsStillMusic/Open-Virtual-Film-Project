// Copyright Dan Corrigan 2020 All Rights Reserved.

#include "OVFPPluginBPLibrary.h"
#include "OVFPPlugin.h"
#include "OVFPSettings.h"
#include "FileHelpers.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Engine/LevelStreaming.h"
#include "Engine/LevelStreamingDynamic.h"
#include "EditorLevelUtils.h"
#include "EditorModes.h"
#include "Editor.h"
#include "EditorSupportDelegates.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Misc/MessageDialog.h"
#include "BusyCursor.h"
#include "PackageTools.h"
#include "Misc/ScopedSlowTask.h"
#include "IAssetRegistry.h"
#include "AssetRegistryModule.h"
#include "ObjectTools.h"
#include "Engine/MapBuildDataRegistry.h"
#include "Misc/RedirectCollector.h"
#include "Misc/Char.h"
#include "Tools/UEdMode.h"
#include "EditorModeManager.h"
#include "EdMode.h"
#include "EditorModeTools.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "HAL/PlatformFilemanager.h"
#include "Engine/TextureRenderTarget2D.h"

UOVFPPluginBPLibrary::UOVFPPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

#if WITH_EDITOR

TArray<FName> UOVFPPluginBPLibrary::VPOVFPMLPaths()
{
	
	return GetDefault<UOVFPSettings>()->OVFPMLPaths;
	
}

TArray<FName> UOVFPPluginBPLibrary::VPOVFPMLPrefix()
{
	return GetDefault<UOVFPSettings>()->OVFPMLPrefix;
}

TArray<FName> UOVFPPluginBPLibrary::VPOVFPLSLLocations()
{
	return GetDefault<UOVFPSettings>()->OVFPLSLLocations;
}

UStaticMesh* UOVFPPluginBPLibrary::VPOVFPDefaultCube()
{
	return GetDefault<UOVFPSettings>()->OVFPdefaultScaleCube;
}

FOVFPTexNamingConSuffix UOVFPPluginBPLibrary::VPOVFPTexNamingCon()
{
	return GetDefault<UOVFPSettings>()->OVFPdefaultTexNamingCons;
}

FOVFPMaterialParameterConversions UOVFPPluginBPLibrary::VPOVFPMatConvParam()
{
	return GetDefault<UOVFPSettings>()->OVFPdefaultMatConvParam;
}


bool UOVFPPluginBPLibrary::VPOVFPAddLevel(UWorld *world, FString NewPackageName, FTransform & LevelTransform) //add level
{


	FString ANewPackageName;
	if (!FPackageName::TryConvertFilenameToLongPackageName(NewPackageName, ANewPackageName))
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::Format(NSLOCTEXT("Editor", "SaveWorld_BadFilename", "Failed to save the map. The filename '{0}' is not within the game or engine content folders found in '{1}'."), FText::FromString(NewPackageName), FText::FromString(FPaths::RootDir())));
		return false;
	}

	ULevelStreaming* NewLevel = NULL;
	NewLevel = EditorLevelUtils::AddLevelToWorld(world, *ANewPackageName, ULevelStreamingKismet::StaticClass());

	return true;


}


bool UOVFPPluginBPLibrary::VPOVFPRemoveLevel(ULevel *inLevel, UWorld *world) //remove level
{
	bool status = EditorLevelUtils::RemoveLevelFromWorld(inLevel);
	return status;
}

bool UOVFPPluginBPLibrary::VPOVFPSetLevelStreamingClass(ULevelStreaming *inLevel, TSubclassOf < ULevelStreaming > streamingClass)
{
	EditorLevelUtils::SetStreamingClassForLevel(inLevel, streamingClass);
	return true;
}



bool UOVFPPluginBPLibrary::SaveLevelAs(ULevel* Level, UWorld *world, FString NewPackageName)
{
	FString ANewPackageName;
	if (!FPackageName::TryConvertFilenameToLongPackageName(NewPackageName, ANewPackageName))
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::Format(NSLOCTEXT("Editor", "SaveWorld_BadFilename", "Failed to save the map. The filename '{0}' is not within the game or engine content folders found in '{1}'."), FText::FromString(NewPackageName), FText::FromString(FPaths::RootDir())));
		return false;
	}
	static FString* Outname = nullptr;
	bool status = FEditorFileUtils::SaveLevel(Level, NewPackageName, Outname);

	return status;
	//FEditorFileUtils::SaveLevelAs
}


TArray < class ULevel * > UOVFPPluginBPLibrary::VPOVFPGetLevels(UWorld *world)
{

	return world->GetLevels();
}


ULevel *UOVFPPluginBPLibrary::VPOVFPGetLevelFromStreaming(ULevelStreaming *inLevel)
{
	return inLevel->GetLoadedLevel();
}

UWorld *UOVFPPluginBPLibrary::VPOVFPCastToWorld(UObject *object, bool& success)
{
	success = false;
	UWorld* world = Cast<UWorld>(object);
	if (world != nullptr)
	{
		success = true;
	//	FMessageDialog::Open(EAppMsgType::Ok, FText::Format(NSLOCTEXT("Editor", "SaveWorld_BadFilename", "sucess")));
	//	return world;
	}
	return world;
}


bool UOVFPPluginBPLibrary::VPOVFPOpenWidget(UEditorUtilityWidgetBlueprint* Blueprint)
{
	FOVFPPluginModule plugin;
	plugin.RunWidget(Blueprint);
	return true;
}

bool UOVFPPluginBPLibrary::VPOVFPSaveCSV(FString output, FString directory, FString filename, bool bAllowOverwritting, bool bAppend)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	// CreateDirectoryTree returns true if the destination
	// directory existed prior to call or has been created
	// during the call.
	if (PlatformFile.CreateDirectoryTree(*directory))
	{
		// Get absolute file path
		FString AbsoluteFilePath = directory + "/" + filename;

		// Allow overwriting or file doesn't already exist
		if (bAllowOverwritting || !PlatformFile.FileExists(*AbsoluteFilePath))
		{
			if (bAppend)
			{
				return FFileHelper::SaveStringToFile(output, *AbsoluteFilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
			}else
			{
				return FFileHelper::SaveStringToFile(output, *AbsoluteFilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_None);
			}
		}
	}


	return false;

	
}

bool UOVFPPluginBPLibrary::VPOVFPReadTextFile(FString FullFilePath, TArray<FString>& StringArray)
{
	
	

	return FFileHelper::LoadANSITextFileToStrings(*(FullFilePath), NULL, StringArray);
	

}

#endif





