// Copyright Dan Corrigan 2020 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Editor/Blutility/Classes/EditorUtilityWidgetBlueprint.h"
#include "Blueprint/UserWidget.h"
#include "Components/Widget.h"



class FToolBarBuilder;
class FMenuBuilder;



class FOVFPPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command. */
	void PluginButtonClicked();

	//
	void RunWidget(UEditorUtilityWidgetBlueprint* Blueprint);
	
private:

	void RegisterMenus();


private:
	TSharedPtr<class FUICommandList> PluginCommands;





};

