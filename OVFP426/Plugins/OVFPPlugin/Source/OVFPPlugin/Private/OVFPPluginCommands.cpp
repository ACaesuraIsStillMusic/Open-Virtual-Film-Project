// Copyright Dan Corrigan 2020 All Rights Reserved.

#include "OVFPPluginCommands.h"

#define LOCTEXT_NAMESPACE "FOVFPPluginModule"

void FOVFPPluginCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "OVFP Plugin", "Open OVFP Menu", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
