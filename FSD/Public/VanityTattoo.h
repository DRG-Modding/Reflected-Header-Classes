#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "VanityTattoo.generated.h"

class UTexture2D;

UCLASS()
class UVanityTattoo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(EditAnywhere)
    FVector2D Location;
    
    UPROPERTY(EditAnywhere)
    float RotationAngle;
    
    UPROPERTY(EditAnywhere)
    float ScaleBase;
    
    UPROPERTY(EditAnywhere)
    float ScaleStretch;
    
    UVanityTattoo();
};

