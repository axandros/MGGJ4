// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MGGJ4 : ModuleRules
{
	public MGGJ4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
