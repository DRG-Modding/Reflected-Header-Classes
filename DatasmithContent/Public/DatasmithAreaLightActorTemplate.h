#pragma once
#include "CoreMinimal.h"
#include "EDatasmithAreaLightActorType.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "EDatasmithAreaLightActorShape.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: Engine ELightUnits
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

