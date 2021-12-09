using UnrealBuildTool;

public class EditableMesh : ModuleRules {
    public EditableMesh(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ChaosSolverEngine",
            "ChaosSolvers",
            "Core",
            "CoreUObject",
            "Engine",
            "FieldSystemCore",
            "FieldSystemEngine",
            "GeometryCollectionCore",
            "GeometryCollectionEngine",
            "GeometryCollectionSimulationCore",
            "MeshDescription",
        });
    }
}
