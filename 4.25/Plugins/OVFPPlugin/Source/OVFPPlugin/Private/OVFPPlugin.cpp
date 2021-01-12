// Copyright Dan Corrigan 2020 All Rights Reserved.

#include "OVFPPlugin.h"
#include "OVFPPluginStyle.h"
#include "OVFPPluginCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "Modules/ModuleManager.h"
#include "LevelEditor.h"
#include "EditorUtilitySubsystem.h"



//#include "Templates/SharedPointer.h"

//#include "Framework/Docking/TabManager.h"



static const FName OVFPPluginTabName("OVFPPlugin");

#define LOCTEXT_NAMESPACE "FOVFPPluginModule"

void FOVFPPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FOVFPPluginStyle::Initialize();
	FOVFPPluginStyle::ReloadTextures();

	FOVFPPluginCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FOVFPPluginCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FOVFPPluginModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FOVFPPluginModule::RegisterMenus));
}

void FOVFPPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FOVFPPluginStyle::Shutdown();

	FOVFPPluginCommands::Unregister();
}

void FOVFPPluginModule::PluginButtonClicked()
{
	//On main button clicked, open the widget blueprint splash page
	UObject* Obj = LoadObject<UObject> (NULL, TEXT("/OVFPPlugin/OVFP_MainMenuWidget.OVFP_MainMenuWidget"), NULL, LOAD_None, NULL);
	UEditorUtilityWidgetBlueprint* WidgetBP = (UEditorUtilityWidgetBlueprint*)Obj;
	FOVFPPluginModule::RunWidget(WidgetBP); //Open the blutility
	
}



void FOVFPPluginModule::RunWidget(UEditorUtilityWidgetBlueprint* Blueprint)
{
	if (Blueprint) {
		UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
		EditorUtilitySubsystem->SpawnAndRegisterTab(Blueprint);

	}
}



void FOVFPPluginModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FOVFPPluginCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("OVFP");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FOVFPPluginCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FOVFPPluginModule, OVFPPlugin)