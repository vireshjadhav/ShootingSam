// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShootingSam : ModuleRules
{
	public ShootingSam(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ShootingSam",
			"ShootingSam/Variant_Platforming",
			"ShootingSam/Variant_Platforming/Animation",
			"ShootingSam/Variant_Combat",
			"ShootingSam/Variant_Combat/AI",
			"ShootingSam/Variant_Combat/Animation",
			"ShootingSam/Variant_Combat/Gameplay",
			"ShootingSam/Variant_Combat/Interfaces",
			"ShootingSam/Variant_Combat/UI",
			"ShootingSam/Variant_SideScrolling",
			"ShootingSam/Variant_SideScrolling/AI",
			"ShootingSam/Variant_SideScrolling/Gameplay",
			"ShootingSam/Variant_SideScrolling/Interfaces",
			"ShootingSam/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
