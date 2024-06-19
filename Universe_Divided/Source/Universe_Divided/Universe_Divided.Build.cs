// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Universe_Divided : ModuleRules
{
	public Universe_Divided(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
