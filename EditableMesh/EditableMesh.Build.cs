using UnrealBuildTool;

public class EditableMesh : ModuleRules {
    public EditableMesh(ReadOnlyTargetRules Target) : base(Target) {
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
            "FieldSystemEngine",
            "GeometryCollectionEngine",
            "MeshDescription",
            "PhysicsCore",
        });
    }
}
