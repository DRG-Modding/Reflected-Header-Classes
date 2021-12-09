#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "MeshLayerProperties.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FMeshLayerProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTerrainMaterialCore* StartMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBox BoundingBox;
    
    FSDENGINE_API FMeshLayerProperties();
};

