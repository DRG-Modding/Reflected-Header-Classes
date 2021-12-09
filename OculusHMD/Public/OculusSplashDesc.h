#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Quat
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "OculusSplashDesc.generated.h"

USTRUCT(BlueprintType)
struct FOculusSplashDesc {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath TexturePath;
    
    UPROPERTY(Config, EditAnywhere)
    FTransform TransformInMeters;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D QuadSizeInMeters;
    
    UPROPERTY(Config, EditAnywhere)
    FQuat DeltaRotation;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D TextureOffset;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D TextureScale;
    
    UPROPERTY(Config, EditAnywhere)
    bool bNoAlphaChannel;
    
    OCULUSHMD_API FOculusSplashDesc();
};

