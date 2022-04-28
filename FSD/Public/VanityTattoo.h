#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "VanityTattoo.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UVanityTattoo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location;
    
    UPROPERTY(EditAnywhere)
    float RotationAngle;
    
    UPROPERTY(EditAnywhere)
    float ScaleBase;
    
    UPROPERTY(EditAnywhere)
    float ScaleStretch;
    
    UVanityTattoo();
};

