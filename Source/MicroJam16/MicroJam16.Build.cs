// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MicroJam16 : ModuleRules
{
	public MicroJam16(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
