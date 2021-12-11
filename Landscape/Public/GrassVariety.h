#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PerPlatformInt
//CROSS-MODULE INCLUDE: Engine PerPlatformFloat
#include "EGrassScaling.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatInterval
//CROSS-MODULE INCLUDE: Engine LightingChannels
#include "GrassVariety.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FGrassVariety {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* GrassMesh;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat GrassDensity;
    
    UPROPERTY(EditAnywhere)
    bool bUseGrid;
    
    UPROPERTY(EditAnywhere)
    float PlacementJitter;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt StartCullDistance;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt EndCullDistance;
    
    UPROPERTY(EditAnywhere)
    int32 MinLOD;
    
    UPROPERTY(EditAnywhere)
    EGrassScaling Scaling;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleX;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleY;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleZ;
    
    UPROPERTY(EditAnywhere)
    bool RandomRotation;
    
    UPROPERTY(EditAnywhere)
    bool AlignToSurface;
    
    UPROPERTY(EditAnywhere)
    bool bUseLandscapeLightmap;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(EditAnywhere)
    bool bReceivesDecals;
    
    UPROPERTY(EditAnywhere)
    bool bCastDynamicShadow;
    
    UPROPERTY(EditAnywhere)
    bool bKeepInstanceBufferCPUCopy;
    
    LANDSCAPE_API FGrassVariety();
};

