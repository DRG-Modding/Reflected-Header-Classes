using UnrealBuildTool;

public class ChaosNiagara : ModuleRules {
    public ChaosNiagara(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ChaosSolverEngine",
            "ChaosSolvers",
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
        });
    }
}
