#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GrassVariety.h"
#include "LandscapeGrassType.generated.h"

class UStaticMesh;

UCLASS(MinimalAPI)
class ULandscapeGrassType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGrassVariety> GrassVarieties;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableDensityScaling: 1;
    
    UPROPERTY()
    UStaticMesh* GrassMesh;
    
    UPROPERTY()
    float GrassDensity;
    
    UPROPERTY()
    float PlacementJitter;
    
    UPROPERTY()
    int32 StartCullDistance;
    
    UPROPERTY()
    int32 EndCullDistance;
    
    UPROPERTY()
    bool RandomRotation;
    
    UPROPERTY()
    bool AlignToSurface;
    
    ULandscapeGrassType();
};

