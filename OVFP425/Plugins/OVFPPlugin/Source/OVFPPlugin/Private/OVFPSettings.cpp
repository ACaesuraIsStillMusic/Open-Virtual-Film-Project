// Copyright Epic Games, Inc. All Rights Reserved.

#include "OVFPSettings.h"
#include "OVFPPlugin.h"
#include "UObject/ConstructorHelpers.h"

#define LOCTEXT_NAMESPACE "OVFPPlugin"

UOVFPSettings::UOVFPSettings()
{
	CategoryName = TEXT("Plugins");
	SectionName = TEXT("OVFP");

	OVFPBlenderPath;
	


	static ConstructorHelpers::FObjectFinder<UStaticMesh> MyMesh(TEXT("StaticMesh'/OVFPPlugin/tools/scaleCubes/SM_ovfp_ScaleCube-1M1Ft.SM_ovfp_ScaleCube-1M1Ft'"));
	OVFPdefaultScaleCube = MyMesh.Object;
	
	
}

#if WITH_EDITOR




FText UOVFPSettings::GetSectionText() const
{
	return LOCTEXT("SettingsDisplayName", "OVFP");
}

#endif	// WITH_EDITOR

#undef LOCTEXT_NAMESPACE

