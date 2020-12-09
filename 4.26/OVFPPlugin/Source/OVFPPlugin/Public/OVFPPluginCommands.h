// Copyright Dan Corrigan 2020 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "OVFPPluginStyle.h"

class FOVFPPluginCommands : public TCommands<FOVFPPluginCommands>
{
public:

	FOVFPPluginCommands()
		: TCommands<FOVFPPluginCommands>(TEXT("OVFPPlugin"), NSLOCTEXT("Contexts", "OVFPPlugin", "OVFPPlugin Plugin"), NAME_None, FOVFPPluginStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
