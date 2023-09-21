// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class PVZ_USFX_LAB_01_AVTarget : TargetRules
{
	public PVZ_USFX_LAB_01_AVTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("PVZ_USFX_LAB_01_AV");
	}
}
