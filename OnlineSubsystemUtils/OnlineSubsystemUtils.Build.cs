using UnrealBuildTool;

public class OnlineSubsystemUtils : ModuleRules {
    public OnlineSubsystemUtils(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioExtensions",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
            "OnlineSubsystem",
        });
    }
}
