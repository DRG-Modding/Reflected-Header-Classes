using UnrealBuildTool;

public class MediaCompositing : ModuleRules {
    public MediaCompositing(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
        });
    }
}
