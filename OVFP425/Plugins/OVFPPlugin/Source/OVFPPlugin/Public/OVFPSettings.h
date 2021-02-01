// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/DeveloperSettings.h"
#include "OVFPSettings.generated.h"


USTRUCT(BlueprintType)
struct FOVFPTexNamingConSuffix
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Texture Prefixes"))
		TArray<FString> OVFPTexPrefixes = { "T" , "TX" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Base Color Texture Suffixes"))
		TArray<FString> OVFPbaseColorTexSuffixes = { "col","baseColor","albedo","diffuse","d","b" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Normal Texture Suffixes"))
		TArray<FString> OVFPnormalTextureSuffixes = {"nrm","n","normal"};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Detail Normal Texture suffixes"))
		TArray<FString> OVFPdetNrmTexSuffixes = {"DetailNormal"};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "ORM Texture Suffixes"))
		TArray<FString> OVFPormTexSuffixes = {"orm", "ORM Material"};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "RMA Texture Suffixes"))
		TArray<FString> OVFPrmaTexSuffixes = { "rma" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Roughness Texture suffixes"))
		TArray<FString> OVFPrghTexSuffixes = { "rgh","Roughness","r" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "AO Texture suffixes"))
		TArray<FString> OVFPaoTexSuffixes = { "ao","AmbientOcclusion" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Metallic Texture suffixes"))
		TArray<FString> OVFPmetTexSuffixes = { "met","Metallic","m" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Emissive Texture suffixes"))
		TArray<FString> OVFPemiTexSuffixes = { "emi","Emissive" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Opacity Texture suffixes"))
		TArray<FString> OVFPopaTexSuffixes = { "opa","opacity","Opacity Mask" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Displacement Texture suffixes"))
		TArray<FString> OVFPdispTexSuffixes = { "disp","displacement","h" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Gloss Texture suffixes"))
		TArray<FString> OVFPglossTexSuffixes = { "gloss" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Subsurface Color Texture suffixes"))
		TArray<FString> OVFPsubcTexSuffixes = { "subc","subsurface" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Subsurface Intensity Texture suffixes"))
		TArray<FString> OVFPsubiTexSuffixes = { "subi" };
};

USTRUCT(BlueprintType)
struct FOVFPMaterialParameterConversions
{
	GENERATED_USTRUCT_BODY();

	//the tools will test against the names of parameters without spaces and as the lowercase version.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Base Color Texture Parameters"))
		TArray<FString> OVFPbaseColorTexParam = { "col","baseColor","albedo","diffuse" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Normal Texture Parameters"))
		TArray<FString> OVFPnormalTextureParam = { "nrm","normal"};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Detail Normal Texture Parameters"))
		TArray<FString> OVFPdetNrmTexParam = { "DetailNormal" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "ORM Texture Parameters"))
		TArray<FString> OVFPormTexParam = { "orm", "ORM Material" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "RMA Texture Parameters"))
		TArray<FString> OVFPrmaTexParam = { "rma", };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Roughness Texture Parameters"))
		TArray<FString> OVFPrghTexParam = { "rgh","Roughness" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "AO Texture Parameters"))
		TArray<FString> OVFPaoTexParam = { "ao","AmbientOcclusion" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Metallic Texture Parameters"))
		TArray<FString> OVFPmetTexParam = { "met","Metallic" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Emissive Texture Parameters"))
		TArray<FString> OVFPemiTexParam = { "emi","Emissive" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Opacity Texture Parameters"))
		TArray<FString> OVFPopaTexParam = { "opa","opacity","Opacity Mask" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Displacement Texture Parameters"))
		TArray<FString> OVFPdispTexParam = { "disp","displacement" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Gloss Texture Parameters"))
		TArray<FString> OVFPglossTexParam = { "gloss" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Subsurface Color Texture Parameters"))
		TArray<FString> OVFPsubcTexParam = { "subc","subsurface" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Subsurface Intensity Texture Parameters"))
		TArray<FString> OVFPsubiTexParam = { "subi" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "AO Brightness Parameter Names"))
		TArray<FString> OVFPaoBrightParam = { "AO Brightness" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "AO Contrast Parameter Names"))
		TArray<FString> OVFPaoConParam = { "AO Contrast" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Base Color Brightness Parameter Names"))
		TArray<FString> OVFPcolBrightParam = { "BaseColor Brightness" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Base Color Contrast Parameter Names"))
		TArray<FString> OVFPcolConParam = { "BaseColor Contrast" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Base Color Desaturation Parameter Names"))
		TArray<FString> OVFPcolDesatParam = { "BaseColor Desaturation" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Base Color Tint Parameter Names"))
		TArray<FString> OVFPcolTintParam = { "BaseColor Tint" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Metallic Amount Parameter Names"))
		TArray<FString> OVFPmetBrightParam = { "Metallic Brightness" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Metallic Contrast Parameter Names"))
		TArray<FString> OVFPmetConParam = { "Metallic Contrast" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Detail Normal Scale Parameter Names"))
		TArray<FString> OVFPdetNrmScaleParam = { "DetailNormalScale" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Detail Normal Intensity Parameter Names"))
		TArray<FString> OVFPdetNrmIntParam = { "DetailNormalScale" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Normal Intensity Parameter Names"))
		TArray<FString> OVFPNrmIntParam = { "Normal Intensity" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cleanup, meta = (DisplayName = "Roughness Intensity Parameter Names"))
		TArray<FString> OVFPRghIntParam = { "Roughness Intensity" };

};


/**
 * Configure the Python plug-in.
 */
UCLASS(config = Engine, defaultconfig)
class UOVFPSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UOVFPSettings();

#if WITH_EDITOR
	
	//~ UDeveloperSettings interface
	virtual FText GetSectionText() const override;
#endif
	/*
	UPROPERTY(config, EditAnywhere, Category = Python, meta = (ConfigRestartRequired = true, MultiLine = true))
		TArray<FString> StartupScripts;

	UPROPERTY(config, EditAnywhere, Category = Python, meta = (ConfigRestartRequired = true, RelativePath))
		TArray<FDirectoryPath> AdditionalPaths;

	UPROPERTY(config, EditAnywhere, Category = Python, meta = (ConfigRestartRequired = true))
		bool bDeveloperMode;

	UPROPERTY(config, EditAnywhere, Category = PythonRemoteExecution, meta = (DisplayName = "Enable Remote Execution?"))
		bool bRemoteExecution;
	*/
	/** The multicast group endpoint (in the form of IP_ADDRESS:PORT_NUMBER) that the UDP multicast socket should join */
	
	UPROPERTY(config, EditAnywhere, Category = OutputSettings, AdvancedDisplay, meta = (DisplayName = "Path to Blender Installation"))
		FDirectoryPath OVFPBlenderPath;
	
	UPROPERTY(config, EditAnywhere, Category = DynamicSetlist, meta = (DisplayName = "Directories where master levels may be found"))
		TArray<FName> OVFPMLPaths = { "/Game/Environments" };
	
	UPROPERTY(config, EditAnywhere, Category = DynamicSetlist, meta = (DisplayName = "Master Level Prefixes"))
		TArray<FName> OVFPMLPrefix = { "ML" };

	UPROPERTY(config, EditAnywhere, Category = DynamicSetlist, meta = (DisplayName = "Directories where lighting template levels may be found"))
		TArray<FName> OVFPLSLLocations = { "/Game/assets/lights" };

	UPROPERTY(EditAnywhere, Category = OVFP, meta = (DisplayName = "Default Scale Cube"))
		UStaticMesh* OVFPdefaultScaleCube;
	
	UPROPERTY(config, EditAnywhere, Category = Cleanup,  meta = (DisplayName = "Material Naming Convention Suffixes"))
		FOVFPTexNamingConSuffix OVFPdefaultTexNamingCons;
	
	UPROPERTY(config, EditAnywhere, Category = Cleanup, meta = (DisplayName = "Material Conversion Parameters"))
		FOVFPMaterialParameterConversions OVFPdefaultMatConvParam;
	
};
