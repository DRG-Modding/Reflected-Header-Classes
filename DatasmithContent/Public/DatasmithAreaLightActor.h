#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: Engine Actor
#include "EDatasmithAreaLightActorType.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "EDatasmithAreaLightActorShape.h"
//CROSS-MODULE INCLUDE: Engine ELightUnits
#include "DatasmithAreaLightActor.generated.h"

class UTextureLightProfile;

UCLASS(MinimalAPI)
class ADatasmithAreaLightActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDatasmithAreaLightActorType LightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDatasmithAreaLightActorShape LightShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Dimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELightUnits IntensityUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureLightProfile* IESTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseIESBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IESBrightnessScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpotlightInnerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpotlightOuterAngle;
    
    ADatasmithAreaLightActor();
};

