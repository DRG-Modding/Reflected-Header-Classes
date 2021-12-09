#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "DatasmithLightComponentTemplate.generated.h"

class UMaterialInterface;
class UTextureLightProfile;

UCLASS()
class DATASMITHCONTENT_API UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bVisible: 1;
    
    UPROPERTY()
    uint8 CastShadows: 1;
    
    UPROPERTY()
    uint8 bUseTemperature: 1;
    
    UPROPERTY()
    uint8 bUseIESBrightness: 1;
    
    UPROPERTY()
    float Intensity;
    
    UPROPERTY()
    float Temperature;
    
    UPROPERTY()
    float IESBrightnessScale;
    
    UPROPERTY()
    FLinearColor LightColor;
    
    UPROPERTY()
    UMaterialInterface* LightFunctionMaterial;
    
    UPROPERTY()
    UTextureLightProfile* IESTexture;
    
    UDatasmithLightComponentTemplate();
};

