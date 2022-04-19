using UnrealBuildTool;

public class FieldSystemEngine : ModuleRules {
    public FieldSystemEngine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "ChaosSolverEngine",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
        });
    }
}
