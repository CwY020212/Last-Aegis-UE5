// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_GASLearning : ModuleRules
{
	public Project_GASLearning(ReadOnlyTargetRules Target) : base(Target)
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
			"Slate",

			 // GAS
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks"
        });

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Project_GASLearning",
			"Project_GASLearning/Variant_Platforming",
			"Project_GASLearning/Variant_Platforming/Animation",
			"Project_GASLearning/Variant_Combat",
			"Project_GASLearning/Variant_Combat/AI",
			"Project_GASLearning/Variant_Combat/Animation",
			"Project_GASLearning/Variant_Combat/Gameplay",
			"Project_GASLearning/Variant_Combat/Interfaces",
			"Project_GASLearning/Variant_Combat/UI",
			"Project_GASLearning/Variant_SideScrolling",
			"Project_GASLearning/Variant_SideScrolling/AI",
			"Project_GASLearning/Variant_SideScrolling/Gameplay",
			"Project_GASLearning/Variant_SideScrolling/Interfaces",
			"Project_GASLearning/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
