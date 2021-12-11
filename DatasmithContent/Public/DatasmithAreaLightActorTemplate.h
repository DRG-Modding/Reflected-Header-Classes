#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "DatasmithObjectTemplate.h"
#include "EDatasmithAreaLightActorShape.h"
#include "EDatasmithAreaLightActorType.h"
//CROSS-MODULE INCLUDE: Engine ELightUnits
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "DatasmithAreaLightActorTemplate.generated.h"

class UTextureLightProfile;

UCLASS()
class DATASMITHCONTENT_API UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    EDatasmithAreaLightActorType LightType;
    
    UPROPERTY()
    EDatasmithAreaLightActorShape LightShape;
    
    UPROPERTY()
    FVector2D Dimensions;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float Intensity;
    
    UPROPERTY()
    ELightUnits IntensityUnits;
    
    UPROPERTY()
    float Temperature;
    
    UPROPERTY()
    TSoftObjectPtr<UTextureLightProfile> IESTexture;
    
    UPROPERTY()
    bool bUseIESBrightness;
    
    UPROPERTY()
    float IESBrightnessScale;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    float SourceRadius;
    
    UPROPERTY()
    float SourceLength;
    
    UPROPERTY()
    float AttenuationRadius;
    
    UDatasmithAreaLightActorTemplate();
};

