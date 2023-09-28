// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PVZ_USFX_LAB_01_AV : ModuleRules
{
	public PVZ_USFX_LAB_01_AV(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Slate", "SlateCore", "HeadMountedDisplay" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "HeadMountedDisplay" });

        // Uncomment if you are using Slate UI
        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "HeadMountedDisplay" });


    }
}
