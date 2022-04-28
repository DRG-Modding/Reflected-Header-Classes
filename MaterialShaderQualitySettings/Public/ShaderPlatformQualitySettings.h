#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MaterialQualityOverrides.h"
#include "ShaderPlatformQualitySettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, PerObjectConfig)
class MATERIALSHADERQUALITYSETTINGS_API UShaderPlatformQualitySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FMaterialQualityOverrides QualityOverrides[4];
    
    UShaderPlatformQualitySettings();
};

