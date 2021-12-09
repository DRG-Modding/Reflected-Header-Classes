#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MaterialQualityOverrides.h"
#include "ShaderPlatformQualitySettings.generated.h"

UCLASS(DefaultConfig, PerObjectConfig)
class MATERIALSHADERQUALITYSETTINGS_API UShaderPlatformQualitySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FMaterialQualityOverrides QualityOverrides[3];
    
    UShaderPlatformQualitySettings();
};

