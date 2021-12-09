using UnrealBuildTool;

public class NiagaraAnimNotifies : ModuleRules {
    public NiagaraAnimNotifies(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
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
