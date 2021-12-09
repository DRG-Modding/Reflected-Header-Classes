using UnrealBuildTool;

public class Spatialization : ModuleRules {
    public Spatialization(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioExtensions",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
