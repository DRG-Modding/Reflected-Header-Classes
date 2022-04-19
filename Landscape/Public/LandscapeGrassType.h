#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GrassVariety.h"
#include "LandscapeGrassType.generated.h"

class UStaticMesh;

UCLASS(MinimalAPI)
class ULandscapeGrassType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrassVariety> GrassVarieties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDensityScaling: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UStaticMesh* GrassMesh;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float GrassDensity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float PlacementJitter;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 StartCullDistance;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 EndCullDistance;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool RandomRotation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool AlignToSurface;
    
    ULandscapeGrassType();
};

