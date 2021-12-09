using UnrealBuildTool;

public class MediaAssets : ModuleRules {
    public MediaAssets(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioExtensions",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
            "MediaUtils",
        });
    }
}
