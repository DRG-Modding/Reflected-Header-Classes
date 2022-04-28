#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "EDatasmithAreaLightActorShape.h"
#include "EDatasmithAreaLightActorType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightUnits -FallbackName=ELightUnits
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "DatasmithAreaLightActorTemplate.generated.h"

class UTextureLightProfile;

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDatasmithAreaLightActorType LightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDatasmithAreaLightActorShape LightShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Dimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELightUnits IntensityUnits;
    
    UPROPERTY(EditAnywhere)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureLightProfile> IESTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIESBrightness;
    
    UPROPERTY(EditAnywhere)
    float IESBrightnessScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    float SourceRadius;
    
    UPROPERTY(EditAnywhere)
    float SourceLength;
    
    UPROPERTY(EditAnywhere)
    float AttenuationRadius;
    
    UDatasmithAreaLightActorTemplate();
};

