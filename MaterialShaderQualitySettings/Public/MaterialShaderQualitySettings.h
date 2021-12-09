#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MaterialShaderQualitySettings.generated.h"

class UShaderPlatformQualitySettings;

UCLASS()
class MATERIALSHADERQUALITYSETTINGS_API UMaterialShaderQualitySettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap;
    
public:
    UMaterialShaderQualitySettings();
};

