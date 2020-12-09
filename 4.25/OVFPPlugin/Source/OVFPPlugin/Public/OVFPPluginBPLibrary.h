// Copyright Dan Corrigan 2020 All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Misc/Char.h"
#include "OVFPPlugin.h"


#include "OVFPPluginBPLibrary.generated.h"






UCLASS()
class UOVFPPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

#if WITH_EDITOR
		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Level To World", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static bool VPOVFPAddLevel(UWorld *world, FString FileName, FTransform & LevelTransform);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Level From World", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static bool VPOVFPRemoveLevel(ULevel *inLevel, UWorld *world);
		
		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Level Streaming Class", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static bool VPOVFPSetLevelStreamingClass(ULevelStreaming *inLevel, TSubclassOf < ULevelStreaming > streamingClass);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Level From Streaming Level", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static ULevel *VPOVFPGetLevelFromStreaming(ULevelStreaming *inLevel);
		
		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Cast To Uworld", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static UWorld *VPOVFPCastToWorld(UObject* object, bool &success);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save Level As (No Dialog)", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static bool SaveLevelAs(ULevel* Level, UWorld *world, FString NewPackageName);

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Get World Levels", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static TArray < class ULevel * > VPOVFPGetLevels(UWorld *world);
		
		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save To CSV", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static bool VPOVFPSaveCSV(FString output, FString directory, FString filename, bool bAllowOverwritting = true, bool bAppend = false);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Text File", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static bool VPOVFPReadTextFile(FString FullFilePath, TArray<FString>& StringArray);

		

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Open Editor Utility Widget", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static bool VPOVFPOpenWidget(UEditorUtilityWidgetBlueprint* Blueprint);
		

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Get OVFP Master Level Path Setting", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static TArray<FName> VPOVFPMLPaths();

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Get OVFP ML Prefix Setting", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static TArray<FName> VPOVFPMLPrefix();

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Get OVFP LSL Locations Setting", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static TArray<FName> VPOVFPLSLLocations();

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Get OVFP Default Scale Cube", Keywords = "OVFP Virtual Production VP"), Category = "OVFPPlugins")
			static UStaticMesh* VPOVFPDefaultCube();


#endif	
};

